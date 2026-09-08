/*8) No curso de Desenvolvimento de Software, a nota final do estudante é calculada a partir de
3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. As notas variam de 0 a 10 e a nota final é média ponderada das 3 notas
mencionadas. A tabela a seguir fornece os pesos das notas:
Laboratório - peso 2
Av. Semestral - peso 3
Exame final - peso 5
Faça um programa que receba as 3 notas do estudante, calcule e imprima a
média final e o conceito desse estudante.
O conceito segue a tabela abaixo:
média final conceito
8.0 |__| 10.0 A
7.0 |__ 8.0 B
6.0 |__ 7.0 C
5.0 |__ 6.0 D
< 5.0 E*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, media; //declarar as variáveis

    //Entrada
    printf("Digite primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    //Processamento
    media= (n1*2+n2*3+n3*5)/10;

    //Saida
    if(media>=8 && media<=10){
        printf("Media:%.2f Conceito: A", media);
    } else if(media>=7 && media<8){
        printf("Media:%.2f\nConceito: B", media);
    } else if(media>=6 && media<7){
        printf("Media:%.2f\nConceito: C", media);
    } else if(media>=5 && media<6){
        printf("Media:%.2f\nConceito: D", media);
    } else {
        printf("Media:%.2f\nConceito: E", media);
    }

    return 0;
}

