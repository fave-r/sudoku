#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


// Fonction d'affichage
void	affichage (char grille[9][9])
{
  int i;

  i = 0;
  while (i < 9)
    {
      int j = 0;
      while (j<9)
        {
	  printf( ((j+1)%3) ? "%d " : "%d|", grille[i][j]);
	  j++;
        }
      putchar('\n');
      if (!((i+1)%3))
	puts("------------------");
      i++;
    }
  puts("\n\n");

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
  */
}

int	absentSurLigne(int k, char grille[9][9], int i)
{
  int	j;

  j = 0;
  while (j < 9)
    if (grille[i][j++] == k)
      return (0);
  return (1);
}

int	absentSurColonne(int k, char grille[9][9], int j)
{
  int	i;

i = 0;
  while (i < 9)
    if (grille[i++][j] == k)
      return (0);
  return (1);
}



int	absentSurBloc(int k, char grille[9][9], int i, int j)
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
	  if (grille[i][j] == k)
	    return (0);
	  j++;
	}
      i++;
    }
  return (1);
}

int	estValide(char grille[9][9], int position)
{
  int	i;
  int	j;
  int	k;

  k = 1;
  i = position / 9;
  j = position % 9;
  if (position == 9*9)
    return (1);
  if (grille[i][j] != 0)
    return estValide(grille, position+1);
  while (k <= 9)
    {
      if (absentSurLigne(k,grille,i) && absentSurColonne(k,grille,j)
	  && absentSurBloc(k,grille,i,j))
        {
	  grille[i][j] = k;

	  if ( estValide (grille, position+1) )
	    return (1);
        }
      k++;
    }
  grille[i][j] = 0;
  return (0);
}

int	main (void)
{
    char grille[9][9] =
      {
        {2,0,0,0,0,4,0,6,9},
        {1,0,0,0,0,6,0,4,0},
        {0,4,0,0,0,0,7,0,0},
        {0,0,0,0,3,0,8,5,0},
        {8,1,0,0,2,0,0,0,0},
        {9,0,0,0,0,0,0,0,0},
        {0,0,7,1,0,0,0,0,2},
        {0,0,0,0,0,2,3,0,0},
        {5,0,2,0,0,0,0,0,0}
      };

    printf("Grille avant\n");
    affichage(grille);

    estValide(grille,0);

    printf("Grille apres\n");
    affichage(grille);
}
