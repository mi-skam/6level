/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:27:03 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/31 18:35:35 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*out;
	char		*str;
	char const	*src;

	if (s)
	{
		str = ft_strnew_bonus(len);
		out = str;
		src = &s[start];
		if (str)
		{
			while (*src != 0 && len > 0)
			{
				*str++ = *src++;
				len--;
			}
			return (out);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
