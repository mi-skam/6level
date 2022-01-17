/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:41:18 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 16:56:48 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*src1;
	char	*src2;
	char	*dest1;
	char	*dest2;

	src1 = ft_strnew("Hello World!");
	src2 = ft_strnew("Hello World!");
	dest1 = (src1 + 3);
	dest2 = (src2 + 3);
	dest1 = ft_memmove(dest1, src1, 5);
	dest2 = memmove(dest2, src2, 5);
	assert(memcmp(dest1, dest2, 10) == 0);
	free(src1);
	free(src2);
	return (0);
}
