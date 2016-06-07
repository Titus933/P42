/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_tetrimino.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <mpressen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 02:08:46 by mpressen          #+#    #+#             */
/*   Updated: 2016/01/23 01:02:30 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		init_params(char ***addr, char **t, t_stock *s)
{
	int i;
	int j;
	int stop;

	i = -1;
	stop = 0;
	while (!stop && ++i < 4)
	{
		j = -1;
		while (!stop && ++j < 4)
		{
			if (t[i][j] != '.')
			{
				s->i = i - 1;
				s->s_l = i;
				s->s_c = j;
				stop = 1;
			}
		}
	}
	s->x = 0;
	while ((*addr)[0][s->x])
		s->x++;
}

static int		check_block(int l, int c, t_stock s, char ***addr)
{
	if (l + s.i - s.s_l >= 0 && c + s.j - s.s_c >= 0
		&& l + s.i - s.s_l < s.x && c + s.j - s.s_c < s.x
		&& (*addr)[l + s.i - s.s_l][c + s.j - s.s_c] == '.')
		return (1);
	return (0);
}

int				insert_tetrimino(char ***addr, char **t, int l, int c)
{
	t_stock		s;
	int			block_placed;

	init_params(addr, t, &s);
	block_placed = 0;
	while (++s.i < 4)
	{
		s.j = -1;
		while (++s.j < 4)
		{
			if (t[s.i][s.j] != '.')
			{
				if (check_block(l, c, s, addr))
				{
					(*addr)[l + s.i - s.s_l][c + s.j - s.s_c] = t[s.i][s.j];
					block_placed++;
					if (block_placed == 4)
						return (1);
				}
				else
					return (0);
			}
		}
	}
	return (0);
}
