#include<stdio.h>
const int tamanho = 10;

int paresAparicoes(int vet[tamanho], int pos){
    if(pos>tamanho){
        return 0;
    }
    if(vet[pos-1]%2 == 0){
        return 1 + paresAparicoes(vet,pos+1);
    } else{
        return paresAparicoes(vet,pos+1);
    }
    
}

void main(){
    int k, vet[tamanho], n, pos;
    for(k=0; k<tamanho; k++){
        printf("Insira um numero: ");
        scanf("%d",&vet[k]);
    }
    printf("Insira uma posicao: ");
    scanf("%d",&pos);
    int pares = paresAparicoes(vet, pos);
    printf("Existem %d numeros pares no vetor", pares);
}