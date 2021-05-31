/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:55:30 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/30 10:25:44 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
					int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	while (n-- > 0)
	{
		*b = *a;
		if (*a == (unsigned char)c)
			return ((void *)b + 1);
		a++;
		b++;
	}
	return (NULL);
}
