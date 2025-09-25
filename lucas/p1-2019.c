#include <stdio.h>
#include <stdlib.h>

// Q1
int main(){
    int i, n = 10, j = 7, k = 5, m = 6, a = 2;
    int *p, *t;
    int **s;
    p = (int *)(malloc(sizeof(int)*n));
    for(i = 0; i < n; i++)
        p[i] = i+1;
    t = &a;
    printf("%d\n", *t);
    t = p + j;
    printf("%d\n", *t);
    t = &(p[4]);
    printf("%d\n", t[k]);
    s = &t;
    *s = p + m;
    printf("%d\n", *t);
    return 0;
}