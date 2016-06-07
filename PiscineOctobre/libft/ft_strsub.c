/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:17:46 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 06:44:15 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	char	*sub;
	size_t	count;

	count = 0;
	if (!(s))
		return (ft_error_null("ft_strsub"));
	s1 = (char *)s;
	sub = (char *)malloc(sizeof(*sub) * (len + 1));
	if (sub)
	{
		while (count < len)
		{
			sub[count] = s1[start + count];
			count++;
		}
		sub[count] = '\0';
		return (sub);
	}
	return (ft_error_malloc("ft_strsub"));
}
