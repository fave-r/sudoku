/*
** epur_str.c for str in /home/alex-odet/work/sudoku/PREMIERE PARTIE
**
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
**
** Started on  Sat Mar  1 23:09:04 2014 Alexandre Odet
** Last update Sun Mar  2 02:55:26 2014 Alexandre Odet
*/

#include "sudoku.h"

int	*epur_str(char *str)
{
  int	*new;
  int	i;
  int	j;
  int	len;

  i = 0;
  j = 0;
  len = strlen(str);
  new = xmalloc(sizeof(int) * 81);
  while (str[i] == '-' || str[i] == '|')
    i++;
  while (j < 81 && i < 231)
    {
      if (str[i] == ' ' && str[i + 1] == ' ')
	{
	  new[j] = 0;
	  printf("first condition new = %d\n", new[j]);
	  j++;
	}
      else if (str[i] >= '0' && str[i] <= '9')
	{
	  new[j] = atoi(&str[i]);
	  printf("second condition new = %d\n", new[j]);
	  j++;
	}
      i++;
    }
  new[j] = -1;
  return (new);
}
