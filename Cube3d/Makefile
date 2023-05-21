# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mndir <mndir@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 20:34:42 by mndir             #+#    #+#              #
#    Updated: 2023/05/21 19:08:39 by mndir            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Cube3d
SRC = ./src/main.c ./src/utils.c ./parsing/parsing.c ./libft/libft.c
OBJS = $(SRC:.cpp=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
all: ${NAME}

${NAME}: ${OBJS}
	$(MAKE) all -C mlx
	${CC} ${CFLAGS} ${OBJS} -Lmlx -lmlx -framework OpenGL -framework AppKit -o $@

%.o: %.c
	${CC} ${CFLAGS} -Imlx -c $< -o ${<:.c=.o}

clean:
	$(MAKE) clean -C mlx

fclean: clean
	rm -f ${NAME}
	$(MAKE) clean -C mlx

re: fclean all

