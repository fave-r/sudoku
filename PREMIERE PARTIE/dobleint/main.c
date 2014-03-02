/*
** main.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 09:34:03 2014 romaric
** Last update Sun Mar  2 15:58:04 2014 Alexandre Odet
*/

#include "sudoku.h"

void	print_tab(int **map);

int	main()
{
  my_loop(0);
  return (0);
}

int	**strint_to_inttab(int *new)
{
  int	**map;
  int	i;
  int	x;
  int	k;

  map = xmalloc(sizeof(int *) * 9);
  i = -1;
  x = -1;
  k = -1;
  while(++i < 9)
    {
      map[i] = xmalloc(sizeof(int) * 9);
      while(++x < 9)
	  map[i][x] = new[++k];
      x = -1;
    }
  print_tab(map);
  return (map);
}

void	print_tab(int **map)
{
  int	y;
  int	x;

  y = 0;
  while (y < 9)
    {
      x = 0;
      while (x < 9)
	{
	  printf("%d", map[y][x]);
	  x++;
	}
      printf("\n");
      y++;
    }
  exit(42);
}

void	my_loop(int fd)
{
  char	buffer[BUFF_SIZE];
  char	*str;
  int	*new;
  int	i;
  int	**map;
  int	x;

  i = -1;
  x = -1;
  str = xmalloc(145 * sizeof(char));
  while ((xread(fd, buffer, BUFF_SIZE)))
    strncpy(str, buffer, strlen(buffer));
  fill_map(str);
  new = epur_str(str);
  map = strint_to_inttab(new);
  estValide(map, 0);
  printf("|------------------|\n");
  while (++i < 9)
    {
      printf("| ");
      while(++x < 9)
	printf("%d ", map[i][x]);
      x = -1;
      printf("\b|\n");
    }
  printf("|------------------|\n");
}
