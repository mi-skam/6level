/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i.ryspaev <i.ryspaev@student.42.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:06:51 by i.ryspaev         #+#    #+#             */
/*   Updated: 2021/05/30 10:47:00 by i.ryspaev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	endline;

	if (s)
	{
		endline = '\n';
		while (*s != 0)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, &endline, 1);
	}
}
