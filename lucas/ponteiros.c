#include <stdio.h>

void main(){
    int var = 15;
    int *ptr; // ponteiro

    ptr = &var;

    printf("conteudo da var = %d\n", var);
    printf("endereco da var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco do ptr           = %p\n", &ptr);

    *ptr = 88;

    printf("\n\n");
    printf("conteudo da var = %d\n", var);
    printf("endereco da var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco do ptr           = %p\n", &ptr);

}