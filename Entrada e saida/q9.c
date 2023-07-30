#include<stdio.h>
#include<math.h>
void main(){
  float distancia, tempo;
  printf("Informe a distancia percorrida em km: \n");
  scanf("%f",&distancia);
  printf("Informe a tempo gasto em horas: \n");
  scanf("%f",&tempo);
  float kmhora = distancia/tempo;
  float mporsec = kmhora/3.6;
  printf("A velocidade media eh %.2f", mporsec);
  //getch();
  
}