/*
** sudoku.h for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Fri Feb 28 20:46:48 2014 romaric
** Last update Sat Mar  1 14:51:42 2014 romaric
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

typedef struct  s_word
{
}               t_word;

int     xopen(const char *pathname, int flags);
ssize_t xread(int fd, void *buf, size_t count);
void    *xmalloc(size_t n);
char	*epur_str(char *str);
void    my_loop(int fd);
int     doble(int x, int y);
int     online(char nbr, char *str, int x);
int     oncolumn(char nbr, char *str, int j);
int     onsquare(char nbr, char *str, int i, int j);
int	good(char *str, int where);

#endif
