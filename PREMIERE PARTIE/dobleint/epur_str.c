/*
** epur_str.c for str in /home/alex-odet/work/sudoku/PREMIERE PARTIE
**
** Made by Alexandre Odet
** Login   <alex-odet@epitech.net>
**
** Started on  Sat Mar  1 23:09:04 2014 Alexandre Odet
** Last update Sun Mar  2 13:37:11 2014 romaric
*/

#include "sudoku.h"

void	print(int *t)
{
  int	i;

  i = 0;
  while (t[i] != -1 && i < 81)
    {
      printf("t[i] = %d\n", t[i]);
      i++;
    }
}

int	*epur_str(char *str)
{
  int	*new;
  int	i;
  int	j;
  int	len;

  i = 0;
  j = 0;
  len = strlen(str);
  new = xmalloc(sizeof(int) * 82);
  while (str[i] == '-' || str[i] == '|')
    i++;
  while (j < 81 && i < 231)
    {
      if (str[i] == ' ' && str[i + 1] == ' ')
	{
	  new[j] = 0;
	  j++;
	}
      else if (str[i] >= '0' && str[i] <= '9')
	{
	  new[j] = atoi(&str[i]);
	  j++;
	}
      i++;
    }
  //  new[j] = -1;
  //  print(new);
  return (new);
}
