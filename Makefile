# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 14:32:26 by abenmous          #+#    #+#              #
#    Updated: 2023/03/22 14:16:03 by abenmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS = checker

SRCS =	push_swap.c \
		function.c \
		ft_itoa.c \
		main.c \
		sort_num.c \
		rules_set.c \
		linked_list.c \
		error_check.c \
		sort_num2.c \
		sort_num3.c \
		function2.c

SRCS_BONUS =	checker_bonus.c \
				push_swap.c \
				function.c \
				error_check.c \
				rules_set.c \
				linked_list.c \
				bonus_file.c \
				get_next_line.c \
				get_next_line_utils.c \
				function2.c


CC = gcc

PRINTF =  ft_printf/libftprintf.a

CFLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

all : $(NAME)

bonus : $(BONUS)

$(PRINTF) :
	@make -C ft_printf

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(PRINTF) 
	@$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $@

$(BONUS) : $(OBJS_BONUS) $(PRINTF) 
	@$(CC) $(CFLAGS) $(OBJS_BONUS) $(PRINTF) -o $@

clean :
	@rm -rf $(OBJS) $(OBJS_BONUS)
	@make clean -C ft_printf

fclean : clean
	@rm -rf $(NAME) $(BONUS)
	@make fclean -C ft_printf

re : fclean all

.PHONY: all clean bonus re