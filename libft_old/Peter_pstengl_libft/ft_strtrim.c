/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 09:45:59 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 13:06:26 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *s)
{
	char	temp;
	size_t	index;
	size_t	s_len;

	s_len = ft_strlen(s);
	index = 0;
	while (index < s_len / 2)
	{
		temp = s[index];
		s[index] = s[s_len - index - 1];
		s[s_len - index - 1] = temp;
		index++;
	}
	return (s);
}

static int	ft_in_set(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;

	str = ft_strdup(s1);
	while (ft_in_set(*str, set))
		str++;
	ft_strrev(str);
	while (ft_in_set(*str, set))
		str++;
	ft_strrev(str);
	return (str);
}
