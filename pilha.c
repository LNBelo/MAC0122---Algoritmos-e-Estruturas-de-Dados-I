# include <stdio.h>

typedef char ODP; //Objeto de Dados da Pilha

struct Pilha {
    ODP dados[100]; // char dados [100];
    int tam;
};

void inserir(struct Pilha *P, ODP x){
    // a função recebe um ponteiro *P para uma estrutura do tipo Pilha
    // ODP x é o char a ser inserido na plilha
    P->dados[P->tam] = x;
    P->tam++;
    printf("inseriu %c na pilha\n", x);
};

ODP remover(struct Pilha *P){
    ODP x = P->dados[P->tam-1]; // recebe o segundo item da pilha
    P->tam--;
    return x;
}

void imprimirPilha(struct Pilha *P) {
    for(int i = 0; i < P->tam; i++){ // "(*P).tam" é igual a P->tam
        printf("%c, ", P->dados[i]);
    }
    printf("\n");
}

void main(){
    struct Pilha P;
    P.tam = 0;
    inserir(&P, 'f');
    inserir(&P, 'e');
    inserir(&P, 'r');

    imprimirPilha(&P);

    for (int i = 0; i < 3; i++){
        printf("%c\n", remover(&P));
    }

    imprimirPilha(&P);
}