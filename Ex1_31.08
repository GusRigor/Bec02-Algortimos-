#include <stdio.h>

int tamanho_string(char s[]);
int main(){
    char frase[50];
    int i=0;

    printf("digite uma frase:\n");
    fgets(frase, 50, stdin);
    printf("%s", frase);

    i = tamanho_string(frase);
    printf("%d", i);
}

int tamanho_string(char s[]){
    int i;
    for(i=0; s[i] != '\0'; i++);

    return i-1;
}
