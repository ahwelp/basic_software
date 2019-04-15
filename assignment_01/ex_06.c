/*
Artur Henrique Welp || 2019-04-15

Questão 6 (1,5 pontos): Crie uma contagem de ocorrência de valores inteiros, de 
0 a 999, agrupados em 10 centenas. Ou seja, contar quantos valores estão no 
intervalo 0-99, quantos estão no intervalo 100-199, e assim por 
diante até 900-999.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;    
    file = fopen("Questao6.txt", "rt");

    if(file == NULL){
        printf("There is no file");
        exit(0);
    }    

    int gs[10];
    int number = 0;
    
    /*Garbege colector*/
    for(int i = 0; i < (sizeof(gs) / sizeof(int)); i++){
        gs[i] = 0;
    }  

    while( fscanf(file, "%d", &number) != EOF ){
        if(number < 0){            
            continue;
        }
        if(number < 99){
            gs[0]++;
            continue;
        }
        if(number < 199){
            gs[1]++;
            continue;
        }
        if(number < 299){
            gs[2]++;
            continue;
        }
        if(number < 399){
            gs[3]++;
            continue;
        }
        if(number < 499){
            gs[4]++;
            continue;
        }
        if(number < 599){
            gs[5]++;
            continue;
        }
        if(number < 699){
            gs[6]++;
            continue;
        }
        if(number < 799){
            gs[7]++;
            continue;
        }
        if(number < 899){
            gs[8]++;
            continue;
        }
        if(number < 999){
            gs[9]++;
            continue;
        }
    }
    
    printf("Numbers distribution:\n");    
    printf("=====================\n");
 
    for(int i = 0; i < (sizeof(gs) / sizeof(int)); i++){        
        printf("%3d -> %3d | %3d\n", ((i*100)), ((i*100)+99), gs[i]);    
    }   

}
