/*
Questão 5 (1,5 pontos): Solicite ao usuário um número inteiro entre 1 e 10 e 
contabilize quantas palavras existem no arquivo de entrada com esta 
quantidade de letras.
*/
#include <stdio.h>

int main(){
    
    int number = 0;
    
    do{
        printf("Digit a number between 1 - 10: ");
        scanf("%d", &number);
    }while(number < 0 || number > 10);

}
