/*11) Faça um programa que receba dois números e imprima o menor dos dois.*/
#include <stdio.h>

int main(){

    int n1, n2; //declarar variaveis

    //entrada
    printf("digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    //processamento e saida
    if(n1 > n2){
        printf("%d", n2);
    } else{
        printf("%d", n1);
    }

    return 0;
}
