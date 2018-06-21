##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Lucas Duboisse
##

NAME	=	calendar

SRC	=	src/main.c		\
		src/linked_list.c	\
		src/base.c		\
		src/base_lknd_list.c	\
		src/str_to_word_tab.c	\
		src/free.c

OBJ	=	$(SRC:.c=.o)

GCC_ARG	=		-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR)
GCC_ARG_DEBUG	=	-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR) -g
CFLAGS	=		-g -W -Wall -Wextra -Iinclude/

all:		$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
