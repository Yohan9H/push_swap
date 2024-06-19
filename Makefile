# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 12:48:41 by yohurteb          #+#    #+#              #
#    Updated: 2024/06/19 09:50:15 by yohurteb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra -I include/

SRCS = \
	src/main.c \
	src/check_args.c \
	src/parser.c \
	instruction/instruction.c \
	instruction/instruction_two.c \
	utils/ft_atoi.c \
	utils/ft_lstadd_back.c \
	utils/ft_lstadd_front.c \
	utils/ft_lstclear.c \
	utils/ft_lstlast.c \
	utils/ft_lstnew.c \
	utils/ft_lstsize.c \
	algo/is_sorted.c \
	algo/simple_sort.c \
	algo/simple_sort_two.c \
	algo/radix.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re