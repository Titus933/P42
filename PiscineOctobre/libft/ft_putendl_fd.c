/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 21:30:03 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 06:36:41 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (!(s))
		ft_error_null("ft_putendl_fd");
	else
	{
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 1);
	}
}
