/*12) Faça um programa que receba três notas de um aluno, calcule e imprima a média
aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
Média Mensagem
0.0 |__ 5.0 reprovado
5.0 |__ 7.0 exame
7.0 |__| 10.0 aprovado*/
#include <stdio.h>

int main(){

    float n1, n2, n3, media_aritm; //declarar variaveis

    //entrada
    printf("Digite as 3 notas do aluno:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    //processamento e saida
    media_aritm = (n1+n2+n3)/3;

    if(media_aritm >= 0 && media_aritm < 5.0){
        printf("Reprovado: %.2f", media_aritm);
    } else if (media_aritm >= 5.0 && media_aritm < 7){
        printf("Exame: %.2f", media_aritm);
    } else {
        printf("Aprovado: %.2f", media_aritm);
    }

    return 0;
}
