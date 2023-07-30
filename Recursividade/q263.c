#include<stdio.h>

int resto(int x, int y){
    if(x < y){
        return x;
    } else if(x == y){
        return 0;
    }
    return resto(x-y, y);
}

void main(){
    int x, y;
    printf("Insira um numero inteito x e y: ");
    scanf("%d %d", &x, &y);
    int Resto = resto(x,y);
    printf("O resto da divisao entre %d e %d eh %d",x,y,Resto);
}

