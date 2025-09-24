# include <stdio.h>

int soma_vetor(int n, int v[]) {
    printf("O endereco de v eh %p\n\n", v);

    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += v[i];
    }
    return soma;
}

void altera_vetor(int v[], int pos, int valor){
    v[pos] = valor;
}

int main() {
    int meu_vetor[] = {2, 3, 5, 7, 11, 13};

    int minha_soma = soma_vetor(6, meu_vetor);

    printf("Minha soma deu %d\n", minha_soma);

    altera_vetor(meu_vetor, 0, 17);
    for (int i = 0; i < 6; i++){
        printf("%d ,", meu_vetor[i]);
    }
   printf("\n");

    altera_vetor(meu_vetor, 1, 19);
    for (int i = 0; i < 6; i++){
        printf("%d ,", meu_vetor[i]);
    }
    printf("\n");

    printf("O endereco do meu vetor eh %p\n\n", meu_vetor);
    printf("O endereco do meu vetor eh %p\n\n", &meu_vetor);

    for(int i = 0; i < 6; i++){
        printf("O endereco do %d-ehsimo elemento do meu vetor eh %p\n\n",i, &meu_vetor[i]);
    }

}