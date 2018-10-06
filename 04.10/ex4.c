#include<stdio.h>
#include<stdlib.h>

int OrdCres(int v[], int n)
    int i, aux;
    for(i=0; i < n; i++){
        if(v[i]<=v[i+1]){
            aux=1;
    }else{
        aux=0;
        break;}
return aux;
}


