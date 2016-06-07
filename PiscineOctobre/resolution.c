/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <mpressen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 06:32:07 by mpressen          #+#    #+#             */
/*   Updated: 2016/01/23 01:01:16 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_resolved(char ***addr_square, char *letter, int *i, int t)
{
	int		tetrimino_set;
	int		line;
	int		column;

	*i = 0;
	while (*i < t)
	{
		tetrimino_set = 0;
		*letter = 'A' + *i;
		line = -1;
		while (!tetrimino_set && (*addr_square)[++line])
		{
			column = -1;
			while (!tetrimino_set && (*addr_square)[line][++column])
				if ((*addr_square)[line][column] == *letter)
					tetrimino_set = 1;
		}
		if (tetrimino_set)
			(*i)++;
		else
			return (0);
	}
	return (1);
}

int			resolution(char ***addr_square, t_chain *list, int tetriminos)
{
	int		line;
	int		column;
	char	letter;
	int		i;

	if (check_resolved(addr_square, &letter, &i, tetriminos))
		return (1);
	if (i)
		list = list->next;
	line = -1;
	while ((*addr_square)[++line])
	{
		column = -1;
		while ((*addr_square)[line][++column])
		{
			if (insert_tetrimino(addr_square, list->tetrimino, line, column))
			{
				if (resolution(addr_square, list, tetriminos))
					return (1);
			}
			erase_tetrimino(addr_square, letter);
		}
	}
	return (0);
}
