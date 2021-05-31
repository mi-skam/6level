/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:19:03 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/30 18:21:24 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
	*alst = new;
}
