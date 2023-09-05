#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int strleng(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
char *argstostr(int ac, char **av);
#endif /* MAIN_H */
