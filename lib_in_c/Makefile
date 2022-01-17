# Compiler settings
CC=gcc
CFLAGS=-Wall -Wextra -Werror
LDFLAGS=-ll -L.

# Dependencies
SRCs =	ft_strcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strnew.c
OBJs =	$(SRCs:.c=.o)

# Targets
TEST = libl_test
LIB = libl.a

# Utils
RM = rm -f

# Phony targets are no files, but "virtual" targets
.PHONY: all clean

all: $(TEST)

clean:
	$(RM) $(OBJs)
	$(RM) $(TEST)
	$(RM) $(LIB)

# "Real" file targets

# Implicit rule, compliles ".o" files automatically. http://www.gnu.org/software/make/manual/html_node/Catalogue-of-Rules.html#Catalogue-of-Rules
$(LIB): $(OBJs)
	ar rcs $(LIB) $(OBJs)

$(TEST): libl_test.c $(LIB)
	$(CC) $(CFLAGS) -o $(TEST) libl_test.c $(LDFLAGS)
