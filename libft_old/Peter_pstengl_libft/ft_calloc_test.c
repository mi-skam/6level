/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:24:36 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 18:49:09 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	void	*dest1;
	void	*dest2;

	dest1 = ft_calloc(4, 6);
	dest2 = calloc(4, 6);
	assert((dest1 != NULL) == (dest2 != NULL));
	assert(memcmp(dest1, dest2, 4 * 6) == 0);
	assert(ft_calloc(0, 6) == NULL);
	assert(ft_calloc(4, 0) == NULL);
	assert(ft_calloc(326324, 63232) == NULL);
	free(dest1);
	free(dest2);
	return (0);
}
