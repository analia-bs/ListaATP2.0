/*24) Escreva um programa que leia três valores inteiros e mostre-os em ordem crescente.*/
#include <stdio.h>

int main(){
    int a, b, c, ordem;
    int temp;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    if(a>b){
         temp = a;
         a = b;
         b = temp;
    }
    if(a>c){
        temp = a;
        a = c;
        c = temp;
            }
    if(b>c){
        temp= b;
        b = c;
        c = temp;
    }
    printf("a ordem e %d %d %d", a, b, c);

    return 0;
}
