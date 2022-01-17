/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 18:30:53 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 16:37:35 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	*dest1;
	char	*dest2;
	char	*src;

	src = ft_strnew("Hello World!");
	dest1 = calloc(1, 20);
	assert(ft_memcpy(dest1, src, 5) == memcpy(dest1, src, 5));
	free(dest1);
	dest1 = calloc(1, 20);
	dest2 = calloc(1, 20);
	ft_memcpy(dest1, src, 5);
	memcpy(dest2, src, 5);
	assert(memcmp(dest1, dest2, 12) == 0);
	free(src);
	free(dest1);
	free(dest2);
	return (0);
}
