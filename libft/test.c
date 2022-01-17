/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:06:46 by i.ryspaev         #+#    #+#             */
/*   Updated: 2022/01/17 20:05:44 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "libft.h"

int	min(int a, int b) {
	return ((a < b) ? a : b);
}

int	same_sign(int a, int b) {
	return ((a < 0 && b < 0) || (a > 0 && b > 0));
}

void test_char_ft(int (*org)(int), int (*ft)(int)) {
	int	i;
	int	ret_o, ret_y;

	printf("[int|unsigned char|expected|yours]\n");
	i = 0;
	while (i < 256) {
		ret_o = (*org)(i);
		ret_y = (*ft)(i);
		if (ret_o == ret_y)
			printf("G");
		else if (same_sign(ret_o, ret_y))
			printf("g");
		else
			printf("[%d|%c|%d|%d]", i, i, ret_o, ret_y);
		i++;
	}
	printf("\n");
}

int main(int argc, char const *argv[]) {
	// int	j;
	(void) argc;
	(void) argv;

	/*
	atoi
	*/
	printf("---atoi---[string|atoi|yours]\n");

	int i = 1;
	while (i < argc) {
		if (atoi(argv[i]) == ft_atoi((char*) argv[i])) {
			printf("G");
		} else {
			printf("[%s|%d|%d]", argv[i], atoi(argv[i]), ft_atoi((char*) argv[i]));
		}
		i++;
	}
	printf("\n");

	/*
	bzero
	*/
	printf("\n---bzero---[string|length]\n");

	char *str_bzero_org = NULL;
	char *str_bzero_ft = NULL;
	int	min_length;

	i = 0;
	while (i < argc) {
		str_bzero_org = strdup(argv[i]);
		str_bzero_ft = strdup(argv[i]);
		min_length = min(strlen(argv[i]), 5);
		bzero(str_bzero_org, min_length);
		ft_bzero((void*)str_bzero_ft, min_length);
		if (memcmp(str_bzero_org, str_bzero_ft, min_length) == 0)
			printf("G");
		else
			printf("[%s|%d]", argv[i], min_length);
		free(str_bzero_org);
		free(str_bzero_ft);
		i++;
	}
	printf("\n");

	printf("\n---isalpha---");
	test_char_ft(&isalpha, &ft_isalpha);
}