# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 17:00:48 by i.ryspaev         #+#    #+#              #
#    Updated: 2021/05/20 22:29:25 by i.ryspaev        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_memset.c			\
			ft_bzero.c 			\
			ft_memcpy.c			\
			ft_memmove.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_strlen.c			\
			ft_strlcpy.c		\
			ft_strlcat.c		\
			ft_strchr.c 		\
			ft_strrchr.c		\
			ft_strnstr.c		\
			ft_strncmp.c		\
			ft_atoi.c			\
			ft_isalpha.c		\
			ft_isdigit.c		\
			ft_isalnum.c		\
			ft_isascii.c		\
			ft_isprint.c		\
			ft_toupper.c		\
			ft_tolower.c		\
			ft_calloc.c			\
			ft_strdup.c

OBJS 		= $(SRCS:.c=.o)

NAME = libft.a 

CC = gcc

RM = rm -f 

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):		$(OBJS)
					ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean: clean
			$(RM) $(NAME)

re:		fclean $(NAME)