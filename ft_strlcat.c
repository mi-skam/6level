/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:09:05 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/19 16:14:18 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i, j, dest_length, src_length;

    src_length = ft_strlen(src);
    dest_length = ft_strlen(dst);
    j = dest_length;
    i = 0;

    if(dest_length < size - 1 && size > 0)
    {
        while (src[i] && dest_length + i < size - 1)
        {
            dst[j] = src[i];
            j++;
            i++;
        }
        dst[j] = 0;
    }
    if (dest_length >= size)
        dest_length = size;

    return (dest_length + src_length);
}
