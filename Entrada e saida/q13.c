#include<stdio.h>
#include<math.h>
void main(){
  float kb, bits, bytes, mb, gb;
  printf("Informe o valor em KB: \n");
  scanf("%f",&kb);
  bits = kb * 8000;
  bytes = kb * 1000;
  mb = kb / 1000;
  gb = kb / 1000000;
  printf("%.2f KB equivale a %.2f bits, %.2f bytes, %f MB, %f gb", kb, bits, bytes, mb, gb);
  //getch();
  
}