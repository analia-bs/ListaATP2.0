/*18) Uma empresa decidiu dar uma gratificação de Natal aos seus funcionários, baseada no
número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor
do prêmio é obtido pela consulta na tabela a seguir, em que:
H = (número de horas extras) – (2/3*(número de horas-falta))
H (minutos) Prêmio ($)
> 240 500
1800 __| 2400 400
1200 __| 1800 300
600 __| 1200 200
<= 600 100

Faça um programa que receba o número de horas extras e o número de
horas- falta em minutos de um funcionário. Imprima o número de horas
extras em horas, o número de horas, o número de horas-falta em horas e o
valor do prêmio.*/
#include <stdio.h>

int main(){
    int min_extra, min_falta, h, hr_extra, hr_falta, hr_total; //declarar variaveis

    //entrada
    printf("Horas Extras do funcionario em minutos: ");
    scanf("%d", &min_extra);

    printf("Horas de falta do funcionario em minutos: ");
    scanf("%d", &min_falta);

    //Processamento
    hr_extra=min_extra/60;
    hr_falta=min_falta/60;
    h = min_extra - (2/3*min_falta);
    hr_total = h/60;

    //Saida
    if(h > 2400){
        printf("Horas Extras: %d\nHoras Faltas: %d\nHoras Total:%d\n Premio: R$500", hr_extra, hr_falta, hr_total);
    } else if(h >1800 && h <= 2400){
        printf("Horas Extras: %d\nHoras Faltas: %d\nHoras Total:%d\n Premio: R$400", hr_extra, hr_falta, hr_total);
    } else if (h > 1200 && h <= 1800){
        printf("Horas Extras: %d\nHoras Faltas: %d\nHoras Total:%d\n Premio: R$300", hr_extra, hr_falta, hr_total);
    } else if (h > 600 && h <= 1200){
        printf("Horas Extras: %d\nHoras Faltas: %d\nHoras Total:%d\n Premio: R$200", hr_extra, hr_falta, hr_total);
    } else{
        printf("Horas Extras: %d\nHoras Faltas: %d\nHoras Total:%d\n Premio: R$100", hr_extra, hr_falta, hr_total);
    }

    return 0;
}
