#include <stdio.h>

void main() {
  int k = 2, num, cont;
  printf("Insira um número inteiro: ");
  scanf("%d", &num);
  while (num > 1) {
    if (num % k == 0) {
      printf("%d ", k);
      num /= k;
    } else {
      k++;
    }
  }
}