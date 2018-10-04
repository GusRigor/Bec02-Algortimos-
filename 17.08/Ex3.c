#include<stdio.h>
void inverte(int v[], int n);
void ler(int v[], int n);

int main(){
    int qtd;
    int Núm[qtd];

    printf("Quantos números, Bro?\n");
    scanf("%d", &qtd);

    ler(Núm, qtd);
    inverte(Núm, qtd);


return 0;
}

void inverte(int v[], int n){
    for(int i=0; i==n; i++){
        int t=0;
        t=v[i];
        v[i]=v[n];
        v[n]=t;

        n--;
    }    
    for(int y; y<n; y++){
        printf(" %d ", v[y]);
    }
}

void ler(int v[], int n){
    for(int k=0; k<10; k++){
        printf("Coloca os N°, Bro:");
        scanf(" %d ",&v[k]);
    }

}
