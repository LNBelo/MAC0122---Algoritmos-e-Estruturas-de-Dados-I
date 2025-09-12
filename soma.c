#include <stdio.h>

int somatorio(int A[], int n) {
    int soma = 0;

    for (int i = 0; i < n;  i++){
        soma = soma + A[i]; 
    }

    return soma;
}

int main(){
    int A[] = {2,3,5,7,11};

    printf("A soma deu %d\n", somatorio(A, 5));
}