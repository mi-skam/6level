/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:55:30 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/18 18:59:11 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;

    if(!dst || !src)
        return (NULL);

    i = 0;

    while (i < n)
    {
        /* code */
        *(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
        if(*(unsigned char*)(src + i) == (unsigned char)c)
            return (dst + i + 1);
        i++;
    }
    return (NULL);
}