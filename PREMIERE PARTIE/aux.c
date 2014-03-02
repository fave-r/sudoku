/*
** aux.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 11:29:26 2014 romaric
** Last update Sun Mar  2 00:03:05 2014 romaric
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
    }
  return (1);
}

int	oncolumn(char nbr, char *str, int j)
{
  int	i;

  i = -1;
  while (++i < 9)
    {
      if (str[doble(i,j)] == nbr)
	return (0);
    }
  return (1);
}

int	onsquare(char nbr, char *str, int i, int j)
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
