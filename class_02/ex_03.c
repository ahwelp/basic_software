#include <stdio.h>

double mean(double values[], int tam){
    double sum = 0;
    for(int i = 0; i < tam; i++ ){
        printf("%lf\n", values[i]);
        sum += values[i];
        
    }
    return sum / tam;
}

void main(){
    int iterations = 5;
    double values[5];
    double temp = 0;

    while(iterations > 0){
        scanf("%lf", &temp);
        iterations--;
    }
    temp = mean(values, iterations);
    printf("%lf", temp);
}
