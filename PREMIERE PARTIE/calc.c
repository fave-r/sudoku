/*
** calc.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 12:45:52 2014 romaric
** Last update Sat Mar  1 14:51:30 2014 romaric
*/

#include "sudoku.h"

int	good(char *str, int where)
{
  int	x;
  int	y;
  int	i;

  x = where / 9;
  y = where % 9;
  i = 1;
  if (where == 9*9)
    return (1);
  if (str[doble(x,y)] != 0)
    return (good(str, where + 1));
  while (i <= 9)
    {
      if (online(i,str,x) && oncolumn(i,str,y)
	  && onsquare(i,str,x,y))
        {
	  str[doble(x,y)] = i;
	  if (good(str, where + 1))
	    return (1);
	}
      str[doble(x,y)] = 0;
      return (0);
      i++;
    }
  return (0);
}
