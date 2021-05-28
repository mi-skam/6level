SRCs =	ft_strcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strnew.c

OBJs =	$(SRCs:.c=.o)

TEST = libl_test

LIB = libl.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM = rm -f

.PHONY: all clean

all: $(TEST)

clean:
	$(RM) $(OBJs)
	$(RM) $(TEST)
	$(RM) $(LIB)

$(LIB): $(OBJs)
	ar rcs $(LIB) $(OBJs)

$(TEST): libl_test.c $(LIB)
	$(CC) $(CFLAGS) -o $@ $< -l:$(LIB) -L.

