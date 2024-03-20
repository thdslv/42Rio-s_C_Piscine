# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 15:06:50 by thda-sil          #+#    #+#              #
#    Updated: 2024/03/12 15:06:55 by thda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = 

BONUS_ENABLED = 0

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

.c.o:
	cc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJS)
	make -C libraries/libft
	make -C libraries/mlx
	cc $(FLAGS) $(OBJS) libs/libft/libft.a -o $(NAME) -Llibraries/mlx -lmlx -lX11 -lXext
	@ echo "compile complete\n"

clean:
	rm -f $(OBJS)
	make clean -C libs/libft
	make clean -C libs/mlx

fclean:	clean
	rm -f $(NAME)
	make fclean -C libs/libft

re:	fclean all

.PHONY: all clean fclean re bonus