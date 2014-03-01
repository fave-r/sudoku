/*
** calc.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 12:45:52 2014 romaric
** Last update Sat Mar  1 14:01:49 2014 romaric
*/

int	good(char *str, int where)
{
  int	x;
  int	y;
  int	i;

  x = where / 9;
  y = where % 9;
  i = -1;
  if (where == 9*9)
    return (1);
  if (grille[x][y] != 0)
    return (good(grille, where + 1));
  while (++i < 9)
    {
      if (absentSurLigne(k,grille,x) && absentSurColonne(k,grille,y)
	  && absentSurBloc(k,grille,x,y))
        {
	  grille[x][y] = k;

	  if (good(grille, position+1))
	    return (1);
	}
      grille[x][j] = 0;
      return (0);
    }
}
