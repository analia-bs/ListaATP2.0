/*28) Verificar se dados três valores inteiros quaisquer os mesmo formam um triângulo. Se
formar informar o tipo, caso contrário, informar que os lados não formam um triângulo.*/
#include <stdio.h>

int main() {
    int a, b, c;//declarar variaveis

    //Entrada
    printf("Digite o lado de A: ");
    scanf("%d", &a);

    printf("Digite o lado de B: ");
    scanf("%d", &b);

    printf("Digite o lado de C: ");
    scanf("%d", &c);

    //Processamento e saida
    if ((a + b > c)&& (a + c > b) && (b + c > a)) {

        if ((a == b) && (b == c)) {
            printf("Triangulo Equilatero\n");
        }
        else if ((a == b) |8| (a == c) || (b == c)) {
                printf("Triangulo Isosceles\n");
            }
            else {
                printf("Triangulo Escaleno\n");
            }
        }
    else {
        printf("Nao e um triangulo.\n");
    }

    return 0;
}

