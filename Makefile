##
## Makefile for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
##
## Made by romaric
## Login   <fave_r@epitech.net>
##
## Started on  Fri Feb 28 20:51:16 2014 romaric
## Last update Fri Feb 28 20:51:19 2014 romaric
##

CC=		clang

RM=		rm -f

CFLAGS=		-Wextra -Wall -Werror -ggdb3 -g3

NAME=		Sudoki-Bi

SRCS=		char.c \
		xfunction.c

OBJS=		$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all fclean re
