#include <stdio.h>

void comparar(char s[], char s1[]);
int main(){
    char Primeira[100];
    char Segunda[100];

    printf("Digite algo a ser comprado, Bro\n");
    fgets(Primeira, 100, stdin);

    printf("Digite o que você vai comparar, Bro");
    fgets(Segunda, 100, stdin);

    comparar(Primeira, Segunda);
}

void comparar(char s[], char s1[]){
    int i=0;
    int n=0;
   
    for(i; s[i] != '\0'; i++);
    for(n; s1[n] != '\0'; n++);

    if(i<n)
    printf("-1");

    if(i==n)
    printf("0");

    if(i>n)
    printf("1");
}
