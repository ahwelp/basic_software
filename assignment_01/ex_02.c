/*
Artur Henrique Welp || 2019-04-15

Questão 2 (1,5 pontos): Conte o número de ocorrências que NÃO envolvam nenhum 
par de bases nitrogenadas, compostos por duas letras iguais do 
conjunto 'a', 'c', 'g' e 't'.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("Questao2.txt", "rt");
    ssize_t read;
    size_t len = 0;

    if(file == NULL){
        printf("There is no file");
        exit(0);
    }

    char * chain = NULL;    
    int pure, line, purecount;
    pure == line == 1;
    purecount = 0;

    while ((read = getline(&chain, &len, file)) != -1) {       
        chain[strlen(chain)-1] = '\0';
        if( strstr(chain, "aa") != NULL ){
            pure = 0;
        }
        if( strstr(chain, "cc") != NULL ){
            pure = 0;
        }
        if( strstr(chain, "gg") != NULL ){
            pure = 0;
        }
        if( strstr(chain, "tt") != NULL ){
            pure = 0;
        }        
        if(pure == 1){
            purecount++;
            printf("The chain --%s-- in line %d Is pure\n", chain, line);
        }else{
            printf("The chain --%s-- in line %d Is IN pure\n", chain, line);
        }
        pure = 1;
        line++;       
    }
    
    printf("==============\n There are %d pure samples in the dataset.\n", purecount);

}
