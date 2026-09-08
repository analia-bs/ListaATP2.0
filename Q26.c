/*26) Escreva um programa que leia o valor de dois números inteiros e a operação aritmética
desejada: calcule, então, a reposta adequada. Utilize os símbolos da tabela a seguir para ler
qual a operação aritmética escolhida:
Símbolo  ---- Operação aritmética
+  ---------- adição
-  ---------- subtração
*  ---------- multiplicação
/ ----------- divisão*/
#include <stdio.h>
#include <string.h>

int main(){
    //Declaração de variáveis
    int num1, num2;
    char operador;
    int resultado;

    //Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    //processamento
    printf("\n%d %c %d = ", num1, operador, num2);
    switch(operador){
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operador inválido!\n");
            return 1;
    }
    printf("%d\n", resultado);

    return 0;
}
