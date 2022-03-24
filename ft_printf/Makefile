# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 12:59:12 by munal             #+#    #+#              #
#    Updated: 2022/03/09 13:01:10 by munal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
LIBFT=libft/libft.a

SRCS=ft_printf.c printf_utils.c
OBJS=$(SRCS:.c=.o)


CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	make bonus -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
