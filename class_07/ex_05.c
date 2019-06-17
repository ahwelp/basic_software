/*
05. Faça um programa que percorra o seguinte vetor de strings, e que imprima a string mais longa:
char *vs[] = {"jfd", "kj", "usjkfhcs", "nbxh", "yt", "muoi", "x", "rexhd"};
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    /* Vetor de String*/
    /* Vamos ter um vetor de ponteiros de char */
    char *vs[] = {"jfd", "kj", "usjkfhcs", "nbxh", "yt", "muoi", "x", "rexhd"};
    
    int i, t, maiori, maiort;
    i = t = maiort = maiori = 0;
    
    t = sizeof(vs) / sizeof(char *);
    for(int i = 0; i < t; i++){
        if(strlen(vs[i]) > maiort){
            maiort = strlen(vs[i]);
            maiori = i;
        }
    }
    printf("Bigger phrase %s\n", vs[maiori]);
    printf("Phrase size %d\n", maiort);
}
