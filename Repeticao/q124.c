#include <stdio.h>
const int numPares = 6;
void main() {
  int k = 1, g, num = 1, primo1 = 0, primo2 = 0, cont = 0;
  while(k <= numPares){
    for(g=1; g<=num; g++){
      if (num%g == 0){
        cont++;
      }
    }
    if (primo1 != 0 && primo2!=0){
      if(primo2 - primo1 == 2){
        printf(" %d %d |", primo1, primo2);
        k++;
        primo1 = primo2; 
        primo2 = 0;
      } else{
        primo1 = primo2;
        primo2 = 0;
      }
    }
    if(cont == 2){
      if(primo1 == 0){
        primo1 = num;
      } else{
        primo2 = num; 
      }
    }
    cont = 0;
    num++;
  }

  
  
  
  //getch();
  
}
