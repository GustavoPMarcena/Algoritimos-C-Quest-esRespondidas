#include<stdio.h>

int somaAlgarismos(int num){
    if(num < 10 && num > -10){
        return num;
    }
    return (num%10) + somaAlgarismos(num/10);
}

void main(){
    int num;
    printf("Insira um numero inteito: ");
    scanf("%d", &num);
    int soma = somaAlgarismos(num);
    printf("A soma dos algarismos do numero %d eh igual a %d",num, soma);
}