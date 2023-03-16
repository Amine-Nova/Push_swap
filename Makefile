# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 14:32:26 by abenmous          #+#    #+#              #
#    Updated: 2023/03/16 21:07:53 by abenmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c \
	   function.c \
	   ft_itoa.c \
	   main.c \
	   sort_num.c\
	   rules_set.c \
	   ft_lstnew.c \
	   error_check.c \
	   sort_num2.c \
	   sort_num3.c \
	   function2.c

CC = gcc

PRINTF =  ft_printf/libftprintf.a

CFLAGS = -Wall -Werror -Wextra

OBJS = 

all : $(NAME)

$(PRINTF) :
	@make -C ft_printf

$(NAME) : $(SRCS) $(PRINTF)
	@$(CC) $(CFLAGS) $^ -o $@

clean :
	@rm -rf 
	@make clean -C ft_printf

fclean : clean
	@rm -rf $(NAME)
	@make fclean -C ft_printf

re : fclean all

.PHONY: all clean bonus re