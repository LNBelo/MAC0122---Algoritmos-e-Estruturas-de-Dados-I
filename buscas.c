#include <stdio.h>

int BuscaLinear(int A[], int n, int x){
    for(int i=0; i < n; i++){
        if(A[i] == x){
            return i;
        }
    }
    return -1;
}

int BuscaBinaria(int A[], int n, int x) {
    int esq = 0;
    int dir = n-1;

    while (esq <= dir) {
        int meio = (esq+dir)/2;
        if (A[meio] == x) return meio;
        else {
            if (x > A[meio]) esq = meio + 1;
            else dir = meio - 1;
        }
    }
    return -1;
}

int main() {
    int A[] = {2,3,5,7,11,13,17,19,23};
    int indice = BuscaBinaria(A, 9, 19);
    printf("%d\n\n", indice);
}