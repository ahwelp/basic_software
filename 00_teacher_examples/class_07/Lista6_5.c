/*
Faça um programa que percorra o seguinte vetor de strings, e que imprima a string mais longa:
char *vs[] = {"jfd", "kj", "usjkfhcs", "nbxh", "yt", "muoi", "x", "rexhd"};
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (void) {
  char *vs[] = {"jfd", "kj", "usjkfhcs", "nbxh", "yt", "muoi", "x", "rexhd"};
  int i, t, maiori, maiort = 0;

  t = sizeof(vs) / sizeof(char*);
  for (i = 0; i < t; i ++) {
    if (strlen(vs[i]) > maiort) {
      maiort = strlen(vs[i]);
      maiori = i;
    }
  }
  printf ("Maior frase: %s\n", vs[maiori]);
  printf ("Tamanho da frase frase: %d\n", maiort);
  return 0;
}
