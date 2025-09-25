# include <stdio.h>
# include <stdlib.h>

struct cel {
    int conteudo;
    struct cel *seg;
};

typedef struct cel Celula;

///////////////// Listas encadeadas com cabeça

void adiciona_celula_LE_CC(Celula *LE, int y){
    Celula *nova_celula;
    nova_celula = malloc(sizeof(Celula));
    nova_celula->conteudo = y;

    nova_celula->seg = LE->seg;
    LE->seg = nova_celula;
}

Celula *cria_LE_CC(int v[], int n){
    Celula *LE;
    LE = malloc(sizeof(Celula));
    LE->seg = NULL;
    for (int i = n-1; i >= 0; i--) {
        adiciona_celula_LE_CC(LE, v[i]);
    }
    return LE;
}

void imprime_LE_CC(Celula *LE){
    Celula *p;
    for (p = LE->seg; p != NULL; p = p->seg){
        printf("%d\n", p -> conteudo);
    };
}

void BuscaERemove(int x, Celula *lst){}



int main() {
    int v [] = {2,3,5,7,11,13,17,19,23,29};
    Celula *LE = cria_LE_CC(v, 10);
    BuscaERemove(17, LE);
    imprime_LE_CC(LE);
}