/*
** auxcalc.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE/dobleint
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sun Mar  2 16:56:56 2014 romaric
** Last update Sun Mar  2 17:20:38 2014 romaric
*/

#include "sudoku.h"

int     online(int k, int **map, int i)
{
  int   j;

  j = 0;
  while (j < 9)
    if (map[i][j++] == k)
      return (0);
  return (1);
}

int     oncolumn(int k, int **map, int j)
{
  int   i;

  i = 0;
  while (i < 9)
    if (map[i++][j] == k)
      return (0);
  return (1);
}

int     onsquare(int k, int **map, int i, int j)
{
  int   x;
  int   y;

  x = i - (i % 3);
  y = j - (j % 3);
  i = x;
  while (i < x + 3)
    {
      j = y;
      while (j < y + 3)
        {
	  if (map[i][j] == k)
            return (0);
          j++;
        }
      i++;
    }
  return (1);
}
