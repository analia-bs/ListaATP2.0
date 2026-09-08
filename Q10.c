/*10) Faça um programa que receba um número, verifique se este número é par ou ímpar e
imprima a mensagem.*/
#include <stdio.h>

int main(){

    int numero; //declarar varavel

    //Entrada
    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);

    //Processamento e saida
    if(numero % 2 == 0){
        printf("Numero %d e par", numero);
    } else{
        printf("o numero %d e impar", numero);
    }

    return 0;
}
