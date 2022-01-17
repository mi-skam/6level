/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 12:45:00 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/16 13:27:56 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	assert(ft_strlen("Hello World!") == strlen("Hello World!"));
	assert(ft_strlen("") == strlen(""));
	return (0);
}
