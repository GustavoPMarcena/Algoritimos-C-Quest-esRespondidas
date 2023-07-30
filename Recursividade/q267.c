#include<stdio.h>
const int tamanho = 10;

int somaAparicoes(int vet[tamanho], int pos, int n){
    if(pos==tamanho){
        if(n == vet[pos-1]){
            return 1;
        }
        return 0;
    }
    if(n == vet[pos-1]){
        return 1 + somaAparicoes(vet,pos+1, n);
    } else{
        return somaAparicoes(vet,pos+1,n);
    }
    
}

void main(){
    int k, vet[tamanho], n, pos;
    for(k=0; k<tamanho; k++){
        printf("Insira um numero: ");
        scanf("%d",&vet[k]);
    }
    printf("Insira um numero n: ");
    scanf("%d",&n);
    printf("Insira uma posicao: ");
    scanf("%d",&pos);
    int apa = somaAparicoes(vet, pos, n);
    printf("O numero %d aparece %d vezes no vetor",n, apa);
}