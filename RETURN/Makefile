# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mescande <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 14:03:19 by mescande          #+#    #+#              #
#    Updated: 2019/11/14 10:33:36 by mescande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC_DIR = ./
OBJ_DIR = obj/
INC_DIR = ./
SRC_LIST = ft_isalnum.c\
		   ft_isalpha.c\
		   ft_isascii.c\
		   ft_isdigit.c\
		   ft_isprint.c\
		   ft_tolower.c\
		   ft_toupper.c\
		   ft_bzero.c\
		   ft_calloc.c\
		   ft_memalloc.c\
		   ft_memccpy.c\
		   ft_memchr.c\
		   ft_memcmp.c\
		   ft_memcpy.c\
		   ft_memmove.c\
		   ft_memset.c\
		   ft_putchar_fd.c\
		   ft_putendl_fd.c\
		   ft_putnbr_fd.c\
		   ft_putstr_fd.c\
		   ft_atoi.c\
		   ft_itoa.c\
		   ft_strcat.c\
		   ft_strchr.c\
		   ft_strcpy.c\
		   ft_strdup.c\
		   ft_strjoin.c\
		   ft_strlcat.c\
		   ft_strlcpy.c\
		   ft_strlen.c\
		   ft_strmapi.c\
		   ft_strncmp.c\
		   ft_strnew.c\
		   ft_strnstr.c\
		   ft_split.c\
		   ft_strrchr.c\
		   ft_strtrim.c\
		   ft_substr.c

BNS_LIST = ft_lstadd_back_bonus.c\
		   ft_lstadd_front_bonus.c\
		   ft_lstclear_bonus.c\
		   ft_lstdelone_bonus.c\
		   ft_lstiter_bonus.c\
		   ft_lstlast_bonus.c\
		   ft_lstmap_bonus.c\
		   ft_lstnew_bonus.c\
		   ft_lstsize_bonus.c

SRC = $(addprefix $(SRC_DIR), $(SRC_LIST))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_LIST:.c=.o))
OBJ_BNS = $(addprefix $(OBJ_DIR), $(BNS_LIST:.c=.o))
DIR = $(sort $(dir $(OBJ)))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(DIR)
	@$(CC) $(FLAGS) -MMD -c $< -o $@ -I $(INC_DIR)

$(DIR):
	@mkdir -p $@

bonus: $(OBJ) $(OBJ_BNS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BNS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE)

.PHONY: all clean fclean re bonus

-include $(OBJ:.o=.d)
-include $(OBJ_BNS:.o=.d)
