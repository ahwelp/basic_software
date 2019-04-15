/*
Artur Henrique Welp || 2019-04-15

Questão 1 (1,5 pontos): Para cada coluna da entrada, apresente o maior e o 
menor intervalo encontrado, identificando também os respectivos valores.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    FILE *file;
    
    file = fopen("Questao1.txt", "rt");
    int linenumber = 1;    
    double q1, q2, q3, q4, intv1, intv2, bigintval;
    q1 = q2 = q3 = q4 = intv1 = intv2 = -0;

    if(file == NULL){
        printf("There is no file");
        exit(0);
    }
    
    while( fscanf(file, "%lf %lf %lf %lf", &q1, &q2, &q3, &q4) != EOF ){
        intv1 = q1 - q2;
        intv1 = (intv1 < 0) ? intv1*-1 : intv1;
        intv2 = q2 - q3;
        intv2 = (intv2 < 0) ? intv2*-1 : intv2;

        if(intv1 > intv2){
            printf("The the bigger interval on line %d, is the first with %lf of diference. And the values are %lf %lf\n", linenumber, intv1, q1, q2  );
        }else{
            printf("The the bigger interval on line %d, is the second with %lf of diference. And the values are %lf %lf\n", linenumber, intv2, q3, q4 );
        }

        linenumber++;
        q1 = q2 = q3 = q4 = intv1 = intv2 = -0;        
    }

}
