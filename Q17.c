/*17) Faça um programa que receba a medida de um ângulo em graus, um número inteiro.
Determine e imprima o quadrante em que se localiza este ângulo. Considere os quadrantes
abaixo:

Ângulo   Quadrante
0 |__ 90 1o quadrante
90 |__ 180 2o quadrante
180 |__ 270 3o quadrante
270 |__ 360 4o quadrante
0 __ -90 1o quadrante
-90 |__ -180 2o quadrante
-180 |__ -270 3o quadrante
-270 |__| -360 4o quadrante

Para ângulos maiores que 360 graus, reduza ao intervalo de 0 a 360.*/
#include <stdio.h>

int main(){
    int angulo; //declarar variaveis

    //Entrada
    printf("Digite o angulo: ");
    scanf("%d", &angulo);

    //Processamento e Saida
    if(angulo >= 0 && angulo < 90){
        printf("1 Quadrante");
    } else if(angulo >= 90 && angulo < 180){
        printf("2 Quadrante");
    } else if(angulo >= 180 && angulo < 270){
        printf("3 Quadrante");
    } else if(angulo >= 270 && angulo < 360){
        printf("4 Quadrante");
    } else if (angulo <= 0 && angulo > -90){
        printf("1 Quadrante");
    }else if(angulo <= -90 && angulo > -180){
        printf("2 Quadrante");
    } else if(angulo <= -180 && angulo > -270){
        printf("3 Quadrante");
    } else if(angulo <= -270 && angulo >= -360){
        printf("4 Quadrante");
    }
    return 0;
}
