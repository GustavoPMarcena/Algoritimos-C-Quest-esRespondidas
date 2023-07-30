#include <stdio.h>

void main() {
  int k, num, ultTermo = 0, fibo = 1;
  printf("Insira um numero n: ");
  scanf("%d", &num);

  for(k=1;k<num;k++){
    fibo += ultTermo;
    ultTermo = fibo - ultTermo;
  }
  printf("O %d da sequencia de fibonacci eh %d", num, fibo);
  
  //getch();
  
}
