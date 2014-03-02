##
## Makefile for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
##
## Made by romaric
## Login   <fave_r@epitech.net>
##
## Started on  Fri Feb 28 20:51:16 2014 romaric
## Last update Sun Mar  2 17:47:19 2014 romaric
##

CC=		gcc

RM=		rm -f

CFLAGS=		-Wextra -Wall -Werror -Ofast

NAME=		sudoki-bi

SRCS=		xfunction.c \
		main.c \
		test.c \
		doble.c \
		auxcalc.c

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
