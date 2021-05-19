/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:05:35 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/18 19:07:36 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    if(!s)
        return (NULL);

    i = 0;
    while(i < n)
    {
        if(*(unsigned char*)(s+i) == (unsigned char)c)
            return ((void*)(s+i));

        i++;
    }
    return (NULL);
}
