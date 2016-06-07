/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlentrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 01:30:48 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 01:51:18 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlentrim(char const *s)
{
	size_t	len;
	size_t	i;
	size_t	begin;

	begin = 1;
	i = 0;
	len = 0;
	while (s[i])
	{
		while (ft_isspace((int)s[i]) && begin == 1)
			i++;
		begin = 0;
		len++;
		i++;
	}
	i--;
	while (ft_isspace((int)s[i]))
	{
		len--;
		i--;
	}
	return (len);
}
