/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printintbase_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:29:33 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 19:48:46 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printintbase(int n, const char *base)
{
	char	*result;

	result = ft_itobase(n, base);
	ft_print(result);
	free(result);
}
