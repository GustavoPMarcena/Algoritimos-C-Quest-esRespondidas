#include<stdio.h>
#include<math.h>
#include<string.h>


void main(){
  float passagem, milhas, passagemnova, milhasrestantes;
  printf("Digite o valor da passagem e as milhas:");
  scanf("%f %f", &passagem, &milhas);
  printf("Digite o valor da passagem que caio quer: ");
  scanf("%f", &passagemnova);
  float proporcao = milhas / passagem;
  milhasrestantes = proporcao * passagemnova;
  printf("A passagem que custa %.2f, requer %.2f para completar com milhas", passagemnova, milhasrestantes);
  //getch();
  
}