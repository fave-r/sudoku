/*
** sudoku.h for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Fri Feb 28 20:46:48 2014 romaric
** Last update Sun Mar  2 17:31:38 2014 Alexandre Odet
*/

#ifndef __SUDOKU__
#define __SUDOKU__

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define BUFF_SIZE 231

typedef struct  s_sud
{
  char	buffer[BUFF_SIZE];
  char	*str;
  int	i;
  int	**map;
  int	x;
  int	k;
}               t_sud;

int     xopen(const char *pathname, int flags);
ssize_t xread(int fd, void *buf, size_t count);
void    *xmalloc(size_t n);
void    my_loop(int fd);
int     good(int **map, int where);
int     onsquare(int k, int **grille, int i, int j);
int     oncolumn(int k, int **grille, int j);
int     online(int k, int **grille, int i);
void    init_tab(char *map, int **tab);

#endif
