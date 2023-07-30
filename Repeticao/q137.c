#include <stdio.h>

int main() {
  int k=1, num, binario, quantidadeDigitos
  =0;
  printf("Insira um numero: ");
  scanf("%d",&num);
  int numero = num;
  do{
    quantidadeDigitos++;
    numero /= 10; 
  } while(numero!=0);
  printf("%d tem %d digitos",num,quantidadeDigitos);

// getch();
}