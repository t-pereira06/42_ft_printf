# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:26:29 by tsodre-p          #+#    #+#              #
#    Updated: 2022/11/23 10:50:25 by tsodre-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT = libft/libft.h
SRC_DIR = stcs/ft_printf.h

CC = cc
RM = rm -f
CFLAG = -Wall -Wextra -Werror
AR = ar rcs

SRC = $(shell find . -type f -name '*.c')

OBJ = $(FUNCS:%.c=%.o)
OBJ_FINAL = $(shell find . -type f -name '*.o')

all: $(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(OBJ_FINAL)
clean:
		@$(RM) $(OBJ_FINAL)

fclean: clean
		@$(RM) $(NAME)

re: fclean all
