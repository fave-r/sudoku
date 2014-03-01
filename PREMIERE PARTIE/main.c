/*
** main.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 09:34:03 2014 romaric
** Last update Sat Mar  1 23:17:08 2014 Alexandre Odet
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
  char	*new;

  str = xmalloc(145 * sizeof(char));
  while ((xread(fd, buffer, BUFF_SIZE)))
    strncpy(str, buffer, strlen(buffer));
  fill_map(str);
  if((new = epur_str(str)))
    if (good(new, 21))
      printf("%s", str);
}
