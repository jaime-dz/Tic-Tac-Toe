#include <stdio.h>
#include <time.h>
#include "structures.h"
int is_valid_move(char **m, int size, int x, int y);
int check_winner(char **m, int size, char player);

int playvs(char **m, int size) {
    int count=0,x,y;
    char players[2]={'X','O'};

    while (is_complete_matrix(m)){
        char current=players[count%2];
        print_matr(m);

        printf("Player '%c' turn!\n",current);

        do{
            printf("Where do you want to place your mark? (x y): ");
            if (scanf("%d%d",&x, &y)!=2) {
                printf("Invalid input. Try again.\n");
                while (getchar()!='\n'); // clear buffer
                continue;
            }
        }while (!is_valid_move(m, size, x, y));

        m[x][y]=current;

        // Check winner after each move
        if (check_winner(m, size, current)){
            print_matr(m);
            printf("Player '%c' wins!\n", current);
            return 0;
        }
        count++;
    }

    print_matr(m);
    printf("It's a draw!\n");
    return 0;
}

// Check if move is valid
int is_valid_move(char **m, int size, int x, int y){
    return x >= 0 && x < size && y >= 0 && y < size && m[x][y] == '-';
}

// Simple winner check for tic tac toe
int check_winner(char **m, int size, char player){
    for (int i = 0; i < size; i++){
        if (m[i][0] == player && m[i][1] == player && m[i][2] == player)
            return 0;
        if (m[0][i] == player && m[1][i] == player && m[2][i] == player)
            return 0;
    }
    if (m[0][0] == player && m[1][1] == player && m[2][2] == player)
        return 0;
    if (m[0][2] == player && m[1][1] == player && m[2][0] == player)
        return 0;

    return 1;
}