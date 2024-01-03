# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csouita <csouita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 23:03:44 by csouita           #+#    #+#              #
#    Updated: 2024/01/03 18:36:36 by csouita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

SRCS			=	ft_putchar.c \
					ft_putstr.c	\
					ft_strlen.c \
					ft_strchr.c	\
					ft_putnbr.c \
					ft_putnbr_px.c \
					ft_positif_number.c \
					ft_printf.c 

					
CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror 

OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all