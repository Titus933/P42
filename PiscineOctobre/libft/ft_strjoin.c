/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:38:30 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 06:41:41 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strjoin2(char const *s1, char const *s2, size_t i, size_t j)
{
	char *str;

	if (!(s1) || !(s2))
		return (ft_error_null("ft_strjoin"));
	str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j])
			str[i++] = s2[j++];
		str[i] = '\0';
		return (str);
	}
	return (ft_error_malloc("ft_strjoin"));
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count1;
	size_t	count2;

	count1 = 0;
	count2 = 0;
	return (ft_strjoin2(s1, s2, count1, count2));
}
