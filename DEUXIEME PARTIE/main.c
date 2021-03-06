/*
** main.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku/PREMIERE PARTIE
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Mar  1 09:34:03 2014 romaric
** Last update Sun Mar  2 22:04:25 2014 romaric
*/

#include "sudoku.h"

int	main()
{
  my_loop(0);
  return (0);
}

void	print_map(t_sud *p)
{
  if (p->len != 0)
    printf("####################\n");
  printf("|------------------|\n");
  while (++p->i < 9)
    {
      p->x = -1;
      printf("| ");
      while (++p->x < 9)
	{
	  printf("%d", p->map[p->i][p->x]);
	  if (p->x / 8 == 0)
	    printf(" ");
	}
      printf("|\n");
    }
  printf("|------------------|\n");
  p->len++;
}

void	my_loop(int fd)
{
  t_sud	p;

  p.k = -1;
  p.map = xmalloc(sizeof(int *) * 9);
  while (++p.k < 9)
    p.map[p.k] = xmalloc(sizeof(int) * 9);
  p.len = 0;
  while ((xread(fd, p.buffer, BUFF_SIZE)))
    {
      p.i = -1;
      p.k = -1;
      p.str = strndup(p.buffer, 231);
      init_tab(p.str, p.map);
      good(p.map, 0);
      print_map(&p);
    }
}
