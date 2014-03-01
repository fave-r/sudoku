/*
** main.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 09:34:03 2014 romaric
** Last update Sat Mar  1 11:14:05 2014 romaric
*/

#include "sudoku.h"

int	main()
{
  my_loop(0);
  return (0);
}

void	my_loop(int fd)
{
  char	buffer[BUFF_SIZE];
  char	*str;

  str = xmalloc(144 * sizeof(char));
  while ((xread(fd, buffer, BUFF_SIZE)))
    {
      strcpy(str, buffer);
    }
  printf("%s", str);
}
