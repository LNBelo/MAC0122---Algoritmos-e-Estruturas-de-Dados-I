# include <stdio.h>

int soma(int A[], int n) {
	
	if (n == 0) return 0;
	
	if (n == 1) {
		return A[0];
	}
	
	int subsoma = soma(A, n-1);
	
	return subsoma + A[n-1];
}

int fatorial(int n) {
	if (n == 1) return 1;

	return n*fatorial(n-1);
}

void main() {
	int A[] = {2,3,5,7,11};
	
	printf("A soma deu %d\n", soma(A,5));
}
