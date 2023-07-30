#include<stdio.h>
#include<math.h>
#include<string.h>
const int dias = 180;

void main(){
  int numPedreiros, numAjudantes;
  float valorDiaria, valorAjudante;
  printf("Digite a quantidade de pedreiros e ajudantes:");
  scanf("%d %d",&numPedreiros, &numAjudantes);
  printf("Digite a diaria do pedreiro:");
  scanf("%f",&valorDiaria);
  valorAjudante = valorDiaria / 2;
  float DinheiroGasto = 180 * ((valorDiaria * numPedreiros) + (numAjudantes * valorAjudante));
  printf("O dinheiro gasto nos 180 dias foi de %.2f reais", DinheiroGasto);
  
  //getch();
  
}