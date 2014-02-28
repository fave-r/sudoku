/*
** xfunction.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Fri Feb 28 20:45:38 2014 romaric
** Last update Fri Feb 28 20:45:43 2014 romaric
*/

#include "sudoku.h"

int	xopen(const char *pathname, int flags)
{
  int	len;

  len = open(pathname, flags);
  if (len == -1)
    {
      my_putstr("open fail.\n", 2);
      exit(EXIT_FAILURE);
    }
  return (len);
}

ssize_t	xread(int fd, void *buf, size_t count)
{
  ssize_t	len;

  len = read(fd, buf, count);
  if (len == -1)
    {
      my_putstr("read fail.\n", 2);
      exit(EXIT_FAILURE);
    }
  return (len);
}

void	*xmalloc(size_t n)
{
  void	*mal;

  mal = malloc(n);
  if (mal == NULL)
    {
      free(mal);
      my_putstr("malloc fail.\n", 2);
      return (NULL);
    }
  return (mal);
}
