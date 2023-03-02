# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 14:32:26 by abenmous          #+#    #+#              #
#    Updated: 2023/02/26 17:15:57 by abenmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c \
	   function.c \
	   ft_itoa.c \
	   main.c \
	   ft_lstnew.c \
	   error_check.c \
	   function2.c

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