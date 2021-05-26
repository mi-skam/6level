/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:44:45 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/22 00:16:31 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*str1;
	char	*dest1;

	str1 = ft_strnew("Hello World!");
	assert(ft_substr(str1, 60, 2) == NULL);
	dest1 = ft_substr(str1, 2, 60);
	assert(dest1 != NULL);
	ft_print(dest1);
	assert(strcmp(dest1, "llo World!") == 0);
	free(dest1);
	dest1 = ft_substr(str1, 4, 0);
	assert(dest1 != NULL);
	free(dest1);
	dest1 = ft_substr(str1, 2, 2);
	assert(dest1 != NULL);
	free(dest1);
	dest1 = ft_substr(str1, 0, 2);
	assert(strcmp(dest1, "He") == 0);
	free(dest1);
	dest1 = ft_substr(str1, 2, 0);
	assert(strcmp(dest1, "") == 0);
	free(dest1);
	free(str1);
	return (0);
}
