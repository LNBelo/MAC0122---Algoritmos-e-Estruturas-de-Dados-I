#include <stdio.h>

struct Fila {
    int dados[10];
    int tam;
};

void imprimirFila(struct Fila *F){
    for(int i = 0; i < F->tam; i++){
        printf("%d ,", F->dados[i]);
    }
};

void inserir(struct Fila *F, int x){
    F->dados[F->tam] = x;
    F->tam++;
}

void remover(){}

void main(){
    struct Fila F;
    F.tam = 0;
    inserir(&F, 0);
    inserir(&F, 1);
    imprimirFila(&F);
}