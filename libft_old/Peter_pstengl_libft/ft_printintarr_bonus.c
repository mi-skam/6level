/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printintarr_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:20:35 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/20 17:28:26 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printintarr(int	*arr, size_t len)
{
	size_t	index;

	index = 0;
	ft_print("[");
	while (index < len)
	{
		ft_printint(*arr);
		ft_print(", ");
		arr++;
		index++;
	}
	ft_print("\b\b]");
}
