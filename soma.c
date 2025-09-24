#include <stdio.h>

int somatorio(int A[], int n) {
    int soma = 0;
    for (int i = 0; i < n;  i++){
        soma = soma + A[i]; 
    }
    return soma;
}

int somaRecursiva(int A[], int n){
    if (n == 0) return 0;
    if (n == 1) {
        return A[0];
    }
    int subsoma = somaRecursiva(A, n-1);
    return subsoma + A[n-1];
}

int fatoriaRecursivo(int n){
    if(n == 1) return 1;
    int fatorial = n * fatoriaRecursivo(n-1);
    return fatorial;
}

int main(){
    int A[] = {2,3,5,7,11};
    int n = 3;
    printf("A soma deu %d\n", somaRecursiva(A, 5));
    printf("%d! = %d\n", n, fatoriaRecursivo(n));
}