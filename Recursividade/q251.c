#include<stdio.h>

int fatorial(int num){
    if(num == 1 || num==0){
        return 1;
    }
    return num * fatorial(num-1);
}


void main(){
    int numero;
    printf("Insira um numero inteiro: ");
    scanf("%d",&numero);
    int fat = fatorial(numero);
    printf("O fatorial de %d eh %d",numero, fat);    
}
