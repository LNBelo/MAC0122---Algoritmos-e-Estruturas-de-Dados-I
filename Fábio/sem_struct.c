# include <stdio.h>
# include <string.h>

struct pessoa {
	char nome[20];
	int idade;
	};

void main() {
	
	char nome[20][20];
	int idade[20];
	
	scanf("%s",nome[0]);
	/*
	strcpy(nome[0],"fabio");
	*/
	idade[0] = 26;
	
	strcpy(nome[1],"lucas lucas");
	idade[1] = 49;
	
	for (int i = 0; i < 2; i++){
	printf("%s tem %d anos\n",nome[i],idade[i]);
	}
}
