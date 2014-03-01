/*
** aux.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 11:29:26 2014 romaric
** Last update Sat Mar  1 21:51:10 2014 romaric
*/

#include "sudoku.h"

int	online(char nbr, char *str, int x)
{
  int	i;

  //printf("nbr =\n");
  printf("%c\n", nbr);
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

  //printf("nbr =");
  printf("%c\n", nbr);
  //  fprintf(stderr, "%d -> %c %c %c %c %c %c %c %c %c\n", j, str[doble(0, j)], str[doble(1, j)], str[doble(2, j)], str[doble(3, j)], str[doble(4, j)], str[doble(5, j)], str[doble(6, j)], str[doble(7, j)], str[doble(8, j)]);
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
