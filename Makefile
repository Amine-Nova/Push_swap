# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 14:32:26 by abenmous          #+#    #+#              #
#    Updated: 2023/02/10 17:05:49 by abenmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c \
	   function.c \

CC = gcc

PRINTF =  ft_printf/libftprintf.a

CFLAGS = -Wall -Werror -Wextra

OBJ = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ) $(PRINTF)
	$(CC) $(CFLAGS) $^ -o $@

$(PRINTF) :
	make -C ft_printf

clean :
	rm -rf $(OBJ)
	make clean -C ft_printf

fclean : clean
	rm -rf $(NAME)
	make fclean -C ft_printf

re : fclean all

.PHONY: all clean bonus re