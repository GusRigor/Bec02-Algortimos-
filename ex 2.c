#include<stdio.h>
int main(){
int *p, vetor[5] = {1,2,3,4,5};
 p = vetor;
while (p < vetor + 5)
    printf("%d ", *p++);
    printf("%d ", vetor);
}
