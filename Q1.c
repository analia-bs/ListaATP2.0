/*1) Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
reprovado para média inferior a 7.0.*/

#include <stdio.h>


int main(){

    float n1, n2, n3, n4, media; //definir variaveis

    //Entrada
    printf("Digite nota 1: ");
    scanf("%f", &n1);

    printf("Digite nota 2: ");
    scanf("%f", &n2);

    printf("Digite nota 3: ");
    scanf("%f", &n3);

    printf("Digite nota 4: ");
    scanf("%f", &n4);

    //PROCESSAMENTO
    media = (n1+n2+n3+n4)/4;

    //Saida
    if(media >= 7){
        printf("Aluno Aprovado");
    } else{
        printf("Aluno Reprovado");
    }

    return 0;

}

