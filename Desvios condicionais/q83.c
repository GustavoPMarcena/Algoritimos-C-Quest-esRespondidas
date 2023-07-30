#include <stdio.h>

void main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d",&num);
  switch(num){
    case 1: printf("um"); break;
    case 2: printf("dois"); break;
    case 3: printf("tres"); break;
    case 4: printf("quatro"); break;
    case 5: printf("cinco"); break;
    case 6: printf("seis"); break;
    case 7: printf("sete"); break;
    case 8: printf("oito"); break;
    case 9: printf("nove"); break;
    case 10: printf("dez"); break;
  }
  //getch();
}