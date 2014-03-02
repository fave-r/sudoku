/*
** sudoku.h for sudoku in /home/blackbird/work/Rush2sudoku/sudoku
**
** Made by romaric
** Login   <fave_r@epitech.net>
**
** Started on  Fri Feb 28 20:46:48 2014 romaric
** Last update Sun Mar  2 03:08:16 2014 romaric
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
void    my_loop(int fd);
int     doble(int x, int y);
int     online(int nbr, int *str, int x);
int     oncolumn(int nbr, int *str, int j);
int     onsquare(int nbr, int *str, int i, int j);
int	good(int *str, int where);
char	*fill_map(char *str);
int     estValide(int *grille, int position);
int     absentSurBloc(int k, int *grille, int i, int j);
int     absentSurColonne(int k, int *grille, int j);
int     absentSurLigne(int k, int *grille, int i);
int     doble(int x, int y);
int	*epur_str(char *str);

#endif
