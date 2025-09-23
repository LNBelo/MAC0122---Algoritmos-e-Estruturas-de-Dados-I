# include <stdio.h>

typedef struct Pessoa {
	char nome[100];
	int idade;
} Pessoa;

void aniversario(Pessoa *x) {
	x->idade++;
	printf("Parabéns pelo seu aniversário, %s\n",x->nome);
	printf("Agora você tem %d anos\n\n",x->idade);
}

void troca_valores(int *x, int *y) {
	int aux = *x;
	*x = *y;
	*y = aux;
	
	return;
}

void main() {

Pessoa fabio = {"Fábio", 25};

printf("A idade de %s é %d\n",fabio.nome, fabio.idade);

aniversario(&fabio);

printf("Agora a idade de %s é %d\n",fabio.nome, fabio.idade);
/*
int a = 10;
int b = 35;

printf("a = %d e b = %d\n",a,b);
troca_valores(&a,&b);	
printf("a = %d e b = %d\n",a,b);
*/

/*
printf("O endereço de a é %p\n",&a);
printf("O valor de a é %d\n",*&a);
*/
}
