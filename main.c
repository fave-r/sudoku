/*
** main.c for main in /home/alex-odet/work/sudoku
** 
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
** 
** Started on  Fri Feb 28 20:55:52 2014 Alexandre Odet
** Last update Fri Feb 28 21:02:08 2014 Alexandre Odet
*/

#include "sudoku.h"

int	main(int ac, char **av)
{
  int	fd;

  if (ac == 1)
    {
      my_putstr("Usage :", 2);
      my_putstr(av[0], 2);
      my_putstr(" map_to_resolve\n", 2);
      return (0);
    }
  else
    {
      fd = xopen(av[1], O_RDONLY);
      my_loop(fd);
    }
  return (0);
}

void	my_loop(int fd)
{
  char	buffer[BUFF_SIZE];

  while ((xread(fd, buffer, BUFF_SIZE)))
    {
      printf("J'ai win\n");
    }
}
