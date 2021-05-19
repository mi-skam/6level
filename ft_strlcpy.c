/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:04:04 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/19 16:08:32 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;

    if (size > 0)
    {
        while (src[i] && i < (size - 1))
        {
            dst[i] = src[i];
            i++;    
        }
        dst[i] = 0;
    }
    while (src[i])
        i++;
    
    return (i);
}
