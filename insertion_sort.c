#include <stdio.h>

void insertion_sort(int A[], int n){
    for(int j = 1; j < n; j++){ // varre o vetor A
        int key = A[j]; // atual
        int i = j - 1; // anterior ao j
        while((i >= 0) && (A[i] > key)){ // indice maior ou igual a 0 && anterior maior que o atual, implica em realizar a troca
            A[i+1] = A[i]; // faz a troca
            i--; // vai para a esquerda
        }
        A[i+1] = key;
    }
}

void print_lista(int A[], int n){
    printf("[");
    for (int i = 0; i < n; i++){
        printf("%d", A[i]);
        if (i < n-1) {printf(", ");}
        else {printf("]\n\n");}
    }
}

int main(){
    int A[] = {3, 7, 28, -10, 1, 0, 900, -500, 23672, 8, 7};
    print_lista(A, 11);
    insertion_sort(A, 11);
    print_lista(A, 11);
}