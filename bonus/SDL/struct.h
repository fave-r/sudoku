/*
** struct.h for struct in /home/alex-odet/work/Test_SDL
** 
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
** 
** Started on  Sat Mar  1 16:54:11 2014 Alexandre Odet
** Last update Sat Mar  1 18:21:57 2014 Alexandre Odet
*/

#include <SDL/SDL.h>

typedef struct	s_sdl
{
  SDL_Surface	*ecran;
  SDL_Surface	*message;
  SDL_Surface	*bg;
  SDL_Surface	*screen;
  SDL_Surface	*img;
}		t_sdl;


void		pause_game();
SDL_Surface	*xset_video();
SDL_Surface    	*load_image(char *filename);
