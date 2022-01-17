/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:08:46 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/16 11:51:38 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	counter;
	size_t	index;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)s1);
	if (s2_len > s1_len || s2_len > n)
		return (NULL);
	n = n - s2_len;
	counter = 0;
	while (*s1 != '\0' && counter < n)
	{
		index = 0;
		while (s1[index] == s2[index] && s1[index] != '\0' && s2[index] != '\0')
			index++;
		if (s2[index] == '\0')
			return ((char *)s1);
		s1++;
		counter++;
	}
	return (NULL);
}
