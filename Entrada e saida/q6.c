#include<stdio.h>
#include<math.h>
void main(){
  int num;
  printf("Informe o numero: \n");
  scanf("%d",&num);
  int sucessor = num + 1;
  int antecessor = num - 1;
  printf("O antecessor de %d eh %d, e seu sucessor eh %d", num, antecessor, sucessor);
  //getch();
  
}