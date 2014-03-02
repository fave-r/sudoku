/*
** calc.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 12:45:52 2014 romaric
** Last update Sun Mar  2 02:32:38 2014 Alexandre Odet
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

int	good(int *str, int where)
{
  int	x;
  int	y;
  int	i;

  x = where / 9;
  y = where % 9;
  i = 1;
  if (where == 81)
    return (1);
  //if (str[doble(x,y)] != 0 + '0')
  //return (good(str, where + 1));

  while(where < 82)
    {
      if (str[doble(x,y)] != 0 + '0') where += 1;
  
      while (i <= 9)
	{
	  if ((online(i + '0',str, x)) && (oncolumn(i + '0',str, y))
	      && (onsquare(i + '0',str, x, y)))
	    {
	      str[doble(x, y)] = i + '0';
	      if (good(str, where + 1))
		return (1);
	    }
	  i++;
	}
      str[doble(x,y)] = 0;
      
    }
  return (0);  
}

int	doble(int x, int y)
{
  int	len;

  len = (9 * y + x);
  //  printf("%d\n", len);
  return(len);
}
