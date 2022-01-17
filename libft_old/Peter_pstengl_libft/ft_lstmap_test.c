/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:48:49 by pstengl           #+#    #+#             */
/*   Updated: 2021/05/22 00:34:09 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>

#include "libft.h"

static void	*ft_repl_c(void	*content)
{
	size_t	index;
	char	*temp;

	temp = ft_strdup(content);
	index = 0;
	while (temp[index])
	{
		if (temp[index] == 'o')
			temp[index] = 'X';
		if (temp[index] == 'l')
			temp[index] = 'X';
		index++;
	}
	return (temp);
}

static void	ft_del_t(void	*content)
{
	if (strcmp((char *)content, "I'm fine...") == 0)
		free((char *)content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*dest;

	lst = ft_lstnew(ft_strnew("Hello World!"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strnew("How's it going?")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strnew("I'm fine...")));
	dest = ft_lstmap(lst, &ft_repl_c, &ft_del_t);
	assert(strcmp(dest->content, "HeXXX WXrXd!") == 0);
	assert(strcmp(dest->next->content, "HXw's it gXing?") == 0);
	free(dest->next->next);
	free(dest->next->content);
	free(dest->next);
	free(dest->content);
	free(dest);
	free(lst->next->next->content);
	free(lst->next->next);
	free(lst->next->content);
	free(lst->next);
	free(lst->content);
	free(lst);
	return (0);
}
