#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main()
{
    int mat1[ordem][ordem], mat2[ordem][ordem], mat3[ordem][ordem], k, g, num, linhasNulas = 0, soma = 0;
    printf("Primeira matriz: \n");
    for (k = 0; k < ordem; k++)
    {
        for (g = 0; g < ordem; g++)
        {
            printf("Insira um numero [%d][%d]: ", k, g);
            scanf("%d", &mat1[k][g]);
        }
    }
    printf("Segunda matriz: \n");
    for (k = 0; k < ordem; k++)
    {
        for (g = 0; g < ordem; g++)
        {
            printf("Insira um numero [%d][%d]: ", k, g);
            scanf("%d", &mat2[k][g]);
        }
    }
    for (k = 0; k < ordem; k++)
    {
        for (g = 0; g < ordem; g++)
        {
            mat3[k][g] = mat1[k][g] + mat2[k][g];
        }
    }
    printf("Terceira matriz: \n");
    for (k = 0; k < ordem; k++)
    {
        for (g = 0; g < ordem; g++)
        {
            printf("%d ", mat3[k][g]);
        }
        printf("\n");
    }
    // getch();
}
