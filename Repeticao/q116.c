#include <stdio.h>
#include <stdlib.h>
const int pessoas = 5;
void main() {
  int k, idade, mulheresIdadeC = 0;
  char nome[50], sexo;
  for(k=1; k<=pessoas ;k++){
    printf("Insira o nome da pessoa: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("Insira o sexo da pessoa(f, m): ");
    scanf("%s", &sexo);
    printf("Insira a idade da pessoa: ");
    scanf("%d", &idade);
    switch(sexo){
      case 'f': 
        if(idade >= 18 && idade <= 21){
          mulheresIdadeC++;
        }
    }
  }
  printf("%d", mulheresIdadeC);
  float percentual = (100*mulheresIdadeC)/pessoas;
  printf("O percentual de mulheres com mais de 18 e menos de 21 anos eh igual a %.2f", percentual);
  
  
  
  
  //getch();
  
}
