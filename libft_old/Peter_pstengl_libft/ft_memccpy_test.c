/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 18:41:08 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 16:39:29 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*src;
	char	*dest1;
	char	*dest2;

	src = ft_strnew("Hello World!");
	dest1 = calloc(1, 20);
	assert(ft_memccpy(dest1, src, 'l', 5) == memccpy(dest1, src, 'l', 5));
	assert(ft_memccpy(dest1, src, 'x', 2) == memccpy(dest1, src, 'x', 2));
	free(dest1);
	dest1 = ft_strnew("Who's there?");
	dest2 = ft_strnew("Who's there?");
	ft_memccpy(dest1, src, 'l', 5);
	memccpy(dest2, src, 'l', 5);
	assert(memcmp(dest1, dest2, 12) == 0);
	free(src);
	free(dest1);
	free(dest2);
	return (0);
}
