/* 
Questão 3 (1,5 pontos): Consolide os créditos e débitos da conta escolhida 
pelo usuário (representadas pelas letras 'A' até 'E'), indicando o saldo final 
após o processamento de todas as operações listadas, sabendo que o saldo 
inicial da cada conta é zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;    
    file = fopen("Questao3.txt", "rt");

    if(file == NULL){
        printf("There is no file");
        exit(0);
    }
    
    char cont = ' ';
    int Ca, Cb, Cc, Cd, Ce, value;
    Ca = Cb = Cc, Cd = Ce = 0;


    while( fscanf(file, "%c  %d", &cont, &value) != EOF ){
        switch(cont){
            case 'A':
                Ca += value;
            break;
            case 'B':
                Cb += value;
            break;
            case 'C':
                Cc += value;
            break;
            case 'D':
                Cd += value;
            break;
            case 'E':
                Ce += value;
            break;
            default:
            break;
        }
        value = 0;
    }
    
    printf("Count A has $%d monney\n", Ca);
    printf("Count B has $%d monney\n", Cb);
    printf("Count C has $%d monney\n", Cc);
    printf("Count D has $%d monney\n", Cd);
    printf("Count E has $%d monney\n", Ce);

}
