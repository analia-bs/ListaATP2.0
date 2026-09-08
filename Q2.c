/*2) Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500
reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.*/

#include <stdio.h>

int main(){

    float salario, aumento, nov_sal;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario < 500){
        nov_sal= salario *1.3;
        printf("Salario atual %.2f", nov_sal);
    } else{
        printf("Sem direito ao aumento");
    }

    return 0;
}
