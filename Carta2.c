#include <stdio.h>
int main (){

float populaçao = 2817000;
float pib = 244000000000 ;
float area = 5761 ;
char estado[50] = "B";
char codigo [50] = "A02";
char cidade [50] = "Brasília";
int turismo = 17;
float Densidade = populaçao / area;
float Capital = pib / populaçao;

printf("Estado: %s\n Codigo: %s\n", estado, codigo);
printf("Nome da cidade: %s\n Numero de habitantes %2.f Milhões\n", cidade, populaçao);
printf("Área da cidade: %.2f KM\nPIB: %.f Bilhões\n", area, pib);
printf("Quantidade de Pontos turísticos: %d\n", turismo);
printf("Densidade Populacional: %.2f Hab/KM\nPIB por Capital: %4.f milhões\n", Densidade, Capital);





}
