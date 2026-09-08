/*15) Faça um programa que mostre um menu com as seguintes opções:
• soma
• raiz quadrada
• finalizar
O programa deve receber a opção desejada, receber os dados necessários para a
operação de cada opção, realizar a operação e imprimir o resultado. Na opção
finalizar nada deve acontecer.*/

#include <stdio.h>
#include <math.h>


int main(){
    int opcao;
    float num1, num2, result;

    //Entrada
    printf("Opcoes:\n");
    printf("1. Soma\n");
    printf("2. Raiz Quadrada\n");
    printf("3. Finalizar\n");
    printf("Escolha entre as opcoes: ");
    scanf("%d", &opcao);

    //Processamento e saida
    if(opcao==1){
        printf("Escolha dois numeros: ");
        scanf("%f %f", &num1, &num2);

        result=num1+num2;

        printf("Resultado da soma: %.2f", result);

    } else if (opcao==2){
        printf("Escola um numero: ");
        scanf("%f", &num1);

        num1 >= 0;
        result = sqrt(num1);

        printf("Resultado da raiz quadrada: %.2f", result);

    } else{
        printf("Programa finalizado");
    }

    return 0;
}
