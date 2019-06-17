/*
Artur Henrique Welp || 2019-04-15

Questão 4 (1,5 pontos): Analise uma sequência crescente de números inteiros e 
positivos, identificando os valores ausentes do maior intervalo contínuo de 
números que estejam faltando.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){    
    FILE *file;    
    file = fopen("Questao4.txt", "rt");

    if(file == NULL){
        printf("There is no file");
        exit(0);
    }

    int atval, lastval, bigval, smallval, intval;
    atval = lastval = bigval = smallval = intval = 0;    
    
    while( fscanf(file, "%d", &atval) != EOF ){
        if( (atval - lastval) > intval){ 
            intval = atval - lastval;
            smallval = lastval;
            bigval = atval;
        }
        lastval = atval;
    }
    printf("The bigger interval is between %d and %d with %d of diference And the numbers are:\n", smallval, bigval, (bigval-smallval) );
    for(int i = smallval; i < bigval; i++){
        printf("%d, ", i);
    }
    printf("\n");

}
