#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    printf("Bonjour :) \n\n");

    srand(time(NULL));

    int total = 0, rep;
    int random_number = rand() % 100;

    for(int i=0; i < 10; i++){
        printf("%d \n", random_number);
        total += random_number;
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