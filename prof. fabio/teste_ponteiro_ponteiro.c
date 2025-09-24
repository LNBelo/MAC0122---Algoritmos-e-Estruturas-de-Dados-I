# include <stdio.h>
# include <string.h>

typedef struct Pessoa {
	char nome[100];
	int idade;
} Pessoa;

void endereços(Pessoa *x) {
	printf("O endereço de x é %p\n", &x);
	printf("Enquanto o endereço de %s é %p\n",x->nome, x);
}

void main() {
	Pessoa *Fabio;
	strcpy(Fabio->nome,"Fábio");
	Fabio->idade = 26;
	
	endereços(Fabio);
	
	printf("O endereço de %s de verdade é %p\n",Fabio->nome, &Fabio);
}
