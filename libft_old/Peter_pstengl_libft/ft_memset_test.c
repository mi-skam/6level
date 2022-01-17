/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 13:23:32 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 16:27:26 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdlib.h>

#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*space1;
	char	*space2;

	space1 = ft_strnew("Hello World!");
	assert(ft_memset(space1, 'X', 5) == memset(space1, 'X', 5));
	free(space1);
	space1 = ft_strnew("Hello World!");
	assert(ft_memset(space1, 'X', 0) == space1);
	free(space1);
	space1 = ft_strnew("Hello World!");
	assert(ft_memset(space1, 0, 5) == memset(space1, 0, 5));
	free(space1);
	space1 = ft_strnew("Hello World!");
	space2 = ft_strnew("Hello World!");
	ft_memset(space1, 'X', 5);
	memset(space2, 'X', 5);
	assert(memcmp(space1, space2, 12) == 0);
	free(space1);
	free(space2);
	return (0);
}
