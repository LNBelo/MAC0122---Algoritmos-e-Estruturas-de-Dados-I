# include <stdio.h>

int soma_vetor(int n, int v[]) {
	
	printf("O endereço de v é %p\n\n",v);
	
	int soma = 0;
	
	for (int i = 0; i < n; i++) {
		soma = soma + v[i];		
	}
	
	return soma;
 }
 
 void altera_vetor(int v[],int pos, int valor) {
 	v[pos] = valor;
 }

void main() {
 int meu_vetor[] = {2,3,5,7,11,13};
 
 int minha_soma = soma_vetor(6,meu_vetor);
 
 printf("Minha soma deu %d\n", minha_soma);
 
 altera_vetor(meu_vetor,0,17);
 
 for (int i = 0; i < 6; i++) {
 	printf("%d ,", meu_vetor[i]);
 }
 printf("\n");
 
altera_vetor(meu_vetor,1,19);
 
 for (int i = 0; i < 6; i++) {
 	printf("%d ,", meu_vetor[i]);
 } 
  printf("\n");
/* 
 printf("O endereço do meu vetor é %p\n\n",meu_vetor);
 
 for (int i = 0; i < 6; i++) {
 	printf("O endereço do %d-ésimo elemento do meu vetor é %p\n",i, &meu_vetor[i]);
 }
*/
 
}
