/*
Faça um programa que imprima o tamanho de diversas variáveis do tipo ponteiro 
(ponteiro para caracter, ponteiro para inteiro e ponteiro para double), utilizando 
o operador sizeof().
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    int   *point_int   = NULL;
    char  *point_char  = NULL;
    float *point_foat  = NULL;

    printf("Sizeof int %ld \n", sizeof(point_int) );
    printf("Sizeof char %ld \n", sizeof(point_char) );
    printf("Sizeof float %ld \n", sizeof(point_char) );

}
