/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:22:11 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/20 17:51:44 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlst(t_list *lst)
{
	ft_print("[");
	while (1)
	{
		ft_print("'");
		ft_print((char *)lst->content);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
		ft_print("', ");
	}
	ft_print("]");
}
