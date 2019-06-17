#include <stdio.h>
/*
Crie uma função chamada fatorial, que recebe um valor inteiro n e 
retorna outro valor inteiro. Se n for menor ou igual a 1, deve retornar 1, 
caso contrário deve retornar n * fatorial(n-1). Calcule a partir de main() a 
fatorial de 5, que deve ser 120.
*/

int fatorial(int i);

void main(){
    printf("%d\n", fatorial(5));
    return 0;
}

int fatorial(int i){
    return ( i == 1) ? i*1 : i*fatorial(i-1);
}
