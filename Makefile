# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 17:49:31 by dande-je          #+#    #+#              #
#    Updated: 2024/03/17 04:17:02 by dande-je         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#******************************************************************************#
#                                   COLOR                                      #
#******************************************************************************#

RED                             := \033[0;31m
GREEN                           := \033[0;32m
YELLOW                          := \033[0;33m
PURPLE                          := \033[0;35m
CYAN                            := \033[0;36m
RESET                           := \033[0m

#******************************************************************************#
#                                   PATH                                       #
#******************************************************************************#

SRCS_FT_CTYPE_DIR              := src/ft_ctype/
SRCS_FT_LINKED_LIST_DIR        := src/ft_linked_list/
SRCS_FT_NON_STANDARD_DIR       := src/ft_non_standard/
SRCS_FT_GET_NEXT_LINE_DIR      := $(SRCS_FT_NON_STANDARD_DIR)ft_get_next_line/
SRCS_FT_PRINTF_DIR             := $(SRCS_FT_NON_STANDARD_DIR)ft_printf/
SRCS_FT_PRINTF_UTILS_DIR       := $(SRCS_FT_PRINTF_DIR)utils/
SRCS_FT_PRINTF_SPECIFIER_DIR   := $(SRCS_FT_PRINTF_DIR)utils/specifier_utils/
SRCS_FT_PRINTF_PARSE_DIR       := $(SRCS_FT_PRINTF_DIR)utils/parse_utils/
SRCS_FT_PRINTF_COMBINATION_DIR := $(SRCS_FT_PRINTF_DIR)utils/parse_utils/combination_utils/
SRCS_FT_SPRINTF_DIR             := $(SRCS_FT_NON_STANDARD_DIR)ft_sprintf/
SRCS_FT_SPRINTF_UTILS_DIR       := $(SRCS_FT_SPRINTF_DIR)utils/
SRCS_FT_SPRINTF_SPECIFIER_DIR   := $(SRCS_FT_SPRINTF_DIR)utils/specifier_utils/
SRCS_FT_SPRINTF_PARSE_DIR       := $(SRCS_FT_SPRINTF_DIR)utils/parse_utils/
SRCS_FT_SPRINTF_COMBINATION_DIR := $(SRCS_FT_SPRINTF_DIR)utils/parse_utils/combination_utils/
SRCS_FT_STDLIB_DIR             := src/ft_stdlib/
SRCS_FT_STRING_DIR             := src/ft_string/
INCS                           := include/
BUILD_DIR                      := build/

#******************************************************************************#
#                               BASH COMMANDS                                  #
#******************************************************************************#

RM                             := rm -rf
MKDIR                          := mkdir -p
MAKEFLAGS                      += --no-print-directory
SLEEP                          := sleep 0.01

#******************************************************************************#
#                                   FILES                                      #
#******************************************************************************#

NAME                           := libft.a

SRCS_FILES                     += $(addprefix $(SRCS_FT_CTYPE_DIR), ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_islower.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_isupper.c \
	ft_tolower.c \
	ft_toupper.c)

SRCS_FILES                     += $(addprefix $(SRCS_FT_GET_NEXT_LINE_DIR), ft_get_next_line.c \
	ft_get_next_line_utils.c)

SRCS_FILES                     += $(addprefix $(SRCS_FT_PRINTF_DIR), ft_printf.c)
SRCS_FILES                     += $(addprefix $(SRCS_FT_PRINTF_SPECIFIER_DIR), ft_specifier.c \
	ft_cast_chr.c \
	ft_cast_str.c \
	ft_cast_hex.c \
	ft_cast_int.c \
	ft_cast_per.c)
SRCS_FILES                     += $(addprefix $(SRCS_FT_PRINTF_UTILS_DIR), ft_line_utils.c \
	ft_str_utils.c \
	ft_nbr_utils.c)
SRCS_FILES                     += $(addprefix $(SRCS_FT_PRINTF_PARSE_DIR), ft_parse_combination.c \
	ft_parse_hash.c \
	ft_parse_plus.c \
	ft_parse_space.c \
	ft_parse_minus.c \
	ft_parse_width.c \
	ft_parse_zero.c \
	ft_parse_precision.c)
SRCS_FILES                     += $(addprefix $(SRCS_FT_PRINTF_COMBINATION_DIR), ft_combination_chr.c \
	ft_combination_str.c \
	ft_combination_str_math_null.c \
	ft_combination_hex.c \
	ft_combination_hex_math.c \
	ft_combination_int.c \
	ft_combination_int_math.c \
	ft_combination_int_math_zero.c \
	ft_combination_int_math_width.c \
	ft_combination_int_math_minus.c \
	ft_combination_str_math.c)

SRCS_FILES                     += $(addprefix $(SRCS_FT_SPRINTF_DIR), ft_sprintf.c)
SRCS_FILES                     += $(addprefix $(SRCS_FT_SPRINTF_SPECIFIER_DIR), ft_specifier.c \
	ft_cast_chr.c \
	ft_cast_str.c \
	ft_cast_hex.c \
	ft_cast_int.c \
	ft_cast_per.c)
SRCS_FILES                     += $(addprefix $(SRCS_FT_SPRINTF_UTILS_DIR), ft_line_utils.c \
	ft_str_utils.c \
	ft_nbr_utils.c)
SRCS_FILES                     += $(addprefix $(SRCS_FT_SPRINTF_PARSE_DIR), ft_parse_combination.c \
	ft_parse_hash.c \
	ft_parse_plus.c \
	ft_parse_space.c \
	ft_parse_minus.c \
	ft_parse_width.c \
	ft_parse_zero.c \
	ft_parse_precision.c)
SRCS_FILES                     += $(addprefix $(SRCS_FT_SPRINTF_COMBINATION_DIR), ft_combination_chr.c \
	ft_combination_str.c \
	ft_combination_str_math_null.c \
	ft_combination_hex.c \
	ft_combination_hex_math.c \
	ft_combination_int.c \
	ft_combination_int_math.c \
	ft_combination_int_math_zero.c \
	ft_combination_int_math_width.c \
	ft_combination_int_math_minus.c \
	ft_combination_str_math.c)

SRCS_FILES                     += $(addprefix $(SRCS_FT_LINKED_LIST_DIR), ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c)

SRCS_FILES                     += $(addprefix $(SRCS_FT_NON_STANDARD_DIR), ft_ilen.c \
	ft_isdouble.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtod.c \
	ft_strtrim.c \
	ft_substr.c )

SRCS_FILES                     += $(addprefix $(SRCS_FT_STDLIB_DIR), ft_atoi.c \
	ft_calloc.c \
	ft_atof.c)

SRCS_FILES                     += $(addprefix $(SRCS_FT_STRING_DIR), ft_bzero.c \
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

OBJS                           += $(SRCS_FILES:%.c=$(BUILD_DIR)%.o)

DEPS                           := $(OBJS:.o=.d)

#******************************************************************************#
#                               OUTPUTS MESSAGES                               #
#******************************************************************************#

COUNT                          = 0
CLEAN_MESSAGE                  := Library Libft objects deleted
FCLEAN_MESSAGE                 := Library Libft deleted
LIB_MESSAGE                    = $(RESET)[100%%] $(GREEN)Linking C static library $(NAME)
COMP_MESSAGE                   = Building C object

#******************************************************************************#
#                               COMPILATION                                    #
#******************************************************************************#

CC                             := cc
CFLAGS                         = -Wall -Wextra -Werror -Ofast -pedantic
CPPFLAGS                       := $(addprefix -I,$(INCS)) -MMD -MP -DDEBUG
DFLAGS                         := -g3
LFLAGS                         := -march=native
FSANITIZE                      := -O1 -fno-omit-frame-pointer -g3
LDFLAGS                        := -fsanitize=address
AR                             := ar -rcs
COMPILE_OBJS                   = $(CC) $(CFLAGS) $(LFLAGS) $(CPPFLAGS) -c $< -o $@
COMPILE_LIB                    = $(AR) $(NAME) $(OBJS)

#******************************************************************************#
#                                   DEFINE                                     #
#******************************************************************************#

ifdef WITH_DEBUG
	CFLAGS += $(DFLAGS)
endif

ifdef WITH_FSANITIZE
	COMPILE_OBJS = $(CC) $(CFLAGS) $(LFLAGS) $(FSANITIZE) $(CPPFLAGS) -c $< -o $@ $(LDFLAGS)
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
	printf "[%3d%%] $(YELLOW)$(COMP_MESSAGE) $@ \r$(RESET)\n" $$(echo $$(($(COUNT) * 100 / $(words $(OBJS)))))
endef

define comp_lib
	$(COMPILE_LIB)
	printf "$(LIB_MESSAGE)$(RESET)\n"
endef

define clean
	$(RM) $(BUILD_DIR)
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
	$(MAKE) WITH_FSANITIZE=TRUE
endef

define debug
	$(call clean)
	$(call fclean)
	$(MAKE) WITH_DEBUG=TRUE
endef

#******************************************************************************#
#                                   TARGETS                                    #
#******************************************************************************#

all: $(NAME)

$(BUILD_DIR)%.o: %.c
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
