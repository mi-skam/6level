/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:40:56 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/19 16:42:45 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    while (i >= 0)
    {
        if(s[i] == (char)c)
            return ((char*)(s+i));
        i--;
    }
    
    return (NULL);
}
