# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briffard <briffard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 18:18:16 by briffard          #+#    #+#              #
#    Updated: 2021/12/29 19:32:08 by briffard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= CSchool

FILES= header.c				\
		function_generator.c	\
		level_modifier.c		\
		openinstruction.c		\
		sandbox.c				\

LIBFT= libft/ -lft
OBJ= $(FILES:.c=.o)

INCL=includes

CC= gcc
CCFLAGS=-Werror -Wall -Wextra
RM= rm -f

libft:
	make -C libft/ fclean && make -C libft/

help:
	@echo "COMMANDS LIST"
	@echo "libft	: Create libft.a"
	@echo "help	: Show all commands"
	@echo "clean	: Delete all .o"
	@echo "fclean	: Do clean and remove executable file"
	@echo "sandbox	: Compiling file for sandbox mod only"

sandbox:
	$(CC) $(CCFLAGS) -c $(FILES)
	$(CC) $(CCFLAGS) -o sandbox $(OBJ) -I $(INCL) -L$(LIBFT)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) sandbox

