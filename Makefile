# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mescande <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 14:03:19 by mescande          #+#    #+#              #
#    Updated: 2019/11/05 18:57:03 by mescande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_WHITE=$ \x1b[37m
_BLUE=$ \x1b[36m
_GREEN=$ \033[1;32m
_GREY=$ \x1b[33m
_RED=$ \x1b[31m

NAME = test
CC = gcc
FLAGS = -Wall -Werror -Wextra

SRC_DIR = srcs/
OBJ_DIR = obj/
INC_DIR = includes/
SRC_LIST = main.c\
		   chr/ft_isalnum.c\
		   chr/ft_isalpha.c\
		   chr/ft_isascii.c\
		   chr/ft_isblank.c\
		   chr/ft_iscntrl.c\
		   chr/ft_isdigit.c\
		   chr/ft_isgraph.c\
		   chr/ft_islower.c\
		   chr/ft_isprint.c\
		   chr/ft_isspace.c\
		   chr/ft_isupper.c\
		   chr/ft_isxdigit.c\
		   chr/ft_tolower.c\
		   chr/ft_toupper.c\
		   lst/ft_lstadd_back.c
		   lst/ft_lstadd_front.c\
		   lst/ft_lstclear.c\
		   lst/ft_lstdelone.c\
		   lst/ft_lstiter.c\
		   lst/ft_lstlast.c\
		   lst/ft_lstmap.c\
		   lst/ft_lstnew.c\
		   lst/ft_lstsize.c\
		   mem/ft_bzero.c\
		   mem/ft_calloc\
		   mem/ft_memalloc.c\
		   mem/ft_memccpy.c\
		   mem/ft_memchr.c\
		   mem/ft_memcmp.c\
		   mem/ft_memcpy.c\
		   mem/ft_memdel.c\
		   mem/ft_memmove.c\
		   mem/ft_memrealloc.c\
		   mem/ft_memset.c\
		   put/ft_putchar.c\
		   put/ft_putchar_fd.c\
		   put/ft_putendl.c\
		   put/ft_putendl_fd.c\
		   put/ft_putnbr.c\
		   put/ft_putnbr_fd.c\
		   put/ft_putstr.c\
		   put/ft_putstr_fd.c\
		   put/ft_putstrstr.c\
		   str/ft_atoi.c\
		   str/ft_itoa.c\
		   str/ft_strcat.c\
		   str/ft_strchr.c\
		   str/ft_strclr.c\
		   str/ft_strcmp.c\
		   str/ft_strcpy.c\
		   str/ft_strdel.c\
		   str/ft_strdup.c\
		   str/ft_strequ.c\
		   str/ft_striter.c\
		   str/ft_striteri.c\
		   str/ft_strjoin.c\
		   str/ft_strlcat.c\
		   str/ft_strlcpy\
		   str/ft_strlen.c\
		   str/ft_strmap.c\
		   str/ft_strmapi.c\
		   str/ft_strncat.c\
		   str/ft_strncmp.c\
		   str/ft_strncpy.c\
		   str/ft_strnequ.c\
		   str/ft_strnew.c\
		   str/ft_strnstr.c\
		   str/ft_strsplit.c\
		   str/ft_strrchr.c\
		   str/ft_strstr.c\
		   str/ft_strsub.c\
		   str/ft_strtok.c\
		   str/ft_strtrim.c\
		   str/ft_substr\
		   
SRC = $(addprefix $(SRC_DIR), $(SRC_LIST))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_LIST:.c=.o))
DIR = $(sort $(dir $(OBJ)))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@
	@echo "$(_GREEN)Done !$(_WHITE)$(NAME)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(DIR)
	@$(CC) $(FLAGS) -MMD -c $< -o $@ -I $(INC_DIR)
	@echo "$(_GREEN)[OK] $(_BLUE)Compilation... $(_WHITE)"

$(DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean
	@$(MAKE)

.PHONY: all clean fclean re

-include $(OBJ:.o=.d)
