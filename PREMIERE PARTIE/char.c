/*
** char.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Fri Feb 28 20:46:02 2014 romaric
** Last update Fri Feb 28 21:17:30 2014 romaric
*/

#include "sudoku.h"

int	my_putstr(char *str, int op)
{
  return (write(op, str, strlen(str)));
}
