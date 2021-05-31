/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:13:37 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/31 18:48:59 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	i = 0;
	if (f && s)
	{
		out = ft_strnew_bonus(ft_strlen(s));
		if (!out)
			return (NULL);
		while (s[i] != 0)
		{
			out[i] = f(i, s[i]);
			i++;
		}
		return (out);
	}
	return (NULL);
}
