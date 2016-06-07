/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 00:30:22 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 06:21:29 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_strsplit2(char const *s, char c, size_t i, size_t bits)
{
	char	**split;
	size_t	start;
	size_t	end;

	if (!(s))
		return (ft_error_null("ft_strsplit"));
	if ((split = (char **)malloc(sizeof(*split) * (ft_countbits(s, c) + 1))))
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			start = i;
			while (s[i] && s[i] != c)
				i++;
			end = i;
			if (end > start)
				split[bits++] = ft_strsub(s, start, end - start);
		}
		split[bits] = NULL;
		return (split);
	}
	return (ft_error_malloc("ft_strsplit"));
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	bits;

	bits = 0;
	i = 0;
	return (ft_strsplit2(s, c, i, bits));
}
