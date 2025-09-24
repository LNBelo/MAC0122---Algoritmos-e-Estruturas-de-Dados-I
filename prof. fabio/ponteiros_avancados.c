# include <stdio.h>

typedef struct  {
	char nome[20];
	int (*f)(int,int);
}funcao_de_lucas;

int id(int x) {
	return x;
}

int quadrado(int x) {
	return x*x;
	}
	
int soma(int a, int b) {
	return a+b;
}

int multiplicacao(int a, int b) {
	return a*b;
}
	
void print_matriz_funcao(int lin, int col, int M[lin][col],int (*f)(int)) {
	for (int i = 0; i < lin; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\t",(*f)(M[i][j]));
		}
		printf("\n");
	}
}

void funcao_da_luana(int *index) {
	*index = *index+5;
}

void funcao_da_luana2(int *index) {
	*index = *index*5;
}

void main() {

int index = 0;
void (*(vetor_funcoes[]))(int*) = {&funcao_da_luana,&funcao_da_luana2};

printf("%d\n",index);
for (int i = 0; i < 2; i++){
	(*(vetor_funcoes[i]))(&index);
	printf("%d\n",index);
}


/*
funcao_de_lucas minha_soma = {"soma",&soma};
funcao_de_lucas minha_multiplicacao = {"multiplicação",&multiplicacao};

funcao_de_lucas funcoes[] = {minha_soma,minha_multiplicacao};


int (*(f[]))(int,int) = {&soma,&multiplicacao};


int a = 3;
int b = 10;

for (int i = 0; i < 2; i++) {
	printf("A %s de %d com %d dá %d\n",funcoes[i].nome,a,b,
			(*(funcoes[i].f))(a,b));
}
*/

/*
int lin = 3;
int col = 5;
int minha_matriz[lin][col];

for (int i = 0; i < lin; i++) {
	for (int j = 0; j < col; j++) {
		minha_matriz[i][j] = i*j;
	}
}

print_matriz_funcao(lin,col,minha_matriz,&id);
printf("\n");
print_matriz_funcao(lin,col,minha_matriz,&quadrado);
*/
}
