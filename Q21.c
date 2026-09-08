/*21)Faça um programa que receba uma frase, conte e imprima o número de vogais desta
frase.*/

#include <stdio.h>

int main(){
    char frase[50];
    int i, cont=0;//declarar variaveis

    //ENTRADA
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //Processamento e saida
    for(i = 0; frase[i] != 0; i++){
        if(frase[i] == 'a'){
            cont++;
        } else if(frase[i] == 'e'){
            cont++;
        } else if(frase[i] == 'i'){
            cont++;
        } else if(frase[i] == 'o'){
            cont++;
        } else if(frase[i] == 'u'){
            cont++;
        }
    } printf("Numero de vogais: %d\n", cont);

    return 0;
}
