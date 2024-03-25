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

OBJ = $(SRC:.c=.o)

COMPILER = cc

FLAGS = -Wall -Wextra -Werror

BONUS_ENABLED = 0

.c.o:
	$(COMPILER) -D BONUS_ENABLED=$(BONUS_ENABLED) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJS)
	make -C libraries/libft
	make -C libraries/minilibx-linux
	$(COMPILER) $(FLAGS) $(OBJS) libs/libft/libft.a -o $(NAME) -Llibraries/minilibx-linux -lmlx -lX11 -lXext
	@ echo "compile complete\n"

bonus: override BONUS_ENABLED = 1
bonus : $()

clean:
	rm -f $(OBJS)
	make clean -C libs/libft
	make clean -C libs/minilibx-linux

fclean:	clean
	rm -f $(NAME)
	make fclean -C libs/libft

re:	fclean all

.PHONY: all clean fclean re bonus