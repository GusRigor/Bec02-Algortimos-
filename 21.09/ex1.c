#include<stdio.h>
int main(){
int *p, vetor[5] = {1,2,3,4,5};
    p = (vetor+2);
    (*p)++;
    printf("%d\n", *p);
    printf("%d\n", p[0]);
    printf("%d\n", p[-1]);
    printf("%d\n", p[-2]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);
}
