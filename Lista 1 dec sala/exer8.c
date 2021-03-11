/* 8) Faça um programa que leia três notas de um aluno e calcule
 a média ponderada, com os pesos 1, 3 e 4, respectivamente */

 #include <stdio.h>

 int main(void)
 {
     float nota1, nota2, nota3, media, rec, finl;

     printf("Informe a primeira nota: ");
     scanf("%f", &nota1);
     printf("Informe a segunda nota: ");
     scanf("%f", &nota2);
     printf("Informe a segunda nota: ");
     scanf("%f", &nota3);

     media = ((nota1 * 1) + (nota2 * 3) + (nota3 * 4)) / 8;

     if((media >= 5) && (media <= 10))
        {
            printf("Aprovado");
        }
     if((media >= 4) && (media <= 5.9))
        {
            printf("\nEsta de recuperacao");
            printf("\nInforme a nota da recuperacao: ");
            scanf("%f", &rec);

            finl = (media * rec) / 2;

            if(finl >= 5)
            {
                printf("\nAprovado apos recuperacao");
            }
            if(finl < 5)
            {
                printf("\nReprovado apos recuperacao");
            }

        }
      if(media < 4)
      {
          printf("\nReprovado antes de recuperacao");
      }
      return 0;
 }
