# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 17:49:31 by dande-je          #+#    #+#              #
#    Updated: 2023/08/08 01:44:31 by dande-je         ###   ########.org.br    #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS := ft_isalpha.c ft_isdigit.c ft_strlen.c ft_isalnum.c ft_isascii.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c

OBJS := $(SRCS:.c=.o)

CC := cc

CFLAGS := -Wall -Wextra -Werror

AR := ar -rcs

RM := rm -rf

all:	$(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
