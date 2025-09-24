# include <stdio.h>

int max(int v[],int n){
	if (n == 1) {
		return v[0];
	}
	int submaximo = max(v,n-1);
	if (v[n-1] > submaximo) return v[n-1];
	else return submaximo;
}

int busca(int v[], int n, int x) {
	if (n == 0) return -1;
	if (v[n-1] == x) return n-1;
	else return busca(v,n-1,x);
}

int fibonacci(int n) {
	if (n <= 1) return n;
	return fibonacci(n-1) + fibonacci(n-2);
}

int fast_fibonacci(int n) {
	if (n <= 1) return n;
	
	int penultimo = 0;
	int ultimo = 1;
	int proximo;
	for (int i = 1; i < n; i++) {
		proximo = penultimo + ultimo;
		penultimo = ultimo;
		ultimo = proximo;
	}
	return proximo;
}	

void main() {
	
	int n = 45;
	
	printf("O %d número de Fibonacci é %d\n",n,fast_fibonacci(n));
	
	/*
	int numeros[] = {2,3,5,7,-13,17,31};
	
	
	printf("O máximo dessa lista é %d\n",max(numeros,7));
	
	int x = 7;
	printf("O número %d está na posição %d\n",x,busca(numeros,7,x));
	*/
	
}
