#include <stdio.h>
/*
Crie um programa que defina as funções a(), b() e c(), nesta ordem, 
sem parâmetros ou valores de retorno. Ao serem chamadas cada função deve 
apenas imprimir o seu nome. Contudo a função c() deve chamar a() três vezes,
enquanto a função a() deve chamar a função b() uma única vez. Chame c() duas
vezes a partir de main().
*/

void a();
void b();
void c();

void main(){
    c();
    c();
    return 0;
}

void a(){
    printf("a\n");
    b();
}

void b(){
    printf("b\n");
}

void c(){
    printf("c\n");
    a();
    a();
    a();
}
