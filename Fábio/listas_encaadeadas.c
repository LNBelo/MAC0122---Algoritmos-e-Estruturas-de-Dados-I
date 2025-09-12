# include <stdio.h>
# include <stdlib.h>

struct cel {
	int conteudo;
	struct cel *seg;
};

typedef struct cel Celula;

Celula *adiciona_celula_LE(Celula *LE, int y) {
	Celula *nova_celula;
	nova_celula = malloc(sizeof(Celula));
	nova_celula->conteudo = y;
	nova_celula->seg = LE;
	return nova_celula;
}

Celula *cria_LE(int v[], int n) {
	Celula *LE;
	LE = NULL;
	for (int i = n-1; i >= 0; i--) {
		LE = adiciona_celula_LE(LE,v[i]);
	}
	return LE;
}

void imprime_LE(Celula *LE) {
	Celula *p;
	for (p = LE; p != NULL; p = p->seg)
		printf("%d\n",p->conteudo);
}

///////////////// Listas encadeadas com cabeça

void adiciona_celula_LE_CC(Celula *LE, int y) {
	Celula *nova_celula;
	nova_celula = malloc(sizeof(Celula));
	nova_celula->conteudo = y;
	
	nova_celula->seg = LE->seg;
	LE->seg = nova_celula;
}

Celula *cria_LE_CC(int v[], int n) {
	Celula *LE;
	LE = malloc(sizeof(Celula));
	LE->seg = NULL;
	for (int i = n-1; i >= 0; i--) {
		adiciona_celula_LE_CC(LE,v[i]);
	}
	return LE;
}

void imprime_LE_CC(Celula *LE) {
	Celula *p;
	for (p = LE->seg; p != NULL; p = p->seg)
		printf("%d\n",p->conteudo);
}

///// funções importantes

/*
	Esta função recebe um inteiro x e uma lista encadeada lst com cabeça.
	Devolve o endeço de uma célula que contém x 
	ou devolve NULL se tal célula não existe
*/
Celula *Busca_LE(int x, Celula *lst) {
	Celula *p;
	p = lst->seg;
	while (p != NULL && p->conteudo != x)
		p = p->seg;
	return p;
}

Celula *Busca_LE_R(int x, Celula *lst) {
	if (lst->seg == NULL || lst->seg->conteudo == x)
		return lst->seg;
	return Busca_LE_R(x,lst->seg);
}

void Remove(Celula *p) {
	Celula *lixo;
	lixo = p->seg;
	p->seg = lixo->seg;
	free(lixo);
}

void BuscaERemove(int x, Celula *lst) {
	Celula *p, *q;
	p = lst;
	q = lst->seg;
	while (q != NULL && q->conteudo != x) {
		p = q;
		q = q->seg;
	}
	if (q != NULL) {
		p->seg = q->seg;
		free(q);
	}
}

void main() {

	int v[] = {2,3,5,7,11,13,17,19,23,29};
	Celula *LE = cria_LE_CC(v,10);
	//imprime_LE_CC(LE);	
	//Celula *p = Busca_LE_R(13,LE);
	//printf("O conteúdo dessa célula é %d\n",p->conteudo);
	//Remove(p);
	BuscaERemove(17,LE);
	imprime_LE_CC(LE);
}
