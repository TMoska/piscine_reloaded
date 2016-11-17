# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoska <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/17 12:46:18 by tmoska            #+#    #+#              #
#    Updated: 2016/11/17 13:12:50 by tmoska           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMP = gcc
FLAGS = -Wall -Wextra -Werror -I./includes
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
NAME = libft.a
SRC_DIR = srcs/
WDIR = $(addprefix $(SRC_DIR), $(SRCS))
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS):
	$(COMP) -c $(FLAGS) $(WDIR)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
