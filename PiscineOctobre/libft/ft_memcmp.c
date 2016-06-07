/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 03:11:21 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/07 00:06:49 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;
	size_t			count;

	if (n == 0)
		return (0);
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	count = 0;
	while (count < n)
	{
		if (s11[count] != s22[count])
			return (s11[count] - s22[count]);
		count++;
	}
	return (0);
}
