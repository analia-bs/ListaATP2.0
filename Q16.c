#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*16)Uma companhia de seguros tem três categorias de seguros baseadas na idade e na
ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos
podem adquirir apólices de seguros. Quanto às classes de ocupações foram definidos três
grupos de risco. A tabela a seguir fornece as categorias em função da caixa de idade e do
grupo de risco:*/
int main()
{   int idade;

    char risco[10]; //declarar as variáveis
    char baixo[]="baixo";
    char medio[]="medio";
    char alto[]="alto";

    //Entrada
    printf("Digite sua idade\n");
    scanf("%d", &idade);

    printf("Digite o grau de risco\n");
    scanf("%s", risco);

    //Processamento e Saida
    if(idade>=18 && idade<=24){
        if(strcmp(risco, baixo)){
            printf("Codigo 7");
        } else if(strcmp(risco, medio)){
            printf("Codigo 8");
        } else if(strcmp(risco, alto)){
            printf("Codigo 9", alto);
        }
    } else if(idade>=25 && idade<=40){
        if(strcmp(risco, baixo)){
            printf("Codigo 6");
        } else if(strcmp(risco, medio)){
            printf("Codigo 5");
        } else if(strcmp(risco, alto)){
            printf("Codigo 4");
        }
    } else if(idade>=41 && idade<=70){
        if(strcmp(risco, baixo)){
            printf("Codigo 3");
        } else if(strcmp(risco, medio)){
            printf("Codigo 2");
        } else if(strcmp(risco, alto)){
            printf("Codigo 1");
        }
    }
    return 0;
}
