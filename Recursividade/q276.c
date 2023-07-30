#include<stdio.h>

void ast(int num) {
    if (num > 0){
        for(int k=1; k <= num; k++){
            printf("*");
        }
        printf("\n");
        ast(num - 1);
    }
}

void main(){
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d",&n);
    ast(n);
}