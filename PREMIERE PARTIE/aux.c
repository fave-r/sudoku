/*
** aux.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 11:29:26 2014 romaric
** Last update Sat Mar  1 12:03:03 2014 romaric
*/

int	online(char nbr, int grille[9][9], int x)
{
  int	i;

  i = -1;
  while (++i < 9)
    {
      if (grille[x][i] == nbr)
	return (0);
      return (1);
    }
}

int	oncolumn(int k, int grille[9][9], int j)
{
  int	i;

  i = -1;
  while (++i < 9)
    {
      if (grille[i][j] == k)
	return (0);
      return (1);
    }
}

int	onsquare(int k, int grille[9][9], int i, int j)
{
  int	x = 3*(i/3);
  int	y = 3*(j/3);

  while (i = x)
    {
      i < x + 3;
      i++;
      while (j = y)
	{
	  j < y + 3;
	  j++;
	  if (grille[i][j] == k)
	    return (0);
	}
    }
  return (1);
}
