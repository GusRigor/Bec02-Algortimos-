#include <stdio.h>
void Matriz(int l, int c);

void Matriz(int l, int c){
int i, j;
int soma=0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]%2==0){
              soma+=matriz[i][j];
            }


        }
    }
    printf("Soma dos valores pares de C: %d", soma);
}

