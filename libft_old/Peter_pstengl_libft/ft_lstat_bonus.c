/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:22:10 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/20 15:33:01 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, int n)
{
	int	lstlen;
	int	index;

	if (n < 0)
	{
		lstlen = ft_lstsize(lst) - 1;
		n = lstlen + n;
	}
	index = 0;
	while (index < n)
	{
		if (lst->next == NULL)
			return (NULL);
		lst = lst->next;
		index++;
	}
	return (lst);
}
