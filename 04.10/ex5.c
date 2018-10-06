#include<stdio.h>
#include<stdlib.h>

int OrdCres(int v[][], int n)
    int i, j, aux;
    for(i=0; i < n; i++){
        for(j=0; j<n; j++)
            if(v[i][j]==v[j][i]){
                aux=1;
            }else{
                aux=0;
                break;}
return aux;
}
