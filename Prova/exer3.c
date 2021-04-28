/* Questão 3 (3,3 pontos) - Ler dois números positivos que representam os limites inferior e superior de um
intervalo. Nesse intervalo, apresentar os valores que são quadrados perfeitos. Um número é quadrado perfeito
se possui como raiz quadrada um valor inteiro. Fazer a média das raízes dos quadrados perfeitos do intervalo. A
função para obter a raiz quadrada é sqrt() e está em na biblioteca math.h.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    char opcao;
    int inf, sup, aux, i, quadrado, raiz, soma, cont;
    float media;


    do//repetir programa
    {
        do //validar
        {
            printf("Informe o limite inferior: ");
            scanf("%d", &inf);
        }while(inf<0);

        do //validar
        {
            printf("Informe o limite superior: ");
            scanf("%d", &sup);
        }while(sup<0);

            if(sup<inf) // limite inferior sempre sendo o menor
            {
                aux = sup;
                sup = inf;
                inf = aux;
            }
            soma=0;
            cont=0;

            for(i=inf;i<=sup;i++)  //usado para fazer um intervalo de numeros
            {
                quadrado = i * i;
                raiz = sqrt(quadrado);
                soma = soma + raiz;
                cont++;

                printf("%d\t (raiz %d)\n", quadrado, raiz);
            }
            media = (float)soma / cont;
            printf("A media das raizes do quadrado perfeito eh: %.2f", media);









        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
