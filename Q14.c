/*14) Faça um programa que receba o código correspondente ao cargo de um funcionário e
imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo
a tabela:

Código Cargo Percentual
1 Escriturário 50,00%
2 Secretário 35,00%
3 Caixa 20,00%
4 Gerente 10,00%
5 Diretor Não tem aumento*/
#include <stdio.h>

int main(){

    int cargo; //declarar variavel

    //Entrada
    printf("Digite o codigo de 1 a 5 correspondente a sua funcao: ");
    scanf("%d", &cargo);

    //Processamento e saida
    if(cargo == 1){
        printf("Escrituario: Aumento de 50%");
    } else if (cargo == 2){
        printf("Secretario: Aumento de 35%");
    } else if(cargo == 3){
        printf("Caixa: Aumento de 20%");
    } else if(cargo == 4){
        printf("Genrente: Aumento de 10%");
    } else {
        printf("Diretor: Nao tem aumento");
    }

    return 0;
}
