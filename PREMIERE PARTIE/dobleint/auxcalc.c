/*
** auxcalc.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE/dobleint
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sun Mar  2 16:56:56 2014 romaric
** Last update Sun Mar  2 16:57:15 2014 romaric
*/

#include "sudoku.h"

int     absentSurLigne(int k, int **grille, int i)
{
  int   j;

  j = 0;
  while (j < 9)
    if (grille[i][j++] == k)
      return (0);
  return (1);
}

int     absentSurColonne(int k, int **grille, int j)
{
  int   i;

  i = 0;
  while (i < 9)
    if (grille[i++][j] == k)
      return (0);
  return (1);
}

int     absentSurBloc(int k, int **grille, int i, int j)
{
  int   _i;
  int   _j;

  _i = i - (i % 3);
  _j = j - (j % 3);
  i = _i;
  while (i < _i + 3)
    {
      j = _j;
      while (j < _j + 3)
        {
	  if (grille[i][j] == k)
            return (0);
          j++;
        }
      i++;
    }
  return (1);
}
