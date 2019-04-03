#include <stdio.h>

/*
Use o operador ternário "?:" para implementar a função absolute_value(), que 
recebe um double como parâmetro, e retorna o valor absoluto do mesmo na forma 
de outro double. Teste com os valores 26, -87 e 0, fazendo três chamadas 
distintas a partir de main() e imprimindo os resultados na tela.
*/

double absolute_value(double num);

void main(){
    printf("%f\n", absolute_value(26));
    printf("%f\n", absolute_value(-87));
    printf("%f\n", absolute_value(0));
    return 0;
}

double absolute_value(double num){
    return (num >= 0) ? num : (num * -1);
}

