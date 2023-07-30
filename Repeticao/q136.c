#include <stdio.h>
#include <math.h>
int main() {
  int k, num, binario = 0, quantidadeDigitos=0, condicional = 0, numero;
  printf("Insira um numero: ");
  scanf("%d",&num);
  numero = num;
  while(num!=0){
    binario += (num%2) * (pow(10, condicional));
    num = num/2;
    condicional++;
  }
  printf("O numero %d em binario eh %d",numero,binario);

// getch();
}