/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:51:24 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/18 19:01:38 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    if(!dst)
        return (NULL);
    
    i = 0;

    while (i < n)
    {
        /* code */
        *(char*)(dst + i) = *(char*)(src + i);
        i++;
    }
    return (dst);
}
