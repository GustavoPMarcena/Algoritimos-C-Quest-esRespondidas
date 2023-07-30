#include <stdio.h>
#include <math.h>
int main() {
  int k, num, contPares = 0, contImpares = 0, contNumPares = 0, contNumImpares = 0;
  while(num != 0){
    printf("Insira um numero inteiro: ");
    scanf("%d",&num);
    if(num == 0){
      continue;
    } else if(num%2 == 0){
      contPares += num;
      contNumPares++;
    } else{
      contImpares += num;
      contNumImpares++;
    }
  }
  float mediaPares = contPares/contNumPares;
  float mediaImpares = contImpares/contNumImpares;
  printf("Media de numeros Pares: %.2f\nMedia de numeros Impares: %.2f", mediaPares, mediaImpares);

// getch();
}