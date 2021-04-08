/*
2) Na matemática, o fatorial de um número é o produto de
todos os inteiros positivos menores ou iguais ao número.
Exemplo: Fatorial de 5 é 1 * 2 * 3 * 4 * 5 = 120. Elabore
um programa que calcule e mostre o fatorial de um número
informado pelo usuário. Validar esse número para que esteja
em um intervalo de 1 a 20. Lembrando que fatorial de 1 = 1 e
fatorial de 0 = 1.
*/

#include<stdio.h>



int main(void)
{
    int n, contador;
    long long int fat;

    printf("Informe um numero entre 0 e 20 para descobrir sua fatorial: ");
    scanf("%d", &n);

    if(n < 0 || n > 20)
    {
        printf("valor invalido");
    }
     if(n = 1 || n = 0)
    {
        printf("%d! = 1", n);
    }
    else
    {
        contador = n;
        printf(" %d!= ",n);
        for(fat = 1; n >= 1; n = n - 1)
        {
            printf(" %d*",n, contador);
            fat = fat * n;

            contador--;
        }

        printf(" = %d ", fat);
    }

    return 0;
}
