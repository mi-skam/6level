/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:51:39 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/19 16:54:23 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libl.h"

char    *ft_strdup(const char *s1)
{
    char *str;
    size_t i;

    if(!s1)
        return (NULL);

    str = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) +1 ));

    if(!str)
        return (NULL);
    i = 0;

    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = 0;

    return (str);
}
