#include <stdio.h>
#include "structures.h"
int save_board(char board[][N]){
    FILE *gamefile;
    int counter_r,counter_c;
    gamefile=fopen("game.txt","w");
    if(gamefile==NULL){
        perror("Error, save file could not be opened\n");
        return 1;
    }
    for(counter_r=0;counter_r<N;counter_r++){
        for(counter_c=0;counter_c<N;counter_c++){
            fprintf(gamefile,"%c",board[counter_r][counter_c]);
        }
        fprintf(gamefile,"\n");
    }
}