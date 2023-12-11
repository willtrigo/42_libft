# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 17:49:31 by dande-je          #+#    #+#              #
#    Updated: 2023/12/11 05:08:02 by dande-je         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#******************************************************************************#
#                                   COLOR                                      #
#******************************************************************************#

RED                         := \033[0;31m
GREEN                       := \033[0;32m
YELLOW                      := \033[0;33m
CYAN                        := \033[0;36m
RESET                       := \033[0m

#******************************************************************************#
#                                   PATH                                       #
#******************************************************************************#

INCLUDES_DIR                := -I./include/
OBJS_DIR                    := ./obj/
SRCS_FT_CTYPE_DIR           := ./src/ft_ctype/
SRCS_FT_FUNCTIONS_ADDED_DIR := ./src/ft_functions_added/
SRCS_FT_LINKED_LIST_DIR     := ./src/ft_linked_list/
SRCS_FT_NON-STANDARD_DIR    := ./src/ft_non-standard/
SRCS_FT_STDLIB_DIR          := ./src/ft_stdlib/
SRCS_FT_STRING_DIR          := ./src/ft_string/

#******************************************************************************#
#                               BASH COMMANDS                                  #
#******************************************************************************#

RM                          := rm -rf
MKDIR                       := mkdir -p
MAKE_NOPRINT                := $(MAKE) --no-print-directory
SLEEP                       := sleep 0.1

#******************************************************************************#
#                                   FILES                                      #
#******************************************************************************#

NAME                        := libft.a

HEADER                      := $(INCLUDES_DIR)

SRCS_FILES                  += $(addprefix $(SRCS_FT_CTYPE_DIR), ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_tolower.c \
	ft_toupper.c)

SRCS_FILES                  += $(addprefix $(SRCS_FT_FUNCTIONS_ADDED_DIR), ft_get_next_line.c \
	ft_get_next_line_utils.c)

SRCS_FILES                  += $(addprefix $(SRCS_FT_LINKED_LIST_DIR), ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c)

SRCS_FILES                  += $(addprefix $(SRCS_FT_NON-STANDARD_DIR), ft_itoa.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_substr.c)

SRCS_FILES                  += $(addprefix $(SRCS_FT_STDLIB_DIR), ft_atoi.c \
	ft_calloc.c)

SRCS_FILES                  += $(addprefix $(SRCS_FT_STRING_DIR), ft_bzero.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c)

OBJS                        += $(SRCS_FILES:%.c=$(OBJS_DIR)%.o)

DEPS                        := $(OBJS:.o=.d)

#******************************************************************************#
#                               OUTPUTS MESSAGES                               #
#******************************************************************************#

COUNT                       = 0
CLEAN_MESSAGE               := Library Libft objects deleted
FCLEAN_MESSAGE              := Library Libft deleted
LIB_MESSAGE                 = Library Libft compiled
COMP_MESSAGE                = Compiling library Libft

#******************************************************************************#
#                               COMPILATION                                    #
#******************************************************************************#

CC                          := cc
CFLAGS                      = -Wall -Wextra -Werror -Ofast -MD -MP
DFLAGS                      := -Wall -Wextra -Werror -Ofast -MD -MP -g3
MFLAGS                      := -ldl -lglfw -pthread -lm
LFLAGS                      := -march=native
FSANITIZE                   := -O1 -fno-omit-frame-pointer -g3
LDFLAGS                     := -fsanitize=address
LIB                         := ar -rcs
COMPILE_OBJS                = $(CC) $(CFLAGS) $(LFLAGS) -I $(HEADER) -c $< -o $@
COMPILE_LIB                 = $(LIB) $(NAME) $(OBJS)

#******************************************************************************#
#                                   DEFINE                                     #
#******************************************************************************#

ifdef WITH_DEBUG
	CFLAGS = $(DFLAGS)
endif

ifdef WITH_FSANITIZE
	COMPILE_OBJS = $(CC) $(CFLAGS) $(LFLAGS) $(FSANITIZE) -I $(HEADER) -c $< -o $@ $(LDFLAGS)
endif

#******************************************************************************#
#                                  FUNCTION                                    #
#******************************************************************************#

define create_dir
	$(MKDIR) $(dir $@)
endef

define comp_objs
	$(eval COUNT=$(shell expr $(COUNT) + 1))
	$(COMPILE_OBJS)
	printf "$(YELLOW)[%03d%%] $(COMP_MESSAGE)\r$(RESET)\n" $$(echo $$(($(COUNT) * 100 / $(words $(OBJS)))))
endef

define comp_lib
	$(COMPILE_LIB)
	$(SLEEP)
	printf "$(GREEN)$(LIB_MESSAGE)$(RESET)\n"
endef

define clean
	$(RM) $(OBJS_DIR)
	$(SLEEP)
	printf "$(RED)$(CLEAN_MESSAGE)$(RESET)\n"
endef

define fclean
	$(RM) $(NAME)
	$(SLEEP)
	printf "$(RED)$(FCLEAN_MESSAGE)$(RESET)\n"
endef

define fsanitize
	$(call clean)
	$(call fclean)
	$(MAKE_NOPRINT) WITH_FSANITIZE=TRUE
endef

define debug
	$(call clean)
	$(call fclean)
	$(MAKE_NOPRINT) WITH_DEBUG=TRUE
endef

#******************************************************************************#
#                                   TARGETS                                    #
#******************************************************************************#

all: $(NAME)

$(OBJS_DIR)%.o: %.c
	$(call create_dir)
	$(call comp_objs)

$(NAME): $(OBJS)
	$(call comp_lib)

clean:
	$(call clean)

fclean: clean
	$(call fclean)

re: fclean all

fsanitize:
	$(call fsanitize)

debug:
	$(call debug)

.PHONY: all clean fclean re fsanitize debug
.DEFAULT_GOAL := all
.SILENT:

-include $(DEPS)
