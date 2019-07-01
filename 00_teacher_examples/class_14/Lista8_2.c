/* Crie um programa que leia números reais em um vetor de tamanho 10. Imprima o endereço de cada posição desse vetor. */

#include <stdio.h>
#include <stdlib.h>

void main () {
  float vetNum[10];
  int i;
  for (i=0; i<10; i++) {
    printf("Endereço da posição %d: %p\n", i+1, &vetNum[i]);
  }
}
