/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:48:53 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 23:25:00 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	*str1;

	str1 = ft_strnew("123456789");
	assert(ft_atoi(str1) == atoi(str1));
	free(str1);
	str1 = ft_strnew("4376543fhfr373");
	assert(ft_atoi(str1) == atoi(str1));
	free(str1);
	str1 = ft_strnew("  +-+-+-87643fd76");
	assert(ft_atoi(str1) == atoi(str1));
	free(str1);
	str1 = ft_strnew("--3874634");
	assert(ft_atoi(str1) == atoi(str1));
	free(str1);
	str1 = ft_strnew("-3874634");
	assert(ft_atoi(str1) == atoi(str1));
	free(str1);
	str1 = ft_strnew("\n\n\n  -46\b9 \n5d6");
	assert(ft_atoi(str1) == atoi(str1));
	free(str1);
	return (0);
}
