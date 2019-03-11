#include <stdio.h>

int max(int v1, int v2, int v3, int v4){
    int maior = v1;
    maior = (v2 > maior) ? v2 : maior;
    maior = (v3 > maior) ? v3 : maior;
    maior = (v4 > maior) ? v4 : maior;

    printf("%d\n", maior);
}

void main(){
    max(10, 50, 20, 1);
}
