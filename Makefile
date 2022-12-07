# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:26:29 by tsodre-p          #+#    #+#              #
#    Updated: 2022/12/02 09:42:11 by tsodre-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

FILES = ft_itoa.c ft_itoa_unsigned.c ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c\
		ft_putnbr_unsigned_int.c ft_put_pointer.c ft_putstr.c

OBJ = $(FILES:%.c=%.o)
FILES_O = ft_itoa.o ft_itoa_unsigned.o ft_printf.o ft_putchar.o ft_puthex.o ft_putnbr.o\
		ft_putnbr_unsigned_int.o ft_put_pointer.o ft_putstr.o

all: $(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(FILES_O)
		@echo "[Success] Compilation done."
clean:
		@$(RM) $(FILES_O)

fclean: clean
		@$(RM) $(NAME)
		@echo "[Deleting] Object files deleted."

re: fclean all
