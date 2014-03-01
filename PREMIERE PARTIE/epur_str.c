/*
** epur_str.c for str in /home/alex-odet/work/sudoku/PREMIERE PARTIE
** 
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
** 
** Started on  Sat Mar  1 23:09:04 2014 Alexandre Odet
** Last update Sat Mar  1 23:23:42 2014 Alexandre Odet
*/

#include "sudoku.h"

char	*epur_str(char *str)
{
  char	*new;
  int	i;
  int	j;

  i = 0;
  j = 0;
  new = xmalloc(sizeof(char) * 81);
  while (str[i] == '-' || str[i] == '|')
    i++;
  while (j < 81)
    {
      if (str[i] == ' ' && str[i + 1] == ' ')
	{
	  new[j] = '0';
	  j++;
	}
      else if (str[i] >= '0' && str[i] <= '9')
	{
	  new[j] = str[i];
	  j++;
	}
      i++;
    }
  new[j] = 0;
  printf("new = %s\n", new);
  return (new);
}
