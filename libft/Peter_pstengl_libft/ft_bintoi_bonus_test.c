/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintoi_bonus_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:04:37 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/20 17:07:37 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "libft.h"

int	main(void)
{
	assert(ft_bintoi("100000000") == 256);
	assert(ft_bintoi("-101101") == -45);
	return (0);
}