# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 08:19:01 by tgeorgie          #+#    #+#              #
#    Updated: 2023/11/02 13:07:13 by tgeorgie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	tests_libft.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -c -I
SRC		=	./
HEADER	=	./
CFILES	=	$(SRC)t_ft_*.c
OFILES	=	$(CFILES:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) $(HEADER) $(CFILES)
	ar -rc $(NAME) $(OFILES)
	ranlib $(NAME)

all: $(NAME)

.PHONY: clean all fclean re
clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
