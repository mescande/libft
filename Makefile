# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mescande <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 14:03:19 by mescande          #+#    #+#              #
#    Updated: 2019/04/04 20:04:33 by mescande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
		   chr/ft_isdigit.c\
		   chr/ft_isprint.c\
		   chr/ft_tolower.c\
		   chr/ft_toupper.c\
		   mem/ft_bzero.c\
		   mem/ft_memccpy.c\
		   mem/ft_memchr.c\
		   mem/ft_memcmp.c\
		   mem/ft_memcpy.c\
		   mem/ft_memmove.c\
		   mem/ft_memset.c\
		   str/ft_atoi.c\
		   str/ft_strcat.c\
		   str/ft_strchr.c\
		   str/ft_strcmp.c\
		   str/ft_strcpy.c\
		   str/ft_strdup.c\
		   str/ft_strlcat.c\
		   str/ft_strlen.c\
		   str/ft_strncat.c\
		   str/ft_strncmp.c\
		   str/ft_strncpy.c\
		   str/ft_strnstr.c\
		   str/ft_strrchr.c\
		   str/ft_strstr.c
		   
SRC = $(addprefix $(SRC_DIR), $(SRC_LIST))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_LIST:.c=.o))
DIR = $(sort $(dir $(OBJ)))

-include $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(DIR)
	@$(CC) $(FLAGS) -MMD -c $< -o $@ -I $(INC_DIR)

$(DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean
	$(MAKE)

.PHONY: all clean fclean re
