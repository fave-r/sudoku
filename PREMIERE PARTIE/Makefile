##
## Makefile for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
##
## Made by romaric
## Login   <fave_r@epitech.net>
##
## Started on  Fri Feb 28 20:51:16 2014 romaric
## Last update Sat Mar  1 23:16:43 2014 Alexandre Odet
##

CC=		clang

RM=		rm -f

CFLAGS=		-Wextra -Wall -Werror -ggdb3 -g3

NAME=		sudoki-bi

SRCS=		xfunction.c \
		main.c \
		calc.c \
		aux.c \
		epur_str.c

OBJS=		$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -lm

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all fclean re
