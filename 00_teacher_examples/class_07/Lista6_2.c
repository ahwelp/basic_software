/*
Crie um programa que declare e inicialize três variáveis dos tipos char, double e int. Então crie três ponteiros, um para cada tipo. A seguir, inicialize os ponteiros para que apontem para as respectivas variáveis. Finalmente, imprima na tela o valor apontado por cada ponteiro.
*/

#include <stdio.h>

int main (void) {
  char c;
//  char *c = "Programacao Software Basico";
  char *pc = NULL;
  int i;
  int *pi = NULL;
  double d;
  double *pd = NULL;
    
  c = 'A';
  i = 10;
  d = 9.9;
//  pc = c;
  pc = &c;
  pi = &i;
  pd = &d;
  printf ("Valor do ponteiro para char: %c\n", *pc);
//  printf ("Valor do ponteiro para char: %s\n", pc);
  printf ("Valor do ponteiro para int: %d\n", *pi);
  printf ("Valor do ponteiro para double: %g\n", *pd);

  return 0;
}
