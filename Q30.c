/*30) Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi
escolhido, através de perguntas e respostas. Animais possíveis: leão, cavalo, homem,
macaco, morcego, baleia, avestruz, pinguim, pato, águia, tartaruga, crocodilo e cobra. */
#include <stdio.h>

int main(){
    int op; //declarar variavel

    //Entrada
    printf("E mamifero?\n1-Sim ou 2-Nao.\n");
    scanf("%d", &op);

    //Processamento
    if(op==1){
        printf("E quadrupede?\n1-Sim ou 2-Nao.\n");
        scanf("%d", &op);
        if(op==1){
            printf("E carnivoro?\n1-Sim ou 2-Nao.\n");
            scanf("%d", &op);
            if(op==1){
                printf("O animal e um LEAO\n");
            } else{
                printf("O animal e um CAVALO\n");
            }
        } else{
            printf("E bipede?\n1-Sim ou 2-Nao.\n");
            scanf("%d", &op);
            if(op==1){
                printf("E onivoro?\n1-Sim ou 2-Nao.\n");
                scanf("%d", &op);
                if(op==1){
                    printf("O animal e um HOMEM\n");
                } else{
                    printf("O animal e um MACACO\n");
                }
            } else{
                printf("E voador?\n1-Sim ou 2-Nao.\n");
                scanf("%d", &op);
                if(op==1){
                    printf("O animal e um MORCEGO\n");
                } else{
                    printf("O animal e uma BALEIA\n");
                }
            }
        }
    } else{
        printf("E ave?\n1-Sim ou 2-Nao.\n");
        scanf("%d", &op);
        if(op==1){
            printf("E nao voador?\n1-Sim ou 2-Nao.\n");
            scanf("%d", &op);
            if(op==1){
                printf("E tropical?\n1-Sim ou 2-Nao.\n");
                scanf("%d", &op);
                if(op==1){
                    printf("O animal e um AVESTRUZ\n");
                } else{
                    printf("O animal e um PINGUIM\n");
                }
            } else{
                printf("E nadador?\n1-Sim ou 2-Nao.\n");
                scanf("%d", &op);
                if(op==1){
                    printf("O animal e um PATO\n");
                } else{
                    printf("O animal e uma AGUIA\n");
                }
            }
        } else{
            printf("Ele tem casco?\n1-Sim ou 2-Nao.\n");
            scanf("%d", &op);
            if(op==1){
                printf("O animal e uma TARTARUGA\n");
            } else{
                printf("Ele e carnivoro?\n1-Sim ou 2-Nao.\n");
                scanf("%d", &op);
                if(op==1){
                    printf("O animal e um CROCODILO\n");
                } else{
                    printf("O animal e uma COBRA\n");
                }
            }
        }
    }

    return 0;
}
