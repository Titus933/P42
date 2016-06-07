/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 21:35:09 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/04 22:19:52 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		count;

	count = 0;
	while (s1[count])
		count++;
	s2 = (char *)malloc(sizeof(char) * (count + 1));
	if (s2)
	{
		s2[count] = '\0';
		while (--count >= 0)
		{
			s2[count] = (char)s1[count];
		}
		return (s2);
	}
	return (NULL);
}
