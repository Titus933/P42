/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <mpressen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:07:48 by mpressen          #+#    #+#             */
/*   Updated: 2016/04/19 10:43:17 by mlegeay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		count_tetriminos(t_chain *list)
{
	int tetriminos;

	tetriminos = 0;
	while (list)
	{
		tetriminos++;
		list = list->next;
	}
	return (tetriminos);
}

static void		create_square(char ***addr_square, int size)
{
	int		i;
	int		j;
	int		stop;

	stop = 0;
	if (!(*addr_square = (char **)malloc(sizeof(**addr_square) * (size + 1))))
		exit(EXIT_FAILURE);
	(*addr_square)[size] = NULL;
	i = 0;
	while (!stop && i < size)
	{
		j = 0;
		if (!((*addr_square)[i] = ft_memalloc(size + 1)))
			exit(EXIT_FAILURE);
		while (!stop && j < size)
		{
			(*addr_square)[i][j] = '.';
			j++;
		}
		i++;
	}
}

void			fillit(t_chain *list)
{
	char	**square;
	int		size;
	int		solution;
	int		tetriminos;

	solution = 0;
	size = 1;
	tetriminos = count_tetriminos(list);
	while (size * size < tetriminos * 4)
		size++;
	while (!solution)
	{
		create_square(&square, size);
		if (resolution(&square, list, tetriminos))
		{
			solution = 1;
			print_tab(square);
		}
		else
		{
			size++;
		}
	}
}
