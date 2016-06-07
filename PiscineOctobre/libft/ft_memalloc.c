/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 21:40:14 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/01 22:06:24 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = (void *)malloc(size);
	if (mem)
	{
		ft_bzero(mem, size);
		return (mem);
	}
	return (ft_error_malloc("ft_memalloc"));
}
