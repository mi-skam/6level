/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:36:22 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/31 18:48:10 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	list_length(char const *s, char c)
{
	int	len;

	len = 0;
	if (*s != c && *s != 0)
	{
		len++;
		s++;
	}
	while (*s != 0)
	{
		if (*s != c && s[-1] == c)
			len++;
		s++;
	}
	return (len + 1);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**list;

	if (s == NULL)
		return (NULL);
	list = (char **)malloc(sizeof(char *) * list_length(s, c));
	if (!list)
		return (NULL);
	j = 0;
	while (*s != 0)
	{
		i = 0;
		while (s[i] != c && s[i] != 0)
			i++;
		if (i)
		{
			list[j++] = ft_strlcpy(ft_strnew_bonus(i), s, i);
			s = &s[i];
		}
		else
			s++;
	}
	list[j] = NULL;
	return (list);
}
