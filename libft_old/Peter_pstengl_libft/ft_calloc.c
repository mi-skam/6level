/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:46:46 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/19 11:29:47 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	final_size;
	void	*space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	final_size = nmemb * size;
	if (final_size / nmemb != size)
		return (NULL);
	space = malloc(final_size);
	if (!space)
		return (NULL);
	ft_bzero(space, final_size);
	return (space);
}
