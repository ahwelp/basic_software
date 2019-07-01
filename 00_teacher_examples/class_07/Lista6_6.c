/*
Escreva uma função chamada limits(), que recebe quatro parâmetros: um vetor de inteiros, o tamanho deste vetor, um ponteiro p_min para inteiro e um ponteiro p_max para inteiro. Essa função retorna void, e deve encontrar o menor e o maior elemento do vetor passado, e armazená-los em p_min e p_max, respectivamente. Teste esta função chamando ela a partir de main()
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void limits (int v[], int t, int *p_min, int *p_max) {
  for (int i = 0; i < t; i ++) {
    if (v[i] < *p_min) {
      *p_min = v[i];
    }
    if (v[i] > *p_max) {
      *p_max = v[i];
    }
  }
}

int main (void) {
  int vet[] = {1, 3, 5, 99, 9, 2, -4, 6, 8};
  int tam = sizeof(vet) / sizeof(int);
  int max, min;
  max = min = vet[0];
  limits (vet, tam, &min, &max);

  printf ("Menor elemento do vetor: %d\n", min);
  printf ("Maior elemento do vetor: %d\n", max);

  return 0;
}
