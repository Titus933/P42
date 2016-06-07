/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 01:38:39 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/08 01:51:16 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int s1len;
	int s2len;
	int n;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1len >= s2len)
		n = s1len;
	else
		n = s2len;
	return (ft_memcmp(s1, s2, n));
}
