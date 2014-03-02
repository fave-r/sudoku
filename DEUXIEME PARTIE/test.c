/*
** test.c for testr in /home/alex-odet/work/sudoku/PREMIERE PARTIE/dobleint
**
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
**
** Started on  Sun Mar  2 15:16:18 2014 Alexandre Odet
** Last update Sun Mar  2 17:17:15 2014 romaric
*/

#include "sudoku.h"

int	good(int **map, int where)
{
  int	i;
  int	j;
  int	k;

  k = 1;
  i = where / 9;
  j = where % 9;
  if (where == 9 * 9)
    return (1);
  if (map[i][j] != 0)
    return (good(map, where + 1));
  while (k <= 9)
    {
      if (online(k, map, i) && oncolumn(k, map, j)
	&& onsquare(k, map, i, j))
        {
	  map[i][j] = k;
	  if (good(map, where + 1))
	    return (1);
        }
      k++;
    }
  map[i][j] = 0;
  return (0);
}
