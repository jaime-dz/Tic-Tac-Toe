#include <stdio.h>
#include <time.h>
#include "structures.h"
int main(){
    int start,end_flag=0,count=0;
    //randomize starter player
    srand(time(NULL));
    start=rand()%2;
    if(start==0){
        printf("Player \'X' starts!\n");
    }
    else{
        printf("Player \'O' starts!\n");
    }
    while(end_flag==0){
        if(count%2==0){
            //printf
        }
        count++;
    }
}