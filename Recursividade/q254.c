#include<stdio.h>

int produto(int x, int y){
    if(x == 0 || y == 0){
        return 0;
    }
    if(y == 1){
        return x;
    }
    return x + produto(x, y-1);
}


void main(){
    int x, y;
    printf("Insira dois numeros x e y: ");
    scanf("%d %d",&x, &y);
    int pro = produto(x,y);
    printf("O produto de %d por %d eh %d",x,y,pro);    
}
