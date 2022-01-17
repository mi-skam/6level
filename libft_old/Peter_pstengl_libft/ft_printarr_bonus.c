/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:52:41 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 11:54:35 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printarr(char **arr)
{
	ft_print("[");
	while (*arr != NULL)
	{
		ft_print("'");
		ft_print(*arr);
		ft_print("', ");
		arr++;
	}
	ft_print("\b\b]");
}
