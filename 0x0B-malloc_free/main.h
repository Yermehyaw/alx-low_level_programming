#ifndef MAIN_H
#define MAIN_H

void _putchar(int);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *, char *);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
