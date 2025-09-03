#ifndef PLAYVS_H
#define PLAYVS_H
int playvs(char **m,int size);
int is_valid_move(char **m, int size, int x, int y);
int check_winner(char **m, int size, char player);
#endif