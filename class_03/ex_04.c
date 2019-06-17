#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
    gcc ex_04.c -o file.exe -lm
Escreva uma repetição que calcule as potências de 0 a 100 do valor 1.4,
 imprimindo o valor resultante com as seguintes opções de formatação de 
 valores double: %f, %e e %g. Sugestão: imprima os três formatos em uma mesma 
 chamada de printf().
*/

void main(){
    srand(time(NULL));
    double power = 0;
    float base = 1.4f;
    for(int i = 0; i <= 100; i++){
        power = pow(base, i);
        printf("%f -- %e -- %g\n", power, power, power);
    }
    return 0;
}
