#include<stdio.h>
#include<stdlib.h>

void troca(int *i, int *j);

 void troca(int *i, int *j){
    int *aux;
    *aux = *i;
    *i = *j;
    *j = *i;
 }
 void yyy(int h, int m, int s, int add_seg);

int main(){
    int h, m, s, add_seg, aux;
    h=2;
    m=15;
    s=59;
    add_seg=900;
    printf("%d : %d :%d\n",h,m,s);
    yyy(h, m, s, add_seg);
}
 void yyy(int h, int m, int s, int add_seg){
    int aux;
    aux =(((h*3600)+(m*60)+(s))+add_seg);
    h=aux/3600;
    m=(aux%3600)/60;
    s=(aux%3600)%60;
    printf("%d : %d :%d",h,m,s);
}



