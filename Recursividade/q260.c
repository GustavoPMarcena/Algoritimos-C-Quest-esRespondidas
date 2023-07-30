#include<stdio.h>

int quantidadeAlgarismos(int num){
    if(num < 10 && num > -10){
        return 1;
    }
    return 1 + quantidadeAlgarismos(num/10);
}

void main(){
    int num;
    printf("Insira um numero inteito: ");
    scanf("%d", &num);
    int alg = quantidadeAlgarismos(num);
    printf("O numero %d tem %d algarismos",num, alg);
}