#include <stdio.h>
#include <stdlib.h>

int main(){
    int p[] = {2, 10, 13};
    int *t;
    int j = 1;
    t = p + j; // é p[j]
    printf("%d\n", *t);
}
