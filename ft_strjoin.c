/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:54:27 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/31 18:43:02 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*out;

	if (s1 && s2)
	{
		dest = ft_strnew_bonus(ft_strlen(s1) + ft_strlen(s2));
		if (dest)
		{
			out = dest;
			while (*s1 != 0)
				*dest++ = *s1++;
			while (*s2 != 0)
				*dest++ = *s2++;
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
