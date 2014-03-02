#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "sudoku.h"

// Fonction d'affichage

char    *fill_map(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (str[i] == ' ' && str[i + 1] == ' ')
        str[i + 1] = '0';
      i++;
    }
  return (str);
}

/*
  char yy[10] = {0,1,2,
		 3,4,5,
		 7,8,9};

  int x = 0;
  int y = 0;

  while(x < 3)
    {
      while(y < 3)
	{
	  printf("%d", yy[3 * x + y]);
	  y++;
	}
      printf("\n");
      x++;
      y = 0;
    }

  printf("\n");
  printf("\n");
}
*/
int	absentSurLigne(int k, int *grille, int i)
{
  int	j;

  j = 0;
  while (j < 9)
    if (grille[doble(i, j++)] == k)
      return (0);
  return (1);
}

int	absentSurColonne(int k, int *grille, int j)
{
  int	i;

i = 0;
  while (i < 9)
    if (grille[doble(i++, j)] == k)
      return (0);
  return (1);
}



int	absentSurBloc(int k, int *grille, int i, int j)
{
  int	_i;
  int	_j;

  _i = i-(i%3);
  _j = j-(j%3);
  i = _i;
  while (i < _i+3)
    {
      j=_j;
      while (j < _j+3)
	{
	  if (grille[doble(i, j)] == k)
	    return (0);
	  j++;
	}
      i++;
    }
  return (1);
}

int	estValide(int *grille, int position)
{
  int	i;
  int	j;
  int	k;

  k = 1;
  i = position / 9;
  j = position % 9;
  if (position == 9*9)
    return (1);
  if (grille[doble(i, j)] != 0)
    return estValide(grille, position+1);
  while (k <= 9)
    {
      if (absentSurLigne(k,grille,i) && absentSurColonne(k,grille,j)
	  && absentSurBloc(k,grille,i,j))
        {
	  grille[doble(i, j)] = k;

	  if ( estValide (grille, position+1) )
	    return (1);
        }
      k++;
    }
  grille[doble(i, j)] = 0;
  return (0);
}

int     doble(int x, int y)
{
  int   len;

  len = (9 * y + x);
  //  printf("len = %d\n", len);
  if (len >= 80)
    len = 79;
  return(len);
}
