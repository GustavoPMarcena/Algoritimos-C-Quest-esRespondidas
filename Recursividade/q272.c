#include<stdio.h>

int digito(int numero, int posicao){
    if(posicao <= 1){
        return numero%10;
    }
    return digito(numero/10, posicao - 1);
}

void main(){
    int num, pos;
    printf("Informe um numero e uma posicao: ");
    scanf("%d %d",&num, &pos);
    int res = digito(num, pos);
    printf("O %d digito do numero %d eh %d",pos, num, res);
}