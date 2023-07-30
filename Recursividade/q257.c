#include<stdio.h>
const int ordem = 5;

int potenciacao(int base, int pot){
    if(pot == 0){
      return 1;
    }
    return base * potenciacao(base, pot-1);
}


void main(){
    int base, pot;
    printf("Insira a base e a potencia: ");
    scanf("%d %d",&base, &pot);
    int resultado = potenciacao(base, pot);
    printf("A potencia de %d por %d eh %d",base, pot, resultado);
}