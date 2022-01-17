/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:19:12 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/22 00:13:20 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	index;
	char	*space;

	if (start > ft_strlen(s))
		return (NULL);
	space = malloc(len + 1);
	if (!space)
		return (NULL);
	index = 0;
	while (index < len && s[start + index] != '\0')
	{
		space[index] = s[start + index];
		index++;
	}
	while (index < len)
	{
		space[index] = '\0';
		index++;
	}
	space[index] = '\0';
	return (space);
}
