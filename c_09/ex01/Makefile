# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stigkas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 10:46:28 by stigkas           #+#    #+#              #
#    Updated: 2023/07/17 19:51:27 by stigkas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJECTS	= $(FUNC:.c=.o)

INC = includes

CFLAGS = -Wall -Wextra -Werror

%.o: %.c 
	cc $(CFLAGS) -c $< -o $@ -I $(INC)

all: $(NAME)

$(NAME): $(OBJECTS)
		ar -crs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

