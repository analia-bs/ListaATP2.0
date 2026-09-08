/*27)
O que será impresso depois de executado o seguinte algoritmo:
a) num = 20
b) num = -3
c) num = 0
leia(num)
se num  > 0 então
quale = 'NUMERO POSITIVO'
senão
se num < 0 então
quale = 'NUMERO NEGATIVO'
senão
quale = 'zero';
fim se;
fim se;
escreva(quale);*/
#include <stdio.h>

int main(){
    float num;// declarar variaveis
    char quale[20];

    printf("Digite um numero\n");
    scanf("%f",&num);

    if(num>0){
        printf("Numero positivo");
    } else if  (num<0){
        printf("Numero negativo");
    } else {
        printf("zero");
    }


    return 0;
}
