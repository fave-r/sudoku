/*
** main.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 09:34:03 2014 romaric
** Last update Sun Mar  2 17:08:22 2014 romaric
*/

#include "sudoku.h"

void	print_tab(int **map);

int	main()
{
  my_loop(0);
  return (0);
}

void	my_loop(int fd)
{
  char	buffer[BUFF_SIZE];
  char	*str;
  int	i;
  int	**map;
  int	x;
  int	k;

  i = -1;
  k = -1;
  while ((xread(fd, buffer, BUFF_SIZE)))
    str = strdup(buffer);
  map = xmalloc(sizeof(int *) * 9);
  while (++k < 9)
    map[k] = xmalloc(sizeof(int) * 9);
  init_tab(str, map);
  good(map, 0);
  printf("|------------------|\n");
  while (++i < 9)
    {
      x = -1;
      printf("| ");
      while (++x < 9)
	printf("%d ", map[i][x]);
      printf("\b|\n");
    }
  printf("|------------------|\n");
}
