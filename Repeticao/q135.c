#include <stdio.h>
const int eleitores = 20;
int main() {
  int k, voto, joaoB = 0,zeCaminhao = 0,mariaBodega = 0, ana = 0, nulos=0;
  for(k=1;k<=eleitores;k++){
    printf("Insira um voto: ");
    scanf("%d",&voto);
    switch(voto){
      case 1: joaoB++;break;
      case 2: zeCaminhao++;break;
      case 3: mariaBodega++;break;
      case 4: ana++;break;
      default: nulos++;break;
    }
  }
  float percentualJoao = (joaoB*100)/eleitores;
  float percentualze = (zeCaminhao*100)/eleitores;
  float percentualmaria = (mariaBodega*100)/eleitores;
  float percentualana = (ana*100)/eleitores;
  float percentualnulos = (nulos*100)/eleitores;
  printf("A votação ficou definida dessa forma:\nJoao Borracheiro: %.2f\nZe do caminhao: %.2f\nMaria da bodega: %.2f\nAna: %.2f\nNulos: %.2f",percentualJoao,percentualze,percentualmaria,percentualana,percentualnulos);

  // getch();
}