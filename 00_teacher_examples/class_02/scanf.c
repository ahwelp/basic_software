#include <stdio.h>

int main(void)
{
    int i, r;
    printf("entre com um valor inteiro: ");
    r = scanf("%d", &i);

    if (r == 1) {
      printf("i = %d\n", i);
    }
    else {
      printf("scanf falhou!\n");
    }

    return 0;
}
