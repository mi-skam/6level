/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_bonus_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:05:38 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/21 20:18:00 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello World!");
	ft_lstadd(&lst, "How's it going?");
	ft_lstadd(&lst, "Fine, how about you?");
	assert(strcmp(lst->content, "Hello World!") == 0);
	assert(strcmp(lst->next->content, "How's it going?") == 0);
	assert(strcmp(lst->next->next->content, "Fine, how about you?") == 0);
	assert(lst->next->next->next == NULL);
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
