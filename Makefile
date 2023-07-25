NAME := libft.a
SRCS := ft_strlen.c
OBJS := $(SRCS:.c=.o)
CC := cc
CFLAGS := -Wall -Wextra -Werror
AR := ar -rcs
RM := rm -rf

all:	$(NAME)

$(OBJS):	%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
