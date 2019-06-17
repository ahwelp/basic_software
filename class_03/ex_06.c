#include <stdio.h>
/*
Escreva uma função input_integer(), que fica repetindo até que seja entrado
 um valor inteiro válido. Teste essa função chamando a mesma a partir da 
 função main(). Sugestão: use como base a função input_double() 
 vista anteriormente.
*/

int input_integer();

void main(){
    printf("%d", input_integer());
    return 0;
}

int input_integer(){
    int i = 0;
    int out = 1;
    while(out){
        printf("\nInsira um numero inteiro: ");
        //Search new way of scanf
        out = !scanf("%d", &i);
    }
    return i;
}
