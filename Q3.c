/*3) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de
permissão ou negação de acesso.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char senha_coloc[10]; //declarar as variáveis
    char senha[]="ASDFG";

    printf("Digite a senha:\n");
    scanf("%s", senha_coloc); //ler e guardar na variável senha_coloc

    if(strcmp(senha_coloc, senha)==0){
        printf("Acesso Permitido");
    } else{
        printf("Acesso Negado");
    }

    return 0;
}
