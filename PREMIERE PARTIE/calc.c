/*
** calc.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 12:45:52 2014 romaric
** Last update Sat Mar  1 19:24:22 2014 Alexandre Odet
*/

#include "sudoku.h"

char	*fill_map(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == ' ' && str[i + 1] == ' ')
	str[i + 1] = '0';
      i++;
    }
  return (str);
}

int	good(char *str, int where)
{
  int	x;
  int	y;
  int	i;

  x = where / 21;
  y = where % 21;
  i = 1;
  if (where == 243)
    return (1);
  if (str[doble(x,y)] != 0)
    return (good(str, where + 1));
  while (i <= 12)
    {
      if (online(i - '0',str,x) && oncolumn(i - '0',str,y)
	  && onsquare(i - '0',str,x,y))
        {
	  str[doble(x,y)] = i;
	  //printf("doble(x,y) = %d\ni = %d\n", doble(x, y), i);
	  if (good(str, where + 1))
	    return (1);
	}
      str[doble(x,y)] = 0;
      return (0);
      i++;
    }
  return (0);
}

int	doble(int x, int y)
{
  return (21 * y + x);
}
