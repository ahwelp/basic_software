#include <stdio.h>
#include <math.h>

int main(){

    printf("**************************************\n");
    printf("****N******POW********SQRT*****LOG****\n");
    printf("**************************************\n");

    for(int i = 1; i<=20; i++){
        int    number = i;
        int    square = pow(i, 2);
        double root   = sqrt(i);
        double logar  = log(i);
        //double log    =    0;

        printf("**%4d**%8d**%8f**%8f**\n", number, square, root, logar);

    }
    printf("**************************************\n");
    printf("**************************************\n");

}

