/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:41:32 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 16:54:02 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	*str;
	char	*dest1;
	char	*dest2;

	str = ft_strnew("Hello World!");
	assert(ft_memchr(str, 'l', 8) == memchr(str, 'l', 8));
	dest1 = ft_memchr(str, 'l', 8);
	dest2 = memchr(str, 'l', 8);
	assert(memcmp(dest1, dest2, 6) == 0);
	free(str);
	return (0);
}
