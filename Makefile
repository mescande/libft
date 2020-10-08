# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mescande <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 14:03:19 by mescande          #+#    #+#              #
#    Updated: 2020/06/10 15:48:09 by Moot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a 

CC			=	clang
FLAGS		=	-Wall -Werror -Wextra

LEN_NAME	=	`printf "%s" $(NAME) | wc -c`
DELTA		=	$$(echo "$$(tput cols)-32-$(LEN_NAME)" | bc)

SRC_DIR = srcs/
OBJ_DIR = obj/
INC_DIR = includes/
SRC_LIST = chr/ft_isalnum.c\
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
		   GNL/get_next_line.c\
		   GNL/get_next_line_utils.c\
		   lst/ft_lstadd_back.c\
		   lst/ft_lstadd_front.c\
		   lst/ft_lstclear.c\
		   lst/ft_lstdelone.c\
		   lst/ft_lstiter.c\
		   lst/ft_lstlast.c\
		   lst/ft_lstmap.c\
		   lst/ft_lstnew.c\
		   lst/ft_lstsize.c\
		   mem/ft_bzero.c\
		   mem/ft_calloc.c\
		   mem/ft_memalloc.c\
		   mem/ft_memccpy.c\
		   mem/ft_memchr.c\
		   mem/ft_memcmp.c\
		   mem/ft_memcpy.c\
		   mem/ft_memdel.c\
		   mem/ft_memmove.c\
		   mem/ft_memrealloc.c\
		   mem/ft_memset.c\
		   printf/ft_atoi.c\
		   printf/ft_conv_1.c\
		   printf/ft_conv_2.c\
		   printf/ft_gestionflags.c\
		   printf/ft_printf.c\
		   printf/ft_putitin.c\
		   printf/ft_strjoin.c\
		   printf/ft_utoa_base.c\
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
		   str/ft_strlcpy.c\
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
		   str/ft_strtok.c\
		   str/ft_strtrim.c\
		   str/ft_substr.c
		   
SRC			=	$(addprefix $(SRC_DIR), $(SRC_LIST))
OBJ			=	$(addprefix $(OBJ_DIR), $(SRC_LIST:.c=.o))
DIR			=	$(sort $(dir $(OBJ)))
NB			=	$(words $(SRC_LIST))
INDEX		=	0

#SHELL		:=	/bin/bash

all: 
	@$(MAKE) -j $(NAME)

$(NAME):		$(OBJ) Makefile
	@ar rcs $(NAME) $(OBJ) 
	@printf "\r\033[38;5;117m✓ MAKE $(NAME)\033[0m\033[K\n"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c Makefile | $(DIR)
	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
	@$(eval TO_DO=$(shell echo $$((20-$(INDEX)*20/$(NB) - 1))))
	@$(eval COLOR=$(shell list=(160 196 202 208 215 221 227 226 190 154 118 84 46); index=$$(($(PERCENT) * $${#list[@]} / 100)); echo "$${list[$$index]}"))
	@printf "\r\033[38;5;%dm↻ [%s]: %2d%% `printf '█%.0s' {0..$(DONE)}`%*s❙%s\033[0m\033[K" $(COLOR) $(NAME) $(PERCENT) $(TO_DO) "" "$(shell echo "$@" | sed 's/^.*\/\(.*\).[och]$$/\1/')"
	@$(CC) $(FLAGS) -MMD -c $< -o $@ -I $(INC_DIR)
	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

$(DIR):
	@mkdir -p $@

$(EXEC): all
	@$(CC) $(FLAGS) -MMD -c main.c -o $@ -I $(INC_DIR)
	@echo "Starting test :"
	./test

clean:
	@rm -rf $(OBJ_DIR)

aclean: clean
	@rm -rf $(EXEC)
	@rm -rf $(NAME)

tclean: clean
	@rm -rf $(EXEC)

fclean: clean
	@rm -rf $(NAME)

re: aclean
	@$(MAKE)

.PHONY: all clean aclean tclean fclean re

-include $(OBJ:.o=.d)
