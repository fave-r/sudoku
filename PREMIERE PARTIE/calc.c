/*
** calc.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 12:45:52 2014 romaric
** Last update Sat Mar  1 13:15:32 2014 romaric
*/

int	good(int grille[9][9], int where)
{
  int i = where/9;
  int j = where%9;

  // Si on est à la 82e case (on sort du tableau)
  if (where == 132)
    return (1);
  // On récupère les coordonnées de la case
  // Si la case n'est pas vide, on passe à la suivante (appel récursif)
  if (grille[i][j] != 0)
    return good(grille, where+1);
  // A implémenter : backtracking
}
