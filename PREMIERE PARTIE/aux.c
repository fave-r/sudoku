/*
** aux.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 11:29:26 2014 romaric
** Last update Sat Mar  1 15:00:09 2014 romaric
*/

#include "sudoku.h"

int	online(char nbr, char *str, int x)
{
  int	i;

  i = -1;
  while (++i < 9)
    {
      if (str[doble(x,i)] == nbr)
	return (0);
      return (1);
    }
  return (0);
}

int	oncolumn(char nbr, char *str, int j)
{
  int	i;

  i = -1;
  while (++i < 9)
    {
      if (str[doble(i,j)] == nbr)
	return (0);
      return (1);
    }
  return (0);
}

int	onsquare(char nbr, char *str, int i, int j)
{
  int	x = 3 * (i / 3);
  int	y = 3 * (j / 3);

  i = x;
  j = y;
  while (i < (x + 3))
    {
      i++;
      while (j < (y + 3))
	{
	  j++;
	  if (str[doble(i,j)] == nbr)
	    return (0);
	}
    }
  return (1);
}
