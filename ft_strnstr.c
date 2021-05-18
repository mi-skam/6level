/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:13:00 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/18 19:18:45 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i, j;

    if(!haystack || !needle)
        return (NULL);

    if(!needle || !needle[0])
        return((char*)haystack);

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i +j] && needle[j] && i+j < len && haystack[i + j] == needle[j])
            j++;

        if(!needle[j])
            return((char*)(haystack + i));

        i++;
    }
    return (NULL);
}
