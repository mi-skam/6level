/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:39:16 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/22 00:22:36 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_make_str(const char *s, char c)
{
	size_t	str_len;
	size_t	count;
	char	*my_str;

	str_len = 0;
	while (s[str_len] && s[str_len] != c)
		str_len++;
	my_str = ft_calloc(sizeof(char), str_len + 1);
	count = 0;
	while (count < str_len)
	{
		my_str[count] = s[count];
		count++;
	}
	return (my_str);
}

static char	**ft_rec(const char *s, char c, size_t index)
{
	size_t	count;
	char	*my_str;
	char	**split_prod;

	if (*s == '\0')
	{
		split_prod = ft_calloc(sizeof(char **), index + 1);
		split_prod[index] = NULL;
		return (split_prod);
	}
	my_str = ft_make_str(s, c);
	count = ft_strlen(my_str);
	while (*(s + count) == c)
		count++;
	split_prod = ft_rec((s + count), c, index + 1);
	split_prod[index] = my_str;
	return (split_prod);
}

char	**ft_split(const char *s, char c)
{
	while (*s == c)
		s++;
	return (ft_rec(s, c, 0));
}
