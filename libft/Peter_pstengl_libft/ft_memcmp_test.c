/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:46:08 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 16:40:50 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = ft_strnew("Hello World!");
	str2 = ft_strnew("Hello Wolld!");
	assert(ft_memcmp(str1, str2, 0) == 0);
	assert(ft_memcmp(str1, str2, 12) == memcmp(str1, str2, 12));
	free(str1);
	free(str2);
	return (0);
}
