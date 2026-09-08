/*6) Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu
peso ideal, utilizando as seguintes fórmulas:
• para homens: (72.7 * H) - 58;
• para mulheres: (62.1 * H) – 44.7.*/

#include <stdio.h>

int main(){

    float altura, peso_id; //declaração de variaveis
    int sexo;

    //Entrada
    printf("Digite 1 para masculino e 2 para feminino: ");
    scanf("%d", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    //Processamento e Saida
    if(sexo==1){
        peso_id = (72.7 * altura) - 58;
        printf("Seu peso idela é: %.2f", peso_id);
    } else{
        peso_id = (62.1 * altura) - 44.7;
        printf("Seu peso idel é: %.2f", peso_id);
    }

    return 0;
}
