#include<stdio.h>

int main(){

char *frases[3] = {
 "Jo�o e o p� de feij�o",
 "O rato roeu a roupa do rei",
 "Minha terra tem palmeiras onde canta o sabi�"
};
printf("%s\n", frases[0]);
printf("%s\n", frases[1]);
printf("%s\n", frases[2]);
printf("%c\n", *(frases[0] + 2));
printf("%c\n", frases[2][3]);
}
