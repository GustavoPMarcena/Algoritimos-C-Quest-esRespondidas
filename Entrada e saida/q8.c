#include<stdio.h>
#include<math.h>
void main(){
  float temperatura;
  printf("Informe a temperatura em Celsius: \n");
  scanf("%f",&temperatura);
  float temp_Kelvin = temperatura + 273;
  float temp_Fare = (temperatura * 9/5) + 32;
  printf("Temperatura: %.2f, em Kelvin: %.2f, Fahrenheit: %.2f", temperatura, temp_Kelvin, temp_Fare);
  //getch();
  
}