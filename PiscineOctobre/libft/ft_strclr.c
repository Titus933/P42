/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:02:32 by mpressen          #+#    #+#             */
/*   Updated: 2015/12/11 06:53:09 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t count;

	count = 0;
	if (!(s))
		ft_error_null("ft_strclr");
	else
		while (s[count])
		{
			s[count] = '\0';
			count++;
		}
}
