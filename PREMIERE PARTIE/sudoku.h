/*
** sudoku.h for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Fri Feb 28 20:46:48 2014 romaric
** Last update Fri Feb 28 21:21:04 2014 romaric
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

#define BUFF_SIZE 4096

typedef struct  s_word
{
}               t_word;

int     xopen(const char *pathname, int flags);
ssize_t xread(int fd, void *buf, size_t count);
void    *xmalloc(size_t n);
int     my_putstr(char *str, int op);
void    my_loop(int fd);

#endif