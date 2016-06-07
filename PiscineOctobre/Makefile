#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpressen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/29 20:56:44 by mpressen          #+#    #+#              #
#    Updated: 2016/01/23 23:23:29 by mpressen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

SRC_PATH = ./

SRC_NAME = main.c				\
			check.c				\
			stock_tetriminos.c	\
			fillit.c			\
			resolution.c		\
			print_tab.c			\
			erase_tetrimino.c	\
			insert_tetrimino.c

OBJ_PATH = ./

#AUTOMATIC
OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

all: $(NAME)

$(NAME):
	make -C ./libft/	
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) $(OBJ) -I./ -Ilibft/ -lft -Llibft/


clean:
	make -C libft/ clean
	rm -rf $(OBJ)

fclean: clean
	make -C libft/ fclean
	rm -rf $(NAME)

re: fclean all

norme:
	norminette $(SRC)
	norminette $(INC)

.PHONY: norme re fclean clean all
