#include<stdio.h>
const int tamanho = 10;

int somaVetor(int vet[tamanho], int n){
    if(n==tamanho){
        return vet[n-1];
    }
    return vet[n-1] + somaVetor(vet,n+1);
}

void main(){
    int k, vet[tamanho], n;
    for(k=0; k<tamanho; k++){
        printf("Insira um numero: ");
        scanf("%d",&vet[k]);
    }
    printf("Insira um numero para a posicao: ");
    scanf("%d",&n);
    int soma = somaVetor(vet, n);
    printf("A soma dos vetores a partir da posicao %d eh %d",n, soma);
}