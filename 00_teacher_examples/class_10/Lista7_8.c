/* Escreva uma função chamada shuffle(), que recebe uma string como parâmetro e que devolve um ponteiro para char. Essa função deve primeiro copiar a string recebida para um novo espaço, alocado dinamicamente (incluindo o terminador '\0'). A função deve então embaralhar esta cópia, trocando cada letra com uma posição aleatória dentro desta mesma string. A função finaliza devolvendo o ponteiro para a área alocada. Teste esta função imprimindo o resultado do embaralhamento da string "aaaaabbbbcccdde". */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *shuffle(char *str) {
    int n;
    n = strlen(str); //obtém tamanho da string
    
    char *p_c = NULL;
    p_c = (char *) malloc((n + 1) * sizeof(char)); //reserva espaço para o terminador
    strcpy(p_c, str);
    
    //uma forma de embaralhar é sortear dois índices, e trocar os caracteres contidos nesta posições, então basta repetir o processo algumas vezes
    
    srand(time(NULL));

    int c, i, j;
    for (c = 0; c < n; c++) {
        i = rand() % n; //primeiro índice, de 0 a n-1
        j = rand() % n; //segundo índice, de 0 a n-1
        
        //faz uma troca
        char temp = p_c[i];
        p_c[i] = p_c[j];
        p_c[j] = temp;
    }
    
    return p_c;
}

int main() {
    char s[] = "aaaaabbbbcccdde";
    
    char *x = NULL;
    x = shuffle(s);
    printf("%s\n", x);

    //libera memória apontada por 'x' e zera este ponteiro, por garantia
    free(x); x = NULL;
    
    return 0;
}
