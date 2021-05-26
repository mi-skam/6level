#!/bin/bash
GREEN="\e[32m"
RED="\e[31m"
RESET="\e[0m"

# Config
SET_COMPILE=1
SET_NORM=1
SET_MISSING=1
SET_VALGRIND=1
SET_FUNC_CHECK=1
SET_STATIC_CHECK=1
SET_CLEAN_PRE=1
SET_CLEAN_POST=1
CFLAGS="-g -Og -Wall -Werror -Wextra -L. -lft"

# Runtime vars
TOTAL=0
COUNT=0
PASS=0
COV=0
COV_TOTAL=0
COV_YES=0
C_FILES=""
TEST_FILES=""
MISSING_FILES=""

for instr in $@; do
    if [ $instr == "--no-compile" ]; then
        SET_COMPILE=0
    elif [ $instr == "--no-norm" ]; then
        SET_NORM=0
    elif [ $instr == "--no-missing" ]; then
        SET_MISSING=0
    elif [ $instr == "--no-memcheck" ]; then
        SET_VALGRIND=0
    elif [ $instr == "--no-check-func" ]; then
        SET_FUNC_CHECK=0
    elif [ $instr == "--no-check-static" ]; then
        SET_STATIC_CHECK=0
    elif [ $instr == "--no-pre-clean" ]; then
        SET_CLEAN_PRE=0
    elif [ $instr == "--no-post-clean" ]; then
        SET_CLEAN_POST=0
    elif [ $instr == "--no-clean" ]; then
        SET_CLEAN_PRE=0
        SET_CLEAN_POST=0
    elif [ $instr == "--compile" ]; then
        SET_COMPILE=1
    elif [ $instr == "--norm" ]; then
        SET_NORM=1
    elif [ $instr == "--missing" ]; then
        SET_MISSING=1
    elif [ $instr == "--memcheck" ]; then
        SET_VALGRIND=1
    elif [ $instr == "--check-func" ]; then
        SET_FUNC_CHECK=1
    elif [ $instr == "--check-static" ]; then
        SET_STATIC_CHECK=1
    elif [ $instr == "--pre-clean" ]; then
        SET_CLEAN_PRE=1
    elif [ $instr == "--post-clean" ]; then
        SET_CLEAN_POST=1
    elif [ $instr == "--clean" ]; then
        SET_CLEAN_PRE=1
        SET_CLEAN_POST=1
    elif [ $instr == "--bsd" ];then
        CFLAGS="-lbsd $CFLAGS"
    elif [ $instr == "--fast" ]; then
        SET_COMPILE=0
        SET_NORM=0
        SET_MISSING=0
        SET_VALGRIND=0
        SET_FUNC_CHECK=0
        SET_STATIC_CHECK=0
        SET_CLEAN_PRE=0
        SET_CLEAN_POST=0
    else
        if [ -f $instr ]; then
            C_FILES="$C_FILES $instr"
        else
            echo "Usage:"
            echo "--no-compile      disable recompiling with Makefile"
            echo "--compile         enable recompiling with Makefile [default]"
            echo "--no-norm         disable norm checking"
            echo "--norm            enable norm checking [default]"
            echo "--no-missing      disable display missing tests"
            echo "--missing         enable display missing tests [default]"
            echo "--no-check-func   disable check for non libft usage"
            echo "--check-func      enable check for non libft usage [default]"
            echo "--no-pre-clean    disable cleaning before starting"
            echo "--pre-clean       enable cleaning before starting {default}"
            echo "--no-post-clean   disable cleaning after run"
            echo "--post-clean      enable cleaning after run [default]"
            echo "--no-clean        --no-pre-clean --no-post-clean"
            echo "--clean           --pre-clean --post-clean [default]"
            echo "--no-check-static disable checking for non static functions"
            echo "--check-static    enable checking for non static functions [default]"
            echo "--no-memcheck     disable memory leak checking with valgrind"
            echo "--memcheck        enable memory leak checking with valgrind [default]"
            echo "--bsd             compile with bsd lib"
            echo "--fast            All the above disabled"
            echo ""
            echo "Warning: Arguments are processed in the order they are passed in. Be aware of possible overwrites"
            exit 1
        fi
    fi
done


