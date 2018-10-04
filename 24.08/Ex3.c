#include<stdio.h>

void Ler(int v[], int n);
void intersec(int A[], int B[], int m, int n);

int main(){
    int A[5];
    int B[4];
    
    Ler(A, 5);
    Ler(B, 4);
    intersec(A, B, 5, 4);
 return 0;   
}

void Ler(int v[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}

void intersec(int A[], int B[],int m, int n){
    for(int i=0; i<m; i++){
            
        for(int j=0; j< n; j++){
            
            if(A[i]==B[j])
                printf("%d ", A[i]);
        
    }
}
}
