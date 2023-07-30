#include <stdio.h>
const int pessoas = 20;
void main() {
  int k;
  float peso, altura;
  int acimaPeso = 0, abaixoPeso = 0, pesoAdequado = 0;
  for(k=1; k<=pessoas; k++){
    printf("Informe o peso (em kg) e a altura (em metros) de uma pessoa: ");
    scanf("%f %f",&peso, &altura);

    int imc = peso/(altura*altura);
    if(imc < 18.5){
      abaixoPeso++;
    } else if (imc > 25.9){
      acimaPeso++;
    } else {
      pesoAdequado++;
    }
  }
  printf("Os dados coletados referem ao seguinte:\nPessoas abaixo do peso: %d\nPessoas acima do peso: %d\n Pessoas no peso ideal: %d", abaixoPeso,acimaPeso, pesoAdequado);
  //getch();
  
}
