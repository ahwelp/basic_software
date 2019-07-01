/*
Copie todo o programa anterior, mas altere apenas o tipo do parâmetro da função spaces(), que deve ser agora um ponteiro para caracter, ou seja, char *p_c. É necessário modificar mais alguma coisa nesta função para que ela funcione como anteriormente? Nota: não altere a função main().
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int spaces (char *pf) {
  int i, cont = 0;
  while (pf[i] != '\0') {
    if (isspace (pf[i])) {
      cont ++;
      printf ("_");
    } else {
      printf ("%c", pf[i]);
    }
    i ++;
  }
  return cont;
}

int main (void) {
  char *frase = "Passagem de string para ponteiro char";
  int esp;
  esp = spaces (frase);
  printf ("\nA frase possui %d espaços!\n", esp);

  return 0;
}
