 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stigkas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 10:55:45 by stigkas           #+#    #+#              #
#    Updated: 2023/07/15 10:55:48 by stigkas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
MAIN_DICTIONARY = numbers.dict

$(NAME):
	@gcc -Wall -Wextra -Werror main.c -o $(NAME)

clean:
	@find . -name $(NAME) -delete

fclean: clean
	@find data -name *.dict -not -name $(MAIN_DICTIONARY) -delete
	