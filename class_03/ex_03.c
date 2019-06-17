#include <stdio.h>

/*
Faça um laço da variável c que conte os valores inteiros de -10 a 10. Então 
teste este valor diretamente em uma estrutura if, imprimindo "true" se for 
verdade ou "false" se for falso. Ou seja, escreva if (c) { ... } else { ... }.
*/

void main(){
    for(int i = -10; i <= 10; i++){
        if(i){
            printf("True\n");
        }else{
            printf("False\n");
        }
    }
    return 0;
}
