/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:24:49 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 21:46:14 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "libft.h"

static void	del(void *content)
{
	free((char *)content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strnew("Hello World!"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strnew("How's it going?")));
	ft_lstclear(&lst, del);
	assert(lst == NULL);
	free(lst);
	return (0);
}
