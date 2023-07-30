#include <stdio.h>

void main() {
    int horaSaida, minSaida;
    int manipulador;
    printf("Informe a hora de saida e os minutos: ");
    scanf("%d %d", &horaSaida, &minSaida);

    int SousaH = horaSaida + ((minSaida + 50) / 60);
    int SousaM = (minSaida + 50) % 60;

    int PatosH = horaSaida + 3 + ((minSaida + 10) / 60);
    int PatosM = (minSaida + 10) % 60;

    int CampH = horaSaida + 6;
    int CampM = minSaida;

    int JoaoH = horaSaida + 8 + ((minSaida + 20) / 60);
    int JoaoM = (minSaida + 20) % 60;
  
    printf("Ele saiu de cajazeiras e chegou em:\n Sousa as %d : %d \n Patos as %d : %d \n Campinas as %d : %d \n Joao pessoa as %d : %d", SousaH, SousaM, PatosH, PatosM, CampH, CampM, JoaoH, JoaoM);
   
    //getch();
}