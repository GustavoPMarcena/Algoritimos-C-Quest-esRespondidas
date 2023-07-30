#include <stdio.h>

void main() {
  int idade;
  printf("Digite a idade de uma pessoa: ");
  scanf("%d",&idade);
  if (idade <= 12){
    printf("A pessoa eh crianca");
  } else if(idade >= 13 && idade <= 17){
    printf("A pessoa eh adolescente");
  } else if(idade >= 18 && idade <=59){
    printf("A pessoa eh adulta");
  } else if(idade >=60){
    printf("A pessoa eh idosa");
  } else{
    printf("Valor incorreto");
  }
  //getch();
}