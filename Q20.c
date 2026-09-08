/*20)Faça um programa para resolver equações do 2o grau.*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, x1, x2, delta; //declarar variavies

    //Entrada
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);
    printf("Valor de c: ");
    scanf("%d", &c);

    //Processamento
    delta = (b*b)-4*a*c;

    //Saida
    if(a==0){
        printf("Nao e uma equacao de segundo grau");
    } else if (delta >= 0){
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        printf("As raizes da equacao sao: %d %d", x1, x2);
    }
    return 0;
}
