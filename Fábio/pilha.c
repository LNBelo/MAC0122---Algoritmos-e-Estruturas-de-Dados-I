# include <stdio.h>

typedef char ODP;

struct Pilha {
	ODP dados[100];
	int tam;
};

void inserir(struct Pilha *P, ODP x) {
	P->dados[P->tam] = x;
	P->tam++;
	printf("inseriu %s na pilha\n",x);
}

ODP remover(struct Pilha *P) {
	ODP x = P->dados[P->tam - 1];
	P->tam--;
	return x;
}

void main() {
	struct Pilha P;
	P.tam = 0;
	inserir(&P,"f");
	inserir(&P,"e");
	inserir(&P,"r");
	
	for (int i = 0; i < 3; i++){
		printf("%s\n",remover(&P));
	}
	
}
