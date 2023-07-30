#include<stdio.h>
const int tamanho = 10;

int divisores(int n){
    int k, cond = 0;
    for(k=1;k<=n;k++){
         if(n%k == 0){
            cond++;
         }
    }
    return cond;
}

int primosAparicoes(int vet[tamanho], int pos){
    if(pos>tamanho){    
        return 0;
    } 
    if(divisores(vet[pos]) == 2){
        return 1 + primosAparicoes(vet, pos+1);
    }
    return primosAparicoes(vet, pos+1);
}

void main(){
    int k, vet[tamanho], pos;
    for(k=0; k<tamanho; k++){
        printf("Insira um numero: ");
        scanf("%d",&vet[k]);
    }
    printf("Insira uma posicao: ");
    scanf("%d",&pos);
    int p = primosAparicoes(vet, pos);
    printf("Existem %d numeros primos no vetor", p);
}