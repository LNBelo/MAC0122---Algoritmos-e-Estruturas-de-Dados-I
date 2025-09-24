#include <stdio.h>

struct Complexo {
    int real;
    int img;
};

void print_complex(struct Complexo x){
    printf("O numero complexo eh %d + %d i", x.real, x.img);
};

struct Complexo soma_complexos(struct Complexo x, struct Complexo y){
    struct Complexo z;
    z.real = x.real + y.real;
    z.img = x.img + y.img;
    return z;
};

int main() {
    struct Complexo x;
    x.real = 3;
    x.img = 12;

    struct Complexo y = {4, 7};

    print_complex(soma_complexos(x,y));
    printf("\n");
}