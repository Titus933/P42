/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <mpressen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 20:04:17 by mpressen          #+#    #+#             */
/*   Updated: 2016/01/22 00:29:26 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_tab(char **tab)
{
	int	i;
	int	j;

	i = -1;
	if (tab == NULL)
		ft_error_null("print_tab");
	else
	{
		while (tab[++i])
		{
			j = -1;
			while (tab[++j])
				ft_putchar(tab[i][j]);
			ft_putchar('\n');
		}
	}
}
