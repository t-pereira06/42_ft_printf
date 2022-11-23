# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:26:29 by tsodre-p          #+#    #+#              #
#    Updated: 2022/11/23 17:13:21 by tsodre-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
RM = rm -f
CFLAG = -Wall -Wextra -Werror
AR = ar rcs

FILES = $(shell find . -type f -name '*.c')

OBJ = $(FILES:%.c=%.o)
FILES_O = $(shell find . -type f -name '*.o')

all: $(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(FILES_O)
clean:
		@$(RM) $(FILES_O)

fclean: clean
		@$(RM) $(NAME)

re: fclean all
