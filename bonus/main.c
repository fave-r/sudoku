/*
** main.c for main in /home/alex-odet/work/Test_SDL
**
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
**
** Started on  Sat Mar  1 12:39:03 2014 Alexandre Odet
** Last update Sat Mar  1 19:53:54 2014 romaric
*/

#include "struct.h"

int		main(int ac, char **av)
{
  t_sdl	ptr;

  ptr.ecran = NULL;
  ptr.message = NULL;
  ptr.screen = NULL;
  ptr.bg = NULL;
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) == -1)
    {
      fprintf(stderr, "SDL init fail %s\n", SDL_GetError());
      exit(EXIT_FAILURE);
    }
  ptr.ecran = xset_video();
  SDL_WM_SetCaption("Sudoku_bonus", NULL);
  ptr.img = load_image(av[1]);
  SDL_FillRect(ptr.ecran, NULL, SDL_MapRGB(ptr.ecran->format, 100, 200, 255));
  SDL_Flip(ptr.ecran);
  pause_game();
  SDL_Quit();
  return (EXIT_SUCCESS);
}

void	change_surface(int x, int y, SDL_Surface *src, SDL_Surface *dest)
{
  SDL_Rect	offset;

  offset.x = x;
  offset.y = y;
  SDL_BlitSurface(src, NULL, dest, &offset);
}

SDL_Surface	*load_image(char *filename)
{
  SDL_Surface	*tmp;
  SDL_Surface	*opti;

  tmp = NULL;
  opti = NULL;
  tmp = SDL_LoadBMP(filename);
  if (tmp != NULL)
    {
      opti = SDL_DisplayFormat(tmp);
      SDL_FreeSurface(tmp);
    }
  return (opti);
}

SDL_Surface	*xset_video()
{
  SDL_Surface	*ecran;

  ecran = NULL;
ecran = SDL_SetVideoMode(640, 640, 32, SDL_FULLSCREEN | SDL_RESIZABLE | SDL_DOUBLEBUF);
  if (ecran == NULL)
    {
      fprintf(stderr, "Impossible de charger le mode video : %s\n", SDL_GetError());
      exit(EXIT_FAILURE);
    }
  return (ecran);
}

void		pause_game()
{
  int		bool;
  SDL_Event	event;

  bool = 1;
  while (bool)
    {
      SDL_WaitEvent(&event);
      switch (event.type)
	{
	case SDL_QUIT:
	  bool = 0;
	}
    }
}
