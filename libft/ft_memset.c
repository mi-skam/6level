/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:22:07 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/18 19:01:28 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;

    if(!b)
        return (NULL);
    
    i = 0;

    while (i < len)
    {
        /* code */
        *(unsigned char*)(b+i) = (unsigned char)c;
        i++;
    }
    
    return (b);
}
