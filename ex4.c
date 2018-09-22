int CrtlF(char p[], char f[]){
    int n;
    char *x, *y;

    x=p;
    y=f;

    for(*x=*y; y!='\x0'; y++){
        if(*x==*y)
        n++;
    }
    return n;
}
