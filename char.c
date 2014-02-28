/*
** char.c for minishell in /home/blackbird/work/minishell/1
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Sat Dec 21 12:15:50 2013 romaric
** Last update Sat Jan  4 20:50:14 2014 romaric
*/

#include "minishell.h"

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (1);
}

int     my_strlen(char *str)
{
  int   x;

  x = 0;
  while (str[x] != '\0' && str[x] != '\n')
    x++;
  return (x);
}

int	my_putstr(char *str, int op)
{
  return (write(op, str, my_strlen(str)));
}

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  dest[my_strlen(dest)] = '\0';
  i = 0;
  while (src[i] != '\0' && src[i] != '\n')
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
