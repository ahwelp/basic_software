/* Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço. */

#include <stdio.h>
#include <stdlib.h>

void main () {
  int num1, num2;
  if (&num1 > &num2) {
    printf("Endereço da primeira variável: %p\n", &num1);
  } else {
    printf("Endereço da segunda variável: %p\n", &num2);
  }
}
