# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkoekemo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/09 09:38:16 by lkoekemo          #+#    #+#              #
#    Updated: 2016/05/24 13:00:55 by lkoekemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc -Wall -Wextra -Werror

SRCS = ft_putchar.c ft_printf.c ft_putnbr.c\
	   ft_putstr.c ft_convert.c

O_FILES = ft_putchar.o ft_printf.o ft_putnbr.o\
		  ft_putstr.o ft_convert.o

INC = includes

all: $(NAME)

$(NAME):
	$(CC) -c $(SRCS) -I $(INC) 
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)
	$(CC) test.c -L. -lftprintf

clean:
	rm -f $(O_FILES)

fclean:
	rm -f $(NAME)

re: fclean all clean
