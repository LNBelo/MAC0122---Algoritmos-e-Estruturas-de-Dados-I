# include <stdio.h>
# define N 100

/* Maus exemplos*/
int BuscaD(int x, int v[], int n), BuscaF(int x, int v[], int n), feio(int x, int v[], int n);

/* Busca */
int Busca(int x, int v[], int n) {
	int k;
	k = n-1;
	while (k >= 0 && v[k]!= x) 
	/*while ((v[k] != x) && (k >= 0)) */
		k -= 1;
	return k;
}

int BuscaR(int x, int v[], int n) {
	if (n == 0) return -1;
	if (x == v[n-1]) return n-1;
	return BuscaR(x,v,n-1);
}

int Remove (int k, int v[], int n) {
	int j;
	for (j = k; j < n-1; j++)
		v[j] = v[j+1];
	return n-1;
}

int RemoveR (int k, int v[], int n) {
	if (k == n-1) return n-1;
	else {
		v[k] = v[k+1];
		return RemoveR(k+1,v,n);
	}
}
	
/* insere y entre as posições k-1 e k do vetor v[0..n-1]*/
int Insere (int k, int y, int v[], int n) {
	int j;
	for (j = n; j > k; j--) {
		v[j] = v[j-1];
	}
	v[k] = y;
	return n+1;
}

int InsereR(int k, int y, int v[], int n) {
	if (k == n) v[n] = y;
	else {
		v[n] = v[n-1];
		InsereR(k, y, v, n-1); 
	}
	return n+1;
}

/* Remove todos os elementos nulos de v[0..n-1]*/
int RemoveZeros (int v[], int n) {
	int i = 0, j;
	for (j = 0; j < n; j++) {
		if (v[j] != 0) {
			v[i] = v[j];
			i += 1;
		}
	}
	return i;
}

void main() {


int v[] = {222,555,111,333,444,666,555,888,777,987,654};	



/*
int x = 9128389;
printf("O elemento %d está na posição %d\n",x,Busca(x,v,11));

printf("O elemento na posição -1 de v é %d\n",v[-1]);
*/
}

/* busca deselegante */
int BuscaD(int x, int v[], int n) {
	int k = n-1, achou = 0;
	while (k >= 0 && achou == 0) {
		if (v[k] == x) achou = 1; /*deselegante*/
		else k -= 1;
	return k;
	}
}

/* busca ineficiente, pois varre o vetor inteiro mesmo tendo encontrado a solução */
int BuscaF(int x, int v[], int n) {
	int k = 0;
	int sol = -1;
	for (k = n-1; k >= 0; k--) {
		if (v[k] == x) sol = k;
	}
	return sol;
}

/* Busca recursiva feia, vocês que pediram, viu? */
int feio (int x, int v[], int n) {
	if (n == 1) {
		if (x == v[0]) return 0; /* deselegante */
		else return -1;			/* deselegante */
	}
	if (x == v[n-1]) return n-1;
	return feio (x,v,n-1);
}
