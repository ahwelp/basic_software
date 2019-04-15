/*
Artur Henrique Welp || 2019-04-15

Questão 7 (1,5 pontos): Analise uma lista de palavras de tamanhos 
variados, e identifique a primeira e a última palavra em relação à ordem 
alfabética. Por exemplo, em uma 
lista {"nh", "wa", "ix", "es", "ck"}, a primeira seria "ck", e a 
última "wa".*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *file;
    file = fopen("Questao7.txt", "rt");

    char smaller[255];
    char bigger[255];
    char buffer[255];
    int  first = 1;

    while( fgets(buffer, 255, file) ){               
        if(first){
            memcpy(smaller, buffer , 255);
            memcpy(bigger, buffer,  255);            
            first = 0;
        }
        if(strcmp(buffer, smaller) < 0){   
            memcpy(smaller, buffer , 255);
        }
        if(strcmp(buffer, bigger) > 0){
            memcpy(bigger, buffer,  255); 
        }        
    }

    printf("The bigger string is:\n %s \nAnd the smaller string is\n %s \n", bigger, smaller);
}
