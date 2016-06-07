/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 08:44:49 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 00:53:45 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memdup(const void *src, size_t n)
{
	void	*ret;

	ret = NULL;
	if (!(ret = (void *)malloc(sizeof(*src) * n)))
		return (NULL);
	ft_memcpy(ret, src, n);
	return (ret);
}
