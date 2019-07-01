/*
Escreva uma função chamada round_double_pointer(), que recebe um ponteiro para double e altera o valor apontado. Essa função deve arredondar um valor fracionário para o inteiro mais próximo. Por exemplo, 2.3 é arredondado para 2.0, 3.7 é arredondado para 4.0, e 6.5 é arredondado para 7.0. Teste a função chamando esta a partir de main(), para os valores citados. Dica: utilize a função floor() da biblioteca matemática.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void round_double_pointer (double *p_num) {
  double d = *(p_num);
  double f = floor(d);

  //parte fracionária de d é obtida calculando d - f, pois f é sempre menor ou igual a d
  printf ("Valor original: %g\n", *p_num);
  if (d - f >= 0.5) { //arredonda para cima
    d = f + 1;
  } else { //arredonda para baixo
    d = f;
  }
  *p_num = d;
}

int main (void) {
  double vet[] = {2.3, 2.0, 3.7, 6.5};
  int t;
  t = sizeof(vet) / sizeof(double);

  for (int i = 0; i < t; i ++) {
    round_double_pointer (&vet[i]);
    printf ("Valor arredondado: %g\n\n", vet[i]);
  }

  return 0;
}
