/*
Quest�o 2 (3,3 pontos) - Fazer um programa que receba a quantidade de caracteres (tamanho) do seu primeiro
nome e use essa informa��o para a estrutura de repeti��o que ler� o nome caractere a caractere verificando se
cada caractere � ou n�o um n�mero primo (verificar pelo c�digo correspondente da tabela ASCII, dispon�vel em
https://www.ricardoarrigoni.com/tabela-ascii-completa/). Exemplo: Quantidade de caracteres do nome Ana: 3
Usar uma estrutura de repeti��o (sabe-se o tamanho do nome) para ler os caracteres do nome Ana:

*/

#include <stdio.h>

int main(void)
{
    char opcao, caractere;
    int nome, cont, result, i;


    do//repetir programa
    {
        do //validar
        {
            printf("Informe a quantidade de caracteres que seu primeiro nome possui: ");
            scanf("%d", &nome);
        }while(nome<=0);

        cont=1;
        do //uso o do por ser mais facil de lidar e entender
        {
            printf("Informe o caractere %d de seu nome: ", cont);
            setbuf(stdin, NULL);
            scanf("%c", &caractere);
            printf("%d na tabela ASCII", caractere);
            cont++;
            result=0;

            for(i = 2; i <= caractere/2; i++) // para checar o intervalo
            {
                if(caractere % i == 0) // se possuir algum divisor que n�o seja ele mesmo, n�o eh primo
                {
                    result++;
                    break;
                }
            }
                if(result == 0)
            {
                printf(" eh um numero primo\n");
            }
            else
            {
            printf(" nao eh primo\n");
            }

        }while(cont<=nome);










        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
