typedef struct {
    int dados[100];
    int tam;
} Pilha;

void inserir(Pilha *P, int x){
    int topo = P->tam; // P->tam é igual a (*P).tam
    P->dados[topo] = x;
    P->tam++;
}

int remover(Pilha *P){
    printf("%d\n", P->tam);
    P->tam--; // Para remover da pilha basta diminuir o seu tamanho
    printf("remover %d\n", P->dados[P->tam]);
}; 

void imprimirPilha(Pilha *P){
    for(int i = 0; i < P->tam; i++){
        printf("%d, ", P->dados[i]);
    };
    printf("\n");
}


int main(){
    Pilha P;
    P.tam = 0;
    inserir(&P, 8);
    inserir(&P, 12);
    inserir(&P, 6);
    inserir(&P, 7);
    imprimirPilha(&P);
    remover(&P);
    remover(&P);
    imprimirPilha(&P);
}