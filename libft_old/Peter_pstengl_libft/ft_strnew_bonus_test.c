/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_bonus_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:54:52 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 20:19:20 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*result;

	result = ft_strnew("Hello World!");
	assert(strcmp(result, "Hello World!") == 0);
	free(result);
	result = ft_strnew("");
	assert(strcmp(result, "") == 0);
	free(result);
}
