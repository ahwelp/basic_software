#include <stdio.h>

/*
Faça uma repetição que conte de 1 a 0xFF, e que imprima somente os números que 
atendam a seguinte condição: são múltiplos de 3 e não são pares, ou que são 
divisíveis por 7 e são maiores que 35.
*/

//https://www.includehelp.com/c/working-with-hexadecimal-values-in-c-programming-language.aspx
void main(){
    
    int i = 0xFF;
    
    for(int i = 0; i <= 0xFF; i++ ){
    
        if( (i % 3) != 0 ){
            continue;
        }
        if( (i%2) == 0){
            continue;
        }
        if( (i % 7) != 0){
            continue;
        }
        if( i < 35){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;

}
