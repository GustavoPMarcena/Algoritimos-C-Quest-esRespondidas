#include<stdio.h>

const int tamanho = 10;

int buscaBinaria(int vet[tamanho],int x, int m, int n){
   int bin = m+n/2;
   if(n-m == 1 || n-m == 0){
     if(vet[n] == x || vet[m] == x){
        return 1;
     }
     return 0;
   }
   if(vet[bin] != x){
     if(vet[bin] < x){
        return buscaBinaria(vet, x, bin, n);
     }else{
        return buscaBinaria(vet, x, m, bin);
     }
   } else{
      return 1;
   }
}

void main(){
    int k, vet1[tamanho], x,m,n;
    printf("Preenchendo o primeiro vetor: \n");
    for(k=0; k<tamanho; k++){
        printf("Insira um numero: ");
        scanf("%d",&vet1[k]);
    }
    printf("Insira um numero x e duas posicoes m e n: ");
    scanf("%d %d %d", &x,&m, &n);
    int busca = buscaBinaria(vet1, x, m, n);
    if(busca == 1){
        printf("O numero %d esta presente no vetor",x);
    } else{
        printf("O numero %d não esta presente no vetor",x);
    }
}