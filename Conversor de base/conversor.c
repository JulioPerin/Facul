#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   int num, binario[8], i;

   printf("Digite o número decimal para a conversão: ", setlocale(LC_ALL,""));
   scanf("%d", &num);

   for (i = 7; i >= 0; i--)
   {
      if (num % 2 == 0)
         binario[i] = 0;
      else
         binario[i] = 1;
      num = num / 2;
   }

   for (i = 0; i < 8; i++)
       printf("%d", binario[i]);

   return 0;
}
