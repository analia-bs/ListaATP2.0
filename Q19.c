/*19) Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas,
o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule
e imprima o salário a receber do funcionário seguindo as regras abaixo:
• o valor da hora trabalhada é igual a 1/5 do salário mínimo;
• o salário do mês é igual ao número de horas trabalhadas vezes o valor da hora
trabalhada;
• para cada dependente acréscimo de 32 reais;
• para cada hora extra trabalhada o cálculo do valor da hora trabalhada acrescida de
50%;
• o salário bruto é igual ao salário do mês mais os valores dos dependentes mais os
valores das horas extras;
• o cálculo do valor do imposto de renda retido na fonte segue a tabela abaixo:

IRRF Salário bruto
isento Inferior a 200
10,00% de 200 até 500
20,00% superior a 500
• o salário líquido é igual ao salário bruto menos IRRF;
• a gratificação segue a próxima tabela:

Salário líquido Gratificação
Até 350 100 reais
Superior a 350 50 reais
• o salário a receber do funcionário é igual ao salário líquido mais a gratificação.*/
#include <stdio.h>

int main()
{
    float salario=1631, salar_mes, hrs_trab, dp, depend, hrs_ext, valor_hr, v_ext, sb, sl, irrf, gratif, salar_final; //declarar variaveis

    //Entrada
    printf("Digite o numero de horas trabalhadas:\n");
    scanf("%f", &hrs_trab);

    printf("Digite a quantidade de dependentes:\n");
    scanf("%f", &dp);

    printf("Digite a o numero de horas extras:\n");
    scanf("%f", &hrs_ext);

    //Processamento
    valor_hr=salario/5.0;
    salar_mes= hrs_trab*valor_hr;
    depend=dp*32;
    v_ext=hrs_ext*(hrs_trab*1.5);
    sb=salar_mes+depend+v_ext;

    //Saida
    if(sb<200){
    } else if(sb>=201 && sb<=500){
            irrf=sb*0.90;
    } else{
        irrf=sb*0.80;
    }
        sl=sb-irrf;
    if(sl<=350){
        gratif=100;
    } else {
        gratif=50;
    }

    salar_final=sl+gratif;
    printf("O salario do funcionario e: %.2f", salar_final);

    return 0;
}
