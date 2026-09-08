/*4) Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade
ou não.*/

#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Menor de idade");
    } else{
        printf("Maior de idade");
    }

    return 0;
}
