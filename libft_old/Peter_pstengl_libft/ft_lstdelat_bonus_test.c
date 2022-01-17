/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelat_bonus_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:35:10 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 21:46:03 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "libft.h"

static void	ft_del_str(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strnew("Hello World!"));
	ft_lstadd(&lst, ft_strnew("How's it going"));
	ft_lstdelat(lst, 1, ft_del_str);
	free(lst->next);
	free(lst->content);
	free(lst);
	return (0);
}
