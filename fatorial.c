#include <stdio.h>

int fatorial(int n){
    int resultado = 1;
    for (int i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

int fatorialRecursivo(int n){ //Iterativo
    if (n == 0) return 1;
    int resultado = n * fatorialRecursivo(n - 1);
    return resultado;
}


int main(){
    for(int n = 0; n <= 5; n++){
        int resultado = fatorialRecursivo(n);
        printf("%d! = %d\n", n, resultado);
    }
}
