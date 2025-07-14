#include <stdio.h>
#include "structures.h"
void init_matr(char **m);
void print_matr(char **m);
int main(){
    return 0;
}
void init_matr(char **m){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            m[i][j]='-';
        }
    }
}
void print_matr(char **m){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%c",&m[i][j]);
        }
        printf("\n");
    }
}