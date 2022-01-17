/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printintbin_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:29:33 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 20:17:02 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printintbin(int n)
{
	char	*result;

	result = ft_itobin(n);
	ft_print(result);
	free(result);
}
