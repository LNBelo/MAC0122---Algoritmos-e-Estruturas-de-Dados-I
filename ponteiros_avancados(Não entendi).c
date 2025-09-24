#include <stdio.h>

// Não entendi 
void funcao_da_luana(int *index){
    *index = *index + 5;
}

void funcao_da_luana2(int *index){
    *index = *index*5;    
}

void main(){
    int index = 0;
    void (*(vetor_funcoes[]))(int*) = {&funcao_da_luana, &funcao_da_luana2};

    printf("%d\n", index);
    for (int i = 0; i < 2; i++){
        (*(vetor_funcoes[i]))(&index);
        printf("%d\n", index);
    }
}
