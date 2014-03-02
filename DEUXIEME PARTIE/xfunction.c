/*
** xfunction.c for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Fri Feb 28 20:45:38 2014 romaric
** Last update Sun Mar  2 23:27:35 2014 romaric
*/

#include "sudoku.h"

int	xopen(const char *pathname, int flags)
{
  int	len;

  len = open(pathname, flags);
  if (len == -1)
    {
      fprintf(stderr, "open fail.\n");
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
      fprintf(stderr, "read fail.\n");
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
      fprintf(stderr, "malloc fail.\n");
      return (NULL);
    }
  return (mal);
}
