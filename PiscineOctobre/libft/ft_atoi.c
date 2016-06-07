/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 03:27:06 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 05:33:38 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	count;
	int		res;
	int		sign;

	count = 0;
	res = 0;
	sign = 1;
	while (ft_isspace_full((int)str[count]))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = -1;
		count++;
	}
	while (ft_isdigit((int)str[count]))
	{
		res = res * 10 + str[count] - '0';
		count++;
	}
	return (res * sign);
}
