/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:57:36 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 17:04:23 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	*haystack;
	char	*needle;

	haystack = ft_strnew("Hello World!");
	needle = ft_strnew("or");
	assert(ft_strnstr(haystack, needle, 0) == NULL);
	assert(ft_strnstr(haystack, needle, 12) == strstr(haystack, needle));
	free(needle);
	needle = ft_strnew("whut?");
	assert(ft_strnstr(haystack, needle, 12) == NULL);
	free(needle);
	free(haystack);
	return (0);
}
