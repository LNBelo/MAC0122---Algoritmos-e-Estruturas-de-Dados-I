#include <stdio.h>
#include <stdlib.h>

void main(){
    //int y;  //alocação estática de memória
    int *x; // alocação dinâmica de meória
    
    x = malloc(sizeof(int));

    if(x){
        printf("Memoria alocada com sucesso!\n");
        printf("%d\n", *x);
        *x = 5;
        printf("%d\n", *x);
    } else {
        printf("Erro ao alocar memoria\n");
    };
}