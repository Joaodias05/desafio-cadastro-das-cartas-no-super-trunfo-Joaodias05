#include <stdio.h>
int main (){

float população = 5370000 ;
int turismo = 265 ;
float pib = 23550000000 ;
float area = 95.346;
char estado [50] = "A" ;
char codigo [50] = "A01";
char cidade [50] = "Florianópolis";
float densidade = população / area;
 float capital = pib / população;
printf("Estado: %s\n codigo: %s\n", estado, codigo);
printf("Nome da cidade: %s\n Numero de habitantes: %.2f \n", cidade, população);
printf("Área da cidade: %.2f km\nPIB: %f\n", area, pib);
printf("Quantidade de pontos turísticos: %d\n", turismo);
printf("Densidade: %.3f Hab/Km\nCapital: %.2f de reais\n"), densidade, capital;

}



