/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:55:11 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/25 12:16:05 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	size_t	index;
	char	**dest;

	dest = ft_split("Hello World, this is great!", ' ');
	assert(dest != NULL);
	assert(strcmp(dest[0], "Hello") == 0);
	assert(strcmp(dest[1], "World,") == 0);
	assert(strcmp(dest[2], "this") == 0);
	assert(strcmp(dest[3], "is") == 0);
	assert(strcmp(dest[4], "great!") == 0);
	assert(dest[5] == NULL);
	index = 0;
	while (index < 6)
	{
		free(dest[index]);
		index++;
	}
	free(dest);
	dest = ft_split("Hello World, this is great!", 'z');
	ft_printarr(dest);
	assert(dest != NULL);
	assert(strcmp(dest[0], "Hello World, this is great!") == 0);
	assert(dest[1] == NULL);
	free(dest[0]);
	free(dest);
	return (0);
}
