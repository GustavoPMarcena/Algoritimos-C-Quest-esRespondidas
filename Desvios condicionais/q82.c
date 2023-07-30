#include <stdio.h>

void main() {
  int nota1, nota2, nota3, mid;
  printf("Digite as tres notas do aluno: ");
  scanf("%d %d %d",&nota1, &nota2, &nota3);
  float media = (nota1 + nota2 + nota3) / 3.0;

  if(media >= 7.0) {
    printf("O aluno esta aprovado");
  } else if ( media >= 4.0 && media < 7.0){
      float mediafinal = (25-(3*media))/2;
      printf("O aluno esta na prova final, e precisa de %f pontos", mediafinal);
  } else{
      printf("O aluno esta reprovado");
  }
  
  //getch();
}