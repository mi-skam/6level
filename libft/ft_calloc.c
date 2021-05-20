/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:49:23 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/19 16:51:12 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = (void*)malloc(count * size);

    if(!ptr)
        return (NULL);

    ft_bzero(ptr, count);

    return (ptr);
}
