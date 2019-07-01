/* Escreva uma função input_string(), sem parâmetros, que fica repetindo até que seja entrada pelo usuário uma string com tamanho maior que zero. A string lida deve ser copiada em uma área de memória alocada dinamicamente, e então devolvida como valor de retorno (do tipo char *). Teste essa função chamando a mesma a partir da função main(). Sugestão: use como base a função input_double() vista anteriormente. */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *input_string() {
    char str[200]; //cria vetor temporário de caracteres
    while (1) {
        printf("input string: ");
        if (fgets(str, 200, stdin) == NULL) {
            printf("error reading string");
            exit(1);
        }
        if (strlen(str)-1 > 0) { //desconta ENTER no final da linha lida
            break;
        }
    }

    int n = strlen(str);
//  char *pc = malloc((n - 1 + 1) * sizeof(char)); //string - ENTER + '\0'
    char *pc = (char*) malloc((n - 1 + 1) * sizeof(char)); //string - ENTER + '\0'
    strncpy(pc, str, n - 1); //string - ENTER
    pc[n - 1] = '\0'; //por segurança, define o terminador de string no final

    return pc;
}

int main(void) {
    char *pc;
    pc = input_string();
    printf("%s\n", pc);
    free(pc);
    return 0;
}
