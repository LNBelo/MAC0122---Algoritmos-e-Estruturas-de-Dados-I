typedef struct {
    char dados[100];
    int tam;
} Pilha;

void inserir(Pilha *P, char x){
    int topo = P->tam; // P->tam é igual a (*P).tam
    P->dados[topo] = x;
    P->tam++;
}

char remover(Pilha *P){
    printf("%d\n", P->tam);
    P->tam--; // Para remover da pilha basta diminuir o seu tamanho
    printf("remover %c\n", P->dados[P->tam]);
}; 

void imprimirPilha(Pilha *P){
    for(int i = 0; i < P->tam; i++){
        printf("%c, ", P->dados[i]);
    };
    printf("\n");
}


int main(){
    Pilha P;
    P.tam = 0;
    inserir(&P, 'a');
    inserir(&P, 'b');
    imprimirPilha(&P);
    remover(&P);
    imprimirPilha(&P);
}