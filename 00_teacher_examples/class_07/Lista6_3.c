/*
Crie uma função spaces() que recebe um vetor de caracteres como uma string. Essa função deve contar o número de ocorrências de caracteres de espaço (usando a função adequada do include ctype) e retornar um valor inteiro com a contagem feita. Teste esta função a partir da função main().
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int spaces (char f []) {
  int i, cont = 0;
  while (f[i] != '\0') {
    if (isspace (f[i])) {
      cont ++;
      printf ("_");
    } else {
      printf ("%c", f[i]);
    }
    i ++;
  }
  return cont;
}

int main (void) {
  char frase [] = "Passagem de string para vetor de char";
  int esp;
  esp = spaces (frase);
  printf ("\nA frase possui %d espaços!\n", esp);

  return 0;
}

