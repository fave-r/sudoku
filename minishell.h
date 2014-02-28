/*
** minishell.h for minishell in /home/blackbird/work/minishell/1
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Wed Dec 18 14:13:39 2013 romaric
** Last update Fri Feb 28 20:25:18 2014 romaric
*/

#ifndef __SUDOKU__
#define __SUDOKU__

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef struct  s_word
{
  int   nbwords;
  int   i;
  char  **strpar;
  char  *ptr;
}               t_word;

typedef struct	s_mainini
{
  char  *buff;
  char  **str;
  char  **envcpy;
  int   pathi;
  char  *path;
  char  **pathsep;
  char  *cmd;
}		t_mainini;

void    aux_man(char ***pathsep, char **path);

#endif
