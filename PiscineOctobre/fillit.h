/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <mpressen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:07:05 by mpressen          #+#    #+#             */
/*   Updated: 2016/04/19 10:31:26 by mlegeay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE	1
# include "libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct		s_chain
{
	struct s_chain	*next;
	char			**tetrimino;
}					t_chain;

typedef struct		s_stock
{
	int				i;
	int				j;
	int				s_l;
	int				s_c;
	int				x;
}					t_stock;

int					list_valid(char *str);
int					tetrimino_valid(char *str);
t_chain				*stock_tetriminos(char *str);
void				fillit(t_chain *list);
int					resolution(char ***addr, t_chain *list, int t);
void				print_tab(char **square);
void				erase_tetrimino(char ***addr_square, char letter);
int					insert_tetrimino(char ***addr, char **t, int l, int c);

#endif
