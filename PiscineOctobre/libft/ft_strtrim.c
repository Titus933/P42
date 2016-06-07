/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:52:02 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 06:39:54 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strtrim2(char const *s, size_t i, size_t j, size_t begin)
{
	char	*trim;
	size_t	len;

	if (!(s))
		return (ft_error_null("ft_strtrim"));
	len = ft_strlentrim(s);
	if ((trim = (char *)malloc(sizeof(*trim) * (len + 1))))
	{
		while (j < len)
		{
			while (ft_isspace((int)s[i]) && begin == 1)
				i++;
			begin = 0;
			trim[j++] = s[i++];
		}
		trim[j] = '\0';
		return (trim);
	}
	return (ft_error_malloc("ft_strtrim"));
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	begin;

	begin = 1;
	i = 0;
	j = 0;
	return (ft_strtrim2(s, i, j, begin));
}
