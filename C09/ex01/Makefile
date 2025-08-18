# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/16 13:29:55 by sdeppe            #+#    #+#              #
#    Updated: 2025/08/16 15:55:22 by sdeppe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MY_SOURCES = srcs/ft_putchar.c \
			 srcs/ft_putstr.c \
			 srcs/ft_strcmp.c \
			 srcs/ft_strlen.c \
			 srcs/ft_swap.c 

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

libft.a: $(MY_OBJECTS)
	ar crs libft.a $(MY_OBJECTS)

all: libft.a

clean:
	rm $(MY_OBJECTS)
	
f_clean:
	rm libft.a $(MY_OBJECTS)
	
re: f_clean | all
