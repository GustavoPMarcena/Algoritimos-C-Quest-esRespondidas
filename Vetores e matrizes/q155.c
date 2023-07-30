#include <stdio.h>
const int quantidade = 10;
void main()
{
    int vet[quantidade], num, k, numerodeterminante;
    for (k = 0; k < quantidade; k++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &num);
        vet[k] = num;
    }
    printf("Insira um numero inteiro de 1 a 10: ");
    scanf("%d", &numerodeterminante);
    printf("O %d numero do vetor eh %d", numerodeterminante, vet[numerodeterminante - 1]);

    // getch();
}
