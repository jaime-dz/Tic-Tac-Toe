#include "structures.h"
#include "load.h"
#include <stdio.h>
#include <stdlib.h>
int load_board(char board[][N]){
    FILE *gamefile;
    int counter_r,counter_c,empty;
    gamefile=fopen("game.txt","r");
    if(gamefile==NULL){
        perror("Error. Previous save could not be loaded\n");
        return 1;
    }
    empty=is_empty(gamefile);
    if(empty==0){
        printf("The gamefile is empty\n\n");
        return 1;
    }
    for(counter_r=0;counter_r<N;counter_r++){
        for(counter_c=0;counter_c<N;counter_c++){
            fscanf(gamefile,"%c",&board[counter_r][counter_c]);
        }
    }
    fclose(gamefile);
}
int is_empty(FILE *gf){
    long size;
    fseek(gf,0,SEEK_END);
    size=ftell(gf);
    return size;
}