##
## Makefile for Makefile in /home/alex-odet/work/Test_SDL
##
## Made by Alexandre Odet
## Login   <alex-odet@epitech.net>
##
## Started on  Sat Mar  1 14:41:33 2014 Alexandre Odet
## Last update Sun Mar  2 21:08:44 2014 Alexandre Odet
##

NAME=	SDL_TEST

CC=	clang

SRC=	main.c

T=	*~

RM=	rm -f

all:
	$(CC) -o $(NAME) $(SRC) -lSDL -lGL -lGLU

clean:
	$(RM) $(T)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all