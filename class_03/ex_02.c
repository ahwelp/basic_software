#include <stdio.h>

/*
Crie uma variável x do tipo char que seja inicializada com o caracter 'A'. 
Então faça um laço que repita 26 vezes. A cada passo imprima a variável 
usando o formato %c e incremente ela com o operador ++ (ou seja, fazendo x++).
*/

void main(){
    char x = 'A';
    
    for(int i = 0; i < 26; i++){
        printf("%c\n", x);
        x++;
    }
    return 0;
}
