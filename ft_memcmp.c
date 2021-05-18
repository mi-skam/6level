/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:08:12 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/18 19:10:50 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;

    while (i < n)
    {
        /* code */
        if(*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
            return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));

        i++;
    }
    return (0);
}
