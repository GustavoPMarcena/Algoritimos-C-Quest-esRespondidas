#include<stdio.h>

void salto(int num){
    if(num >= 1){
      printf("\n");
      salto(num-1);
    }
}


void main(){
    int numero;
    printf("Insira um numero inteiro: ");
    scanf("%d",&numero);
    salto(numero);
    printf("Salto acaba aqui");    
}
