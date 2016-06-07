/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:58:00 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/07 02:25:58 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	count1;
	size_t	count2;
	char	*s11;
	char	*s22;

	s11 = (char *)s1;
	s22 = (char *)s2;
	count1 = 0;
	count2 = 0;
	if (!(*s22))
		return (s11);
	while (s11[count1] && count1 < n)
	{
		if (s11[count1] == s22[count2])
		{
			while (s22[count2] && s11[count1 + count2] == s22[count2]
					&& count1 + count2 < n)
				count2++;
			if (s22[count2] == '\0')
				return (s11 + count1);
		}
		count2 = 0;
		count1++;
	}
	return (NULL);
}
