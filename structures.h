#ifndef STRUCTURES_H
#define STRUCTURES_H
#define N 3
typedef struct{
    char bo[N][N];
}board;
void init_matr(char **m);
void print_matr(char **m);
#endif