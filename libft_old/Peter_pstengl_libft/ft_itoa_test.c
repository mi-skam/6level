/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:05:40 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 18:42:45 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	*dest;

	dest = ft_itoa(42);
	assert(strcmp(dest, "42") == 0);
	free(dest);
	dest = ft_itoa(-42);
	assert(strcmp(dest, "-42") == 0);
	free(dest);
	dest = ft_itoa(-2147483648);
	assert(strcmp(dest, "-2147483648") == 0);
	free(dest);
	dest = ft_itoa(0);
	assert(strcmp(dest, "0") == 0);
	free(dest);
	return (0);
}
