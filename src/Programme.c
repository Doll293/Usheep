#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Bonjour :) \n\n");

    int total = 0, rep;
    for(int i=0; i < 10; i++){
        printf("%d \n",i);
        total += i;
    }
    printf("\n");

    printf("Pouviez-vous faire la somme de tous les nombres : ");
    scanf("%d",&rep);
    if(total == rep){
        printf("Correct");
    }else{
        printf("FAUX !");
    }


    return 0;
}