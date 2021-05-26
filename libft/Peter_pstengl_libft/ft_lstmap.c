/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:57:59 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/19 19:14:25 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = ft_lstnew(f(lst->content));
	del(ft_lstlast(new_list)->content);
	if (lst->next == NULL)
		return (new_list);
	lst = lst->next;
	while (1)
	{
		ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
		del(ft_lstlast(new_list)->content);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
	}
	return (new_list);
}
