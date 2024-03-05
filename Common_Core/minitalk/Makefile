# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 14:46:54 by thda-sil          #+#    #+#              #
#    Updated: 2024/03/04 18:23:22 by thda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a

SRC = server.c client.c

OBJ = $(SRC: .c=.o)

BONUS_SRC = server_bonus.c client_bonus.c

BONUS_OBJ = $(BONUS_SRC: .c=.o)

FLAGS = -Wall -Wextra -Werror

.c.o:
	cc $(FLAGS) -I . -c $< -o $@	
	cc $(FLAGS) -c $< -o $(<:.c=.0)

$(NAME): 

all: $(NAME)

bonus: 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean

.PHONY: all clean fclean re bonus
