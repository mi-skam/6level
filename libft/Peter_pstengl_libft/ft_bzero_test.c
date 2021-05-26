/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:24:40 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 16:36:21 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include <strings.h>

#include "libft.h"

int	main(void)
{
	char	*space1;
	char	*space2;

	space1 = ft_strnew("Hello World!");
	space2 = ft_strnew("Hello World!");
	ft_bzero(space1, 5);
	bzero(space2, 5);
	assert(memcmp(space1, space2, 12) == 0);
	free(space1);
	free(space2);
}
