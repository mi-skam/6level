/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:10:55 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 18:50:51 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rec(int n, size_t len)
{
	size_t	str_len;
	char	*str;

	if (n / 10 == 0)
		str = ft_calloc(len + 1, 1);
	else
		str = ft_rec(n / 10, len + 1);
	str_len = ft_strlen(str);
	str[str_len] = (n % 10) + 48;
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	str_len;
	char	*str;
	char	*back;

	if (n == -2147483648)
		return (ft_strnew("-2147483648"));
	if (n < 0)
	{
		n = n * -1;
		back = ft_rec(n, 1);
		str_len = ft_strlen(back);
		str = ft_calloc(str_len + 2, 1);
		str[0] = '-';
		ft_strlcat(str, back, str_len + 2);
		free(back);
		return (str);
	}
	return (ft_rec(n, 1));
}
