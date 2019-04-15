/*
Artur Henrique Welp || 2019-04-15

Questão 5 (1,5 pontos): Solicite ao usuário um número inteiro entre 1 e 10 e 
contabilize quantas palavras existem no arquivo de entrada com esta 
quantidade de letras.
*/
#include <stdio.h>

int main(){

    FILE *file;
    file = fopen("Questao5.txt", "rt");

    char buffer[255];

    int number, count, ammount;
    number = count = ammount = 0;    
    
    do{
        printf("Digit a number between 1 - 10: ");
        scanf("%d", &number);
    }while(number < 0 || number > 10);

    while( fgets(buffer, 255, file) ){
        count = 0;
        for(int i = 0; i <= 255; i++){
            if(buffer[i] == '\0'){ break; }
            if(buffer[i] == ' '){ 
                ammount = (count == number) ? ammount+1 : ammount;                
                count = 0;
                continue;
            }
            count++;
        }
    }

    printf("\nThere are %d words with %d letters in the file\n", ammount, number);

}
