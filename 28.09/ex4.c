#include <stdio.h>
void Matriz(int n);
void Matriz(int n){
int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i==j){
                matriz[i][j]={3};
            } else if(i<j){
                matriz[i][j]={2};
            }else{
                matriz[i][j]={1};
            }
        }
    }
}
