#include <stdio.h>

int soma_recursiva(int A[], int n) {
    if (n == 0) return 0;

    if (n == 1 ) {
        return A[0];
    }

    int subsoma = soma_recursiva(A, n-1);

    return subsoma + A[n-1];
}

int main() {
    int A[] = {2,3,5,7,11};

    printf("A soma deu %d\n", soma_recursiva(A, 5));
}
