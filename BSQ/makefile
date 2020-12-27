# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/15 16:09:15 by avelazqu          #+#    #+#              #
#    Updated: 2020/12/15 18:05:36 by avelazqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = pruebas.c tablero.txt
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra
CLEAN = rm -f
CC = cc

all:	$(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)
clean:
	$(CLEAN) $(NAME)
fclean: clean
	$(CLEAN) $(OBJ)
norma:
	norminette -R CheckForbiddenSourceHeader
