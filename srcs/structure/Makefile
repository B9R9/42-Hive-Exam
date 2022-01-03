# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 18:18:16 by briffard          #+#    #+#              #
#    Updated: 2022/01/03 16:48:04 by briffard         ###   ########.fr        #
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

MAKE=make
CC= gcc
CCFLAGS=-Werror -Wall -Wextra
RM= rm -f

lib:
	make -C libft/ fclean && make -C libft/
	make -C libft/ clean

help:
	@echo "COMMANDS LIST"
	@echo "libft	: Create libft.a"
	@echo "help	: Show all commands"
	@echo "clean	: Delete all .o files"
	@echo "fclean	: Do clean and remove executable file"
	@echo "sandbox	: Compiling files for sandbox mod only"

sandbox:
	$(CC) $(CCFLAGS) -c $(FILES)
	$(CC) $(CCFLAGS) -o sandbox $(OBJ) -I $(INCL) -L $(LIBFT)
	$(RM) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) sandbox

re:	fclean sandbox

