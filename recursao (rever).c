#include <stdio.h>

int fast_fibonacci(int n){
    // cada número é a soma dos dois anteriores, começando com 0 e 1
    if (n <= 1) return n;
    
    int penultimo = 0;
    int ultimo = 1;
    int proximo;
    for(int i = 1; i < n; i++){
        proximo = penultimo + ultimo;
        penultimo = ultimo;
        ultimo = proximo;
    }
    return proximo;
}

int fibonacci(int n){
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

void main() {
    int n = 5;
     printf("O %d numero de Fibonacci eh %d\n", n, fibonacci(n));
}