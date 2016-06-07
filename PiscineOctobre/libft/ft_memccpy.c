/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 01:29:59 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/02 23:50:38 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dst1;
	const char	*src1;
	size_t		count;

	count = 0;
	dst1 = dst;
	src1 = src;
	while (count < n)
	{
		dst1[count] = src1[count];
		if (src1[count] == c)
			return (dst + count + 1);
		count++;
	}
	return (NULL);
}
