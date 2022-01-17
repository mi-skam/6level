/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:40:39 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 17:17:58 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*str1;
	char	*dest;

	str1 = ft_strnew("_%_Hello_World!_/_/_/");
	dest = ft_strtrim(str1, "_/");
	assert(dest != NULL);
	assert(strcmp(dest, "%_Hello_World!") == 0);
	free(str1);
	free(dest - 7);
	return (0);
}
