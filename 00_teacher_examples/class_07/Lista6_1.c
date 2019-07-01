/*
Faça um programa que imprima o tamanho de diversas variáveis do tipo ponteiro (ponteiro para caracter, ponteiro para inteiro e ponteiro para double), utilizando o operador sizeof().
*/

#include <stdio.h>

int main (void) {
  char *pc = NULL;
  int *pi = NULL;
  double *pd = NULL;
    
  printf ("Tamanho do ponteiro para char: %ld\n", sizeof (pc));
  printf ("Tamanho do ponteiro para inteiro: %ld\n", sizeof (pi));
  printf ("Tamanho do ponteiro para double: %ld\n", sizeof (pd));

  return 0;
}
