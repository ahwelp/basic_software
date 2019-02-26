#include <stdio.h>
#include <math.h>

int main(){

    int numeros[] = {10, 5, 30, 60, 75, 100, 12, 16, -28};
    
    int menor, maior;
    menor = maior = numeros[0];
                        //Whaaat a hell
    for(int i = 0; i <= sizeof(numeros)/sizeof(int)-1; i++){
        printf("%d || ", numeros[i]);
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }    
    }
    printf("\n");
    printf("MAIOR: %d\n", maior);
    printf("MENOR: %d\n", menor);
}
