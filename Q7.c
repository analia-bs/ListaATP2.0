/*7) Faça um programa que receba a idade de um nadador e imprima a sua categoria seguindo
as regras:
categoria idade
infantil A 5 – 7 anos
infantil B 8 – 10 anos
juvenil A 11 – 13 anos
juvenil B 14 – 17 anos
sênior maiores de 18 anos*/

#include <stdio.h>

int main(){

    int idade; //declarar variavel

    //entrada
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //processamento e saida
    if(idade >= 5 && idade <= 7){
        printf("Infantil A");
    } else if (idade >= 8 && idade <= 10){
        printf("Infantil B");
    } else if (idade >= 11 && idade <=13){
        printf("Juvenil A");
    } else if (idade >= 14 && idade <= 17){
        printf("Juvenil B");
    } else{
        printf("Senior");
    }

    return 0;
}