# Getting Test Coverage and total test count:
if [ -z "$C_FILES" ]; then
    for cfile in $(find -type f -name "*.c" -not -name "*_test.c" -printf "%f "); do
        C_FILES="$C_FILES $cfile"
    done
fi

for cfile in $C_FILES; do
    COV_TOTAL=$(($COV_TOTAL + 1))
    if [ -f ${cfile/.c/_test.c} ]; then
        TOTAL=$(($TOTAL + 1))
        TEST_FILES="$TEST_FILES ${cfile/.c/_test.c}"
    else
        MISSING_FILES="$MISSING_FILES $cfile"
    fi
done

# Check the Norm
if [ $SET_NORM == 1 ]; then
    echo "Checking Norm..."
    OUTPUT=$(norminette $C_FILES)
    EXIT_CODE=$?
    echo "$OUTPUT" | grep -e "Error:" -e "Error!"
    if [ $EXIT_CODE != 0 ]; then
        exit 1;
    fi
    echo "Done."
fi

# Re-Compile the Makefile
if [ $SET_COMPILE == 1 ]; then
    echo "Compiling..."
    if [ $SET_CLEAN_PRE == 1 ]; then
        make fclean > /dev/null
    fi
    make all > /dev/null | exit 1
    make bonus > /dev/null | exit 1
    echo "Done."
fi

# Running tests
for testfile in ${TEST_FILES}; do
    COUNT=$((COUNT + 1))
    echo "== TEST [$COUNT/$TOTAL]: ${testfile/_test.c/.c} =="
    gcc $testfile -o $testfile.out $CFLAGS
    if [ -f "./$testfile.out" ]; then
        if [ $SET_VALGRIND == 1 ]; then
            valgrind --error-exitcode=1 --leak-check=full -q --show-leak-kinds=all --errors-for-leak-kinds=all ./$testfile.out
        else
            ./$testfile.out
        fi
        if [ $? == 0 ]; then
            PASS=$(($PASS + 1))
            echo -e "== ${GREEN}PASS${RESET}: ${testfile/_test.c/.c} =="
            continue
        fi
    fi
    echo -e "== ${RED}FAIL${RESET}: ${testfile/_test.c/.c} =="
done

# Cleaning
if [ $SET_CLEAN_POST == 1 ]; then
    make fclean > /dev/null
    rm -f *_test.c.out
fi

# Display results
echo "## RESULTS ################################"
COV=$((($TOTAL * 100) / $COV_TOTAL));
echo "Test Coverage: $COV% ($TOTAL of $COV_TOTAL files)"
echo " Passed Tests: $((($PASS * 100) / $TOTAL))% ($PASS of $TOTAL tests)"

# Show missing test files
if [ $SET_MISSING == 1 ]; then
    echo "Missing Tests: $MISSING_FILES"
fi

# Check if used normal c func instead of libft
if [ $SET_FUNC_CHECK == 1 ]; then
    echo "Searching for possible misuse of non libft functions"
    for function_file in $TEST_FILES; do
        function="${function_file/_test.c/}"
        function="${function/_bonus/}"
        grep -r -e "${function/ft_/}" --include=\*.c --exclude=\*_test.c --exclude=${function_file/_test.c/} | grep -v "$function"
    done
fi

# Check for non static additional functions
if [ $SET_STATIC_CHECK == 1 ]; then
    echo "Searching for non static additional functions"
    for function_file in $TEST_FILES; do
        function="${function_file/_test.c/}"
        function="${function/_bonus/}"
        REGEX='^(?:int|void|char|size_t|l_list|unsigned int|unsigned char)	\**[a-z_]+\('
        OUTPUT=$(grep -h -E "$REGEX" $function_file | grep -v $function)
        if [ "$OUTPUT" ]; then
            echo "$function_file:"
            echo "$OUTPUT"
        fi
        OUTPUT=$(grep -h -E "$REGEX" ${function_file/_test.c/.c} | grep -v $function)
        if [ "$OUTPUT" ]; then
            echo "${function_file/_test.c/.c}:"
            echo "$OUTPUT"
        fi
    done
fi

# Exit based on if test passed or not
if [ $PASS == $TOTAL ]; then
    exit 0
else
    exit 1
fi
