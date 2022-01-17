/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst_bonus_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:41:41 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 20:09:30 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello World!");
	ft_lstadd(&lst, "How's it going?");
	ft_lstadd(&lst, "Good, how about you?");
	ft_printlst(lst);
	free(lst->next->next);
	free(lst->next);
	free(lst);
}
