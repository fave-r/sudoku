/*
** main.c for main in /home/alex-odet/work/sudoku
**
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
**
** Started on  Fri Feb 28 20:55:52 2014 Alexandre Odet
** Last update Sat Mar  1 09:32:11 2014 Alexandre Odet
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

  while ((xread(fd, buffer, BUFF_SIZE)))
    {
      printf("J'ai win\n");
    }
}
