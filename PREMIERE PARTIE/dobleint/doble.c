/*
** doble.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE/dobleint
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sun Mar  2 16:38:26 2014 romaric
** Last update Sun Mar  2 16:39:47 2014 romaric
*/

#include "sudoku.h"

void	init_tab(char *map, int **tab)
{
  int	i;
  int	j;
  int	pos;

  pos = 23;
  i = -1;
  while (++i < 9)
    {
      j = -1;
      while (++j < 9)
	{
	  tab[i][j] = (map[pos] >= '1' && map[pos] <= '9') ? map[pos] - '0' : 0;
	  pos += 2;
	}
      pos += 3;
    }
}
