#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char s[100];
  printf("Digite uma string: ");
  if (fgets(s, 100, stdin) == NULL) {
    printf("fgets falhou!\n");
    exit(0);
  }
  int n = strlen(s);
  int i, alpha = 0;
  for (i = 0; i < n; i++) {
    if (isalpha(s[i])) {
      alpha++;
    }
  }
  printf("alpha=%d\n", alpha);
    
  return 0;
}

