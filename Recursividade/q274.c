#include<stdio.h>
const int quantidade = 2;

int matrizIguais(int mat1[quantidade][quantidade], int mat2[quantidade][quantidade], int n){
   if(n == quantidade + 1){
     return 1;
   }
   for(int k=0;k<quantidade;k++){
      if (mat1[n-1][k] != mat2[n-1][k]){
        return 0;
      }
   }
   return matrizIguais(mat1, mat2, n+1);
}

void main(){
    int mat1[quantidade][quantidade], mat2[quantidade][quantidade], n, k, g;
    printf("Preenchendo 1 vetor: \n");
    for(k=0;k<quantidade;k++){
       for(g=0;g<quantidade;g++){
          printf("Digite um numero: ");
          scanf("%d", &mat1[k][g]);
       }
    }
    printf("Preenchendo 2 vetor: \n");
    for(k=0;k<quantidade;k++){
       for(g=0;g<quantidade;g++){
          printf("Digite um numero: ");
          scanf("%d", &mat2[k][g]);
       }
    }
    printf("Digite um numero n: ");
    scanf("%d", &n);
    int v = matrizIguais(mat1, mat2, n);
    if(v){
        printf("As matrizes sao iguas a partir da linha %d",n);
    } else{
        printf("As matrizes nao sao iguas a partir da linha %d",n);
    }
    printf("%d",v);
}