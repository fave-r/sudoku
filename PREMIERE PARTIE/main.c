/*
** main.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 09:34:03 2014 romaric
** Last update Sun Mar  2 03:21:51 2014 romaric
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
  int	*new;
  int	i;

  i = -1;
  str = xmalloc(145 * sizeof(char));
  while ((xread(fd, buffer, BUFF_SIZE)))
    strncpy(str, buffer, strlen(buffer));
  fill_map(str);
  if((new = epur_str(str)))
    if (estValide(new, 0))
      while (++i <= 81)
	{
	  printf("\n%d\t", new[i]);
	  if (i % 9 == 0)
	    printf("\n");
	}
}
