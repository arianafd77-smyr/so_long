# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 13:51:55 by cyacoub-          #+#    #+#              #
#    Updated: 2023/05/20 15:12:44 by arforouz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
NAME_BONUS = so_long_bonus

HEADER = so_long.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(DEBUG)
DEBUG = -g3 -fsanitize=address
MLX_FLAGS = -framework OpenGL -framework AppKit -lmlx
LIBFT = ./libft/libft.a
MLX = ./minilibx/libmlx.a
LIB = ./assets/so_long.h
SRC_PATH = ./src/

SRC =	main.c \
		check_map.c \
		key_hooks.c \
		print_map.c \
		read_map.c \
		print_steps.c \
		valid_path.c \
		utils.c

SRCS = $(addprefix $(SRC_PATH), $(SRC))

OBJS = $(SRCS:.c=.o)

all: make_libft make_minilibx $(NAME)

make_libft:
	@make all -C ./libft

make_minilibx:
	@make all -C ./minilibx

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -I $(LIB) $(LIBFT) $(MLX) $(MLX_FLAGS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@make clean -C ./libft
	@make clean -C ./minilibx

fclean: clean
	@rm -f $(NAME) $(NAME_BONUS)
	@make fclean -C ./libft
	@make clean -C ./minilibx

re: fclean all

re_bonus: fclean

.PHONY: all clean fclean re