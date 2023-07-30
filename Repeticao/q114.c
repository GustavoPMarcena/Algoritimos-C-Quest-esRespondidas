#include <stdio.h>

void main() {
  int k, m, n, cont = 0;
  printf("Insira dois numeros m e n: ");
  scanf("%d %d", &m, &n);
  int num = 1;
  for(k=1; k<=n ;k++){
    num *= m;
  }
  printf("%d elevado a %d eh igual a: %d", m,n,num);
  
  
  //getch();
  
}
