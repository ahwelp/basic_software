/* Crie uma função spaces() que recebe um vetor de caracteres como uma string. 
Essa função deve contar o número de ocorrências de caracteres de espaço (usando a função 
adequada do include ctype) e retornar um valor inteiro com a contagem feita. Teste esta 
função a partir da função main(). */

#include <stdio.h>
#include <ctype.h>

int spaces(char string[]){
    int i, index;
    i = index = 0;
    while(string[i] != '\0'){
        if(isspace( string[i] ) ){ 
            printf("%c", '_');
            index++; 
        }else{
            printf("%c", string[i]); 
        }
        i++;
    }    
    printf("\n");
    return index;
}

int main(){
    char string[] = "This is a character sequence";    
    int value = spaces(string);
    printf("There is %d Spaces in the String\n", value);
}
