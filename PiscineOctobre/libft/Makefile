#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpressen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 21:17:18 by mpressen          #+#    #+#              #
#    Updated: 2015/12/11 06:17:42 by mpressen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# PROJECT VARIABLES
NAME = libft.a

SRC_PATH = ./

SRC_NAME = $(SRC1) $(SRC2) $(SRC3) $(SRC4)

#libft part I
SRC1 = ft_strrchr.c			\
		ft_strdup.c			\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_strstr.c			\
		ft_atoi.c			\
		ft_memcmp.c			\
		ft_strlcat.c		\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_strlen.c			\
		ft_isalnum.c		\
		ft_strcat.c			\
		ft_strncat.c		\
		ft_tolower.c		\
		ft_isalpha.c		\
		ft_memmove.c		\
		ft_strchr.c			\
		ft_strncmp.c		\
		ft_toupper.c		\
		ft_isascii.c		\
		ft_memset.c			\
		ft_strnstr.c		\
		ft_strncpy.c		\
		ft_isdigit.c		\
		ft_strcmp.c			\
		ft_isprint.c		\
		ft_strcpy.c

#libft part II
SRC2 = ft_putstr.c			\
		ft_putnbr.c			\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_putstr_fd.c		\
		ft_putchar.c		\
		ft_putchar_fd.c		\
		ft_strtrim.c		\
		ft_strsplit.c		\
		ft_strjoin.c		\
		ft_strsub.c			\
		ft_strequ.c			\
		ft_strnequ.c		\
		ft_itoa.c			\
		ft_putendl.c		\
		ft_strclr.c			\
		ft_strnew.c			\
		ft_memalloc.c		\
		ft_memdel.c			\
		ft_strdel.c			\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strmap.c			\
		ft_strmapi.c

#libft part bonus
SRC3 = ft_lstnew.c			\
		ft_lstdelone.c		\
		ft_lstdel.c			\
		ft_lstadd.c			\
		ft_lstiter.c		\
		ft_lstmap.c

#libft part perso
SRC4 = ft_memdup.c			\
		ft_countbits.c		\
		ft_isspace_full.c	\
		ft_isspace.c		\
		ft_strlentrim.c		\
		ft_error_null.c		\
		ft_error_malloc.c	\

INC_PATH = ./

INC_NAME = libft.h

OBJ_PATH = ./

#STANDART VARIABLES
CC = gcc -c

CFLAGS = -Wall -Wextra -Werror	#-g -pedantic -ansi

# COLORS
RESET =		\033[0m
DARK =		\033[1;32m
RED =		\033[31m
GREEN =		\033[32m
YELLOW =	\033[33m
BLUE =		\033[34m
MAGENTA =	\033[35m
CYAN =		\033[36m
WHITE =		\033[37m
BOLDBLACK =	\033[1m\033[30m
BOLDRED =	\033[1m\033[31m
BOLDWHITE =	\033[1m\033[37m

#AUTOMATIC
OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

INC = $(addprefix $(INC_PATH), $(INC_NAME))

#STANDART RULES
all: $(NAME)


$(NAME):
	@echo "$(YELLOW)compiling ...$(RESET)"
	$(CC) $(CFLAGS) $(SRC)
	@echo "$(YELLOW)linking...$(RESET)"
	ar rc $@ $(OBJ) $(INC)
	@echo "$(YELLOW)creating index...$(RESET)"
	ranlib $@
	@echo "$(CYAN)$(NAME) IS BUILT !$(RESET)"

clean:
	@echo "$(YELLOW)ERASING OBJECTS ...$(RESET)"
	rm -rf $(OBJ)
	@echo "$(CYAN) REPERTORY CLEANED !$(RESET)"

fclean: clean
	@echo "$(YELLOW)ERASING $(NAME) ...$(RESET)"
	rm -rf $(NAME)
	@echo "$(CYAN)$(NAME) ERASED !(RESET)"

re: fclean all

#PERSONAL RULES
norme:
	norminette $(SRC)
	norminette $(INC)

.PHONY: re fclean clean all norme
