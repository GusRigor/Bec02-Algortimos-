#include<stdio.h>
#include<stdlib.h>

int Invert_Vet(int A[], int n){
    int i, j, troca;

    for(i=0; i < n-1; ++i){
        for(j=(i+1); j < n; ++j){
            if(A[i] < A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
