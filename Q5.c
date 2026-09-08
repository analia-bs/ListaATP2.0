/*5) Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo
com a seguinte regra:
• salários até 300, reajuste de 50%;
• salários maiores que 300, reajuste de 30%.*/
#include <stdio.h>

int main(){
    float salario_inic, reajuste; //declaração das variaveiss

    //Entrada
    printf("Digite o valor do salario: ");
    scanf("%f", &salario_inic);

    //Processamento e Saida
    if(salario_inic <= 300){
        reajuste = salario_inic * 1.5;
        printf("Salario reajustado e %.2f", reajuste);
    } else {
        reajuste = salario_inic * 1.3;
        printf("Salario reajustado e %.2f", reajuste);
    }

    return 0;
}
