#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "save.h"
#include "load.h"
#include "play_against_machine.h"
#include "playvs.h"
int main(){
    char board[N][N];
    int opt_menu;
    do {
        printf("Welcome to Tic Tac Toe!\n\n");
        printf("What do you want to do?\n1)Play\n2)Play against the machine\n3)Load\n4)Save\n5)Exit\n");
        scanf("%d",&opt_menu);

        system("clear");
        switch(opt_menu){
            case 1:
            int funp=playvs(board);
                break;
            case 2:
                break;
            case 3:
                int funl=load_board(board);
                break;
            case 4:
                int funs=save_board(board);
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Please enter a valid option\n");
                break;
        }
        

        
    }while(opt_menu<1 || opt_menu>5);
    
    return 0;
}