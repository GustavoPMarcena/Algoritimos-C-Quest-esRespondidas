#include<stdio.h>

int div(int x, int y){
    if(x < y){
        return 0;
    } else if(x == y){
        return 1;
    }
    return 1 + div(x-y, y);
}

void main(){
    int x, y;
    printf("Insira um numero inteito x e y: ");
    scanf("%d %d", &x, &y);
    int divisao= div(x,y);
    printf("A divisao entre %d e %d eh %d",x,y,divisao);
}