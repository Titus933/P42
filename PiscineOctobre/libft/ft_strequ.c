/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 21:51:53 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 06:49:18 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t count;

	count = 0;
	if (!(s1) || !(s2))
		return ((int)ft_error_null("ft_strequ"));
	while (s1[count] && s2[count])
	{
		if (s1[count] != s2[count])
			return (0);
		count++;
	}
	return (1);
}
