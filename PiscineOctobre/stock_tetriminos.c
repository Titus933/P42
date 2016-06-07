/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpressen <mpressen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 02:54:36 by mpressen          #+#    #+#             */
/*   Updated: 2016/01/23 01:03:31 by mpressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_chain		*create_new_struct(t_chain *list)
{
	t_chain		*new_struct;

	if (!(new_struct = (t_chain*)malloc(sizeof(*new_struct))))
		return (NULL);
	if (list == NULL)
	{
		list = new_struct;
		list->next = NULL;
	}
	else
	{
		list->next = new_struct;
		new_struct->next = NULL;
	}
	return (list);
}

t_chain		*s_t2(char *str, t_chain *list, t_chain *begin, char *tmp)
{
	int			tetriminos;
	int			i;

	i = 0;
	tetriminos = 1;
	while (list)
	{
		if (!(tmp = (char *)malloc(sizeof(*tmp) * 22)))
			return (NULL);
		tmp[21] = '\0';
		tmp[0] = (str[i] == '#') ? '@' + tetriminos : str[i];
		while (++i % 21)
			tmp[i % 21] = (str[i] == '#') ? '@' + tetriminos : str[i];
		list->tetrimino = ft_strsplit(tmp, '\n');
		free(tmp);
		if (str[i] && str[i + 1])
		{
			tetriminos++;
			list = create_new_struct(list);
		}
		list = list->next;
	}
	return (begin);
}

t_chain		*stock_tetriminos(char *str)
{
	t_chain		*list;
	t_chain		*begin_list;
	char		*tmp;

	list = NULL;
	tmp = NULL;
	list = create_new_struct(list);
	begin_list = list;
	return (s_t2(str, list, begin_list, tmp));
}
