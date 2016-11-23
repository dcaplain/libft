# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaplain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 11:12:36 by dcaplain          #+#    #+#              #
#    Updated: 2016/11/23 11:18:03 by dcaplain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

SRCO = *.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
