#include <stdio.h>
#include <string.h>
#include <math.h>
#define TAM 41

//declarando a funcao de conversao de binario para decimal
void binarioDecimal(void);

int main()
{
    int numero, binario[TAM], i, conversao, continuar;
    char num[40];
    int binario2[40];
    int acum = 0;
    int c = 0;

    do
    {
        printf("\n\nEscolha o tipo de conversao que voce deseja realizar: \n");
    printf("\n[1]- Decimal para Binario;");
    printf("\n[2]- Binario para Decimal;\n");
    scanf("%d", &conversao);

    if (conversao == 1)
    {
        printf("Digite um numero decimal: \n");
        scanf("%i", &numero);

        for (i = TAM - 1; i >= 0; i--)
        {
            binario[i] = (numero % 2) == 0 ? 0 : 1;
            numero = numero / 2;
        }
        for (i = 1; i < TAM; i++)
        {
            printf("%i", binario[i]);

            if ((i % 4) == 0)
                printf(" ");
        }
    }
    else if (conversao == 2)
    {
        //chamando a funcao para converter o valor binario para decimal
        binarioDecimal();
    }
    else
    {
        printf("operação nao identificada");
    }

    printf("\n\nDeseja fazer outra conversao?\n[1]- SIM \n[2]-NAO\n");
    scanf("%d", &continuar);
    } while (continuar != 2);


}

//funcao separada do codigo principal, nesse caso a funcao de converter binario para decimal
void binarioDecimal(void){
    char num[40];
    int binario[40];
    int acum=0;
    int i=0;
    int tamanhoVet=0;
    printf("Insira o numero: \n");
    scanf("%s", num);
    tamanhoVet=strlen(num);
    for ( i = 0; i <tamanhoVet; i++)
    {
        if(num[i]=='1'){
            binario[i]=1;
        }else{
            binario[i]=0;
        }
    }

    for ( i = tamanhoVet; i >= 0; i--)
    {
        if(binario[tamanhoVet-i]==1){
            acum=acum+pow(2,i-1);
        }
    }
    printf("NUMERO DECIMAL: %i", acum);

    return;
}
