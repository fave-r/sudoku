/*
** aux.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 11:29:26 2014 romaric
** Last update Sun Mar  2 02:33:47 2014 Alexandre Odet
*/

#include "sudoku.h"

int	online(int nbr, int *str, int x)
{
  int	i;

  i = -1;
  while (++i < 9)
    {
      if (str[doble(x,i)] == nbr)
	return (0);
    }
  return (1);
}

int	oncolumn(int nbr, int *str, int y)
{
  int	i;

  i = -1;
  while (++i < 9)
    {
      if (str[doble(i,y)] == nbr)
	return (0);
    }
  return (1);
}

int	onsquare(int nbr, int *str, int i, int j)
{
  int	x = i - (i % 3);
  int	y = j - (j % 3);

  i = x;
  j = y;
  while (i < (x + 3))
    {
      while (j < (y + 3))
	{
	  if (str[doble(i,j)] == nbr)
	    return (0);
	  j++;
	}
      i++;
    }
  return (1);
}
