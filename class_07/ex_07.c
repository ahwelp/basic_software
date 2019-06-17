/*
Escreva uma função chamada round_double_pointer(), que recebe um ponteiro para double e 
altera o valor apontado. Essa função deve arredondar um valor fracionário para o 
inteiro mais próximo. Por exemplo, 2.3 é arredondado para 2.0, 3.7 é arredondado 
para 4.0, e 6.5 é arredondado para 7.0. Teste a função chamando esta a partir 
de main(), para os valores citados. 
Dica: utilize a função floor() da biblioteca matemática.
*/

#include <stdio.h>
#include <math.h>

void round_double_pointer(double *value){    
    *value = ( floor(*value)+0.5 >= *value ) ? floor(*value) : floor(*value)+1;
}

int main(){

    double db = {45.4, 75.9, 4.5, 40.0, 98.1};

    for(int i = 0; i < sizeof(db) / sizeof(double); i++){
        round_double_pointer( &db[i] );
        printf("%d", (int)db[i]);
    }
}
