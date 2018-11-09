#include<stdio.h>
#include<stdlib.h>

int pao( int n );

int main(){
    int N, valor;
    int i;
    
    for(i=0; i<6; i++){
      scanf("%d", &N);
      valor = pao(N);
      printf("Passos= %d \n", valor);
    }
}

int pao( int n ) {
 int S = 0;
  for(int i = 0; i < n; i++)
    for(int j = 1; j <= n; j = j * 2)
      S = S + 1;// passos

return S;
 }
