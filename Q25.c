/*25) Escreva um programa que calcule o que deve ser pago por um produto, considerando o
preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela
a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado:
Código - Condição de pagamento
1 - Á vista em dinheiro ou cheque, recebe 10% de desconto.
2 - À vista no cartão de crédito, recebe 5% de desconto.
3 - Em 2 vezes, preço normal de etiqueta sem juros.
4 - Em 3 vezes, preço normal de etiqueta mais juros de 10%.*/
#include <stdio.h>

int main(){
    float valor_produto,valor_novo;//declarar variaveis
    int op;

    //Entrada
    printf("Digite o valor do produto: \n");
    scanf("%f", &valor_produto);

    printf("Escolha a forma de pagamento\n");
    printf("\n1 - A vista em dinheiro ou cheque.\n2 - A vista no cartão de credito.\n3 - Em 2 vezes no cartão de credito.\n4 - Em 3 vezes no cartao credito.\n");
    scanf("%d", &op);

    //Processamento e saida
    switch(op){
        case 1: valor_novo = 0.9*valor_produto;
                printf("Total a pagar: R$%f", valor_novo);
                printf("\nDesconto de 10%%: R$%f",valor_produto*0.1);
                printf("\nJuros: R$0,00"); break;

        case 2: valor_novo = 1.05*valor_produto;
                printf("Total a pagar: R$%f", valor_novo);
                printf("\nDesconto: R$0,00");
                printf("\nJuros: R$%f", valor_produto*0.05 ); break;

        case 3: printf("Total a pagar: R$%f", valor_produto);
                printf("\nDesconto: R$0,00");
                printf("\nJuros: R$0,00"); break;

        case 4: valor_novo = 1.1*valor_produto;
                printf("Total a pagar: R$%f", valor_novo);
                printf("\nDesconto: R$0,00\n");
                printf("Juros: R$%f", valor_produto*0.1 ); break;
    }

    return 0;
}
