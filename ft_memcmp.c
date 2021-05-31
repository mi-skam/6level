/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:08:12 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/30 10:28:09 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sone;
	unsigned char	*stwo;

	sone = (unsigned char *)s1;
	stwo = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*sone == *stwo & n-- > 0)
	{
		sone++;
		stwo++;
		if (n == 0)
			return (0);
	}
	if (*sone != *stwo)
	{
		return (*sone - *stwo);
	}
	return (0);
}
