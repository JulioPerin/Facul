/*Faça um programa que apresente um menu de opções e implemente as seguintes
funcionalidades, detalhadas a seguir:
a) Apresentar divisores do número.
b) Verificar se o número é perfeito.
c) Soma dos divisores.
d) Verificar se os números são múltiplos.
*/

#include <stdio.h>

int main(void)
{
    char opcao, escolha;
    int i, num, div, soma, sup, inf, j, aux, contdiv;

    printf("a)Apresentar divisores do numero\nb)Verificar se o numero eh perfeito\nc)Soma dos divisores\nd)Verificar se os numeros sao multiplos\n");
    do//repetir programa
    {
        printf("Qual das opcoes deseja escolher? ");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);

        switch ( escolha ) // para fazer selecionar as opcoes
        {
            case 'a' :
                do // entrar apenas numeros positivos
                {
                    printf("Informe um numero para checar seus divisores: ");
                    scanf("%d", &num);
                    if(num<0) // para não aceitar numeros menor que 0
                    {
                       printf("\nValor invalido\n");
                    }
                    else{
                    div=0;
                 for(i=1;i<=num;i++) // para pegar o intervalo até o numero informad
                {
                    if(num%i==0) // se o numero for divisivel por I então acrescenta
                    {
                        div++;
                    }
                }
                printf ("O numero %d posui %d divisores\n", num, div);
                    }
                }while(num !=0);

                break;

            case 'b' :

                do // entrar apenas numeros positivos
                {
                    printf("Informe um numero: ");
                    scanf("%d", &num);
                }while(num<=0);

                soma=0;
                for(i=1; i<=num/2; i++) // evitar que o divisor seja ele mesmo
                {
                    if(num % i == 0) //descobrir os divisores
                    {
                    soma = soma + i;
                    }
                }
                    if(soma == num) // se a soma dos divisores for igual ao numero, ele é perfeito
                    {
                      printf("\nEh um numero perfeito\n");
                    }
                    else
                    {
                        printf("\nNao eh um numero perfeito\n");
                    }
                    break;

            case 'c' :
                    printf("TESTE3\n"); ///não está funcionando


                    num=2;
                 for(i=1;i<num;i++) // para pegar o intervalo até o numero informad
                {
                    soma=0;
                    if(num%i==0) // se o numero for divisivel por I então adiciona na soma
                    {
                        div++;
                        soma = soma + i;
                    }
                    if(soma <= num)
                    {
                       printf ("O numero posui %d divisores\n", num);
                    }
                num++;
                }
                    break;

            case 'd' :

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


        for(i=inf; i<=sup; i++) // imprimir numeros de cima
        {
            printf("  %d\t  ", i);
        }
        printf("\n");


        for(i=inf; i<=sup; i++)
        {
            printf("%d", i); //imprimir numeros do lado
            for(j=inf; j<=sup; j++)
            {
                if(i%j==0 || j%i== 0) // se forem divisiveis colocar um X, verificando todos os numeros de J para cada I
                {
                    printf("  X\t  ");
                }
               else
                {
                    printf("   \t  ");
                }
            }
            printf("\n");
        }

        break;


        default :
            printf ("\nValor invalido!\n");

            }












        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
