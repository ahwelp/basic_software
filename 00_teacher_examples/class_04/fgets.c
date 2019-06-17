#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char s[100];
  if (fgets(s, 100, stdin) == NULL) {
    printf("fgets falhou!\n");
    exit(0);
  }

  s[strlen(s) - 1] = '\0'; // elimina último caracter (quebra de linha)
  int n = strlen(s);
  printf("s=%s\n", s);
  printf("n=%d\n", n);
    
  return 0;
}

