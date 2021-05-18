/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:48:43 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/18 15:08:04 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *suc = NULL;

    i = 0;
    suc =(unsigned char*)s;

    while( i < n )
    {
        suc[i] = 0;
        i++;
    }
    s = suc;
}