# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 12:37:42 by vipalaci          #+#    #+#              #
#    Updated: 2023/03/21 11:06:48 by vipalaci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SOURCES = ft_printf.c ft_printstr.c ft_printptr.c ft_printnbr.c \
	ft_printuint.c ft_printhex.c ft_putchar_fd.c

OBJECTS = $(SOURCES:.c=.o)
INCLUDE = ft_printf.h

all: $(NAME)

$(NAME): $(OBJECTS)
	$(LIB) $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re