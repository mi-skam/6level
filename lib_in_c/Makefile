SRCs =	ft_strcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strnew.c

OBJs =	$(SRCs:.c=.o)

NAME = libl_test

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM = rm -f

.PHONY: all clean

all: $(NAME)

clean:
	$(RM) $(OBJs)
	$(RM) $(NAME)

${NAME}: libl_test.c ${OBJs}
	$(CC) $(CFLAGS) -o $@ $^