#include<stdio.h>

float calculaArea(float lado){
    return lado * lado;
}
float calculaPerimetro(float lado){
    return lado * 4;
}

void main(){
    float lado;
    printf("Insira o valor do lado do quadrado: ");
    scanf("%f",&lado);
    float area = calculaArea(lado);
    float perimetro = calculaPerimetro(lado);
    printf("Area: %.2f, Perimetro: %.2f", area, perimetro);    
}
