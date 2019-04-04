# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mescande <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 14:03:19 by mescande          #+#    #+#              #
#    Updated: 2019/04/04 16:16:35 by mescande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra

SRC_DIR = srcs/
OBJ_DIR = obj/
INC_DIR = includes/
SRC_LIST = ft_isalnum.c\
		   ft_isalpha.c\
		   ft_isascii.c\
		   ft_isdigit.c\
		   ft_isprint.c\
		   ft_tolower.c\
		   ft_toupper.c\
		   ft_bzero.c\
		   ft_memccpy.c\
		   ft_memchr.c\
		   ft_memcmp.c\
		   ft_memcpy.c\
		   ft_memmove.c\
		   ft_memstr.c\
		   ft_atoi.c\
		   ft_strcat.c\
		   ft_strchr.c\
		   ft_strcmp.c\
		   ft_strcpy.c\
		   ft_strdup.c\
		   ft_strlcat.c\
		   ft_strlen.c\
		   ft_strncat.c\
		   ft_strncmp.c\
		   ft_strncpy.c\
		   ft_strnstr.c\
		   ft_strrchr.c\
		   ft_strstr.c
		   

SRC = $(addprefix $(SRC_DIR), $(SRC_LIST))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_LIST:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $< $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(INC_DIR)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
