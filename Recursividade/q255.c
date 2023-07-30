#include<stdio.h>

int progressao(int termoInicial, int razao, int n){
    if(n == 0){
        return termoInicial;
    }
    return progressao(termoInicial+razao, razao, n-1);
}


void main(){
    int termo, razao, n;
    printf("Insira o termo inicial, a razao e um numero inteiro: ");
    scanf("%d %d %d",&termo, &razao, &n);
    int nesimo = progressao(termo, razao, n);
    printf("O %d termo dessa razao eh %d", n,nesimo);    
}
