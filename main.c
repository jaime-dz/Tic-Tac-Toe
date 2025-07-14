#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
int main(){
    board b;
    int opc_menu;
    char player_symbol;
    do {
        printf("Welcome to Tic Tac Toe!\n\n");
        printf("What do you want to do?\n1)Play\n2)Play against the machine\n3)Exit\n");
        scanf("%d",&opc_menu);
        do{
            printf("Which symbol do you want to play as? (X,0)\n");
            scanf("%c",&player_symbol);
        }while(player_symbol!='X'||player_symbol!='0');

        system("clear");
        init_matr(b.bo);
        

        
    }while(opc_menu!=3||opc_menu<1||opc_menu>3);
    

}

