# include <stdio.h>
# define N 100

int Busca(int x, int v[], int n){
    for(int i = 0; i < n; i++){
        if(x == v[i]){
            return i;
        }
    }
    return -1;
}

int BuscaR(int x, int v[], int n){
    if(n == 0) return -1;
    if(x == v[n-1]) return n-1;
    return BuscaR(x, v, n-1);
}

void main() {
    int v[] = {222,555,111,333,444,666,555,888,777,987,654};

    int x = 444;
    printf("O elemento %d esta na posicao %d\n", x, Busca(x, v, 11));
}