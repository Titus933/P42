/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_tetrimino.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <mpressen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 02:05:57 by mpressen          #+#    #+#             */
/*   Updated: 2016/01/22 23:01:21 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	erase_tetrimino(char ***addr_square, char letter)
{
	int i;
	int j;

	i = -1;
	while ((*addr_square)[++i])
	{
		j = -1;
		while ((*addr_square)[i][++j])
		{
			if ((*addr_square)[i][j] == letter)
				(*addr_square)[i][j] = '.';
		}
	}
}
