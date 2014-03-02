/*
** test.c for testr in /home/alex-odet/work/sudoku/PREMIERE PARTIE/dobleint
**
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
**
** Started on  Sun Mar  2 15:16:18 2014 Alexandre Odet
** Last update Sun Mar  2 16:58:43 2014 romaric
*/

#include "sudoku.h"

int	estValide(int **grille, int position)
{
  int	i;
  int	j;
  int	k;

  k = 1;
  i = position / 9;
  j = position % 9;
  if (position == 9 * 9)
    return (1);
  if (grille[i][j] != 0)
    return (estValide(grille, position + 1));
  while (k <= 9)
    {
      if (absentSurLigne(k, grille, i) && absentSurColonne(k, grille, j)
	&& absentSurBloc(k, grille, i, j))
        {
	  grille[i][j] = k;
	  if (estValide(grille, position + 1))
	    return (1);
        }
      k++;
    }
  grille[i][j] = 0;
  return (0);
}
