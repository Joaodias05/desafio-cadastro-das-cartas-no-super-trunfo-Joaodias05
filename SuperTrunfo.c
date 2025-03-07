#include <stdio.h>

int main() {
    // Carta 1
    unsigned long int populacao;
    int turismo;
    float pib;
    float area;
    char estado[4];
    char codigo[50];
    char cidade[50];
    float densidade;
    float capital;
    float SuperPoder1;

    // Carta 2
    unsigned long int populacao2;
    float pib2;
    float area2;
    char estado2[4];
    char codigo2[50];
    char cidade2[50];
    int turismo2;
    float densidade2;
    float capital2;
    float SuperPoder2;


    printf("Digite o estado da carta (A-H):\n");
    scanf("%s", estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &turismo);

    densidade = populacao / area;
    capital = pib / populacao;
    SuperPoder1 = populacao + pib + area + turismo + densidade + capital;

    printf("densidade: %f\n", densidade);
    printf("capital: %f\n", capital);
    printf("superpoder: %f\n", SuperPoder1);

    printf("Digite o estado da carta 2 (A-H):\n");
    scanf("%3s", estado2);

    printf("Digite o codigo da carta 2:\n");
    scanf("%49s", codigo2);

    printf("Digite o nome da cidade 2:\n");
    scanf("%49s", cidade2);

    printf("Digite a população da cidade 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos 2:\n");
    scanf("%d", &turismo2);

    densidade2 = populacao2 / area2;
    capital2 = pib2 / populacao2;
    SuperPoder2 = populacao2 + pib2 + area2 + turismo2 + densidade2 + capital2;

    printf("densidade2: %f\n", densidade2);
    printf("capital2: %f\n", capital2);
    printf("superpoder2: %f\n", SuperPoder2);
    printf("X1 Dos crias");

   printf("ATRIBUTO POPULAÇÃO*****\n");
    printf("Carta 1 - %s: %lu\n", cidade, populacao);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    
    if (populacao > populacao2) {
        printf("população de %s é maior\n", cidade);
    } else {
        printf("população de %s é maior\n", cidade2);
    }

printf("ATRIBUTO ÁREA******\n");
printf("Carta 1 - %s: %f\n", cidade, area);
printf("Carta 2 - %s: %f\n", cidade2, area2);

if (area > area2)
{
    printf("Área de %s é maior\n", cidade);
}else{
  printf("Área de %s é maior\n", cidade2);
}

printf("ATRIBUTO PIB******\n");
printf("Carta 1 - %s: %f\n", cidade, pib);
printf("Carta 2 - %s: %f\n", cidade2, pib2);

if (pib > pib2)
{
    printf("PIB de %s é maior\n", cidade);

}else{
    printf("PIB de %s é maior\n", cidade2);
}
printf("ATRIBUTO TURISMO******\n");
printf("Carta 1 - %s: %d\n", cidade, turismo);
printf("Carta 2 - %s: %d\n", cidade2, turismo2);

if (turismo > turismo2)
{
    printf("Turismo de %s é maior\n", cidade);
}else{
    printf("Turismo de %s é maior\n", cidade2);
}
printf("ATRIBUTO DENSIDADE******\n");
printf("Carta 1 - %s: %f\n", cidade, densidade);
printf("Carta 2 - %s: %f\n", cidade2, densidade2);
if (densidade < densidade2)
{
    printf("Densidade de %s é maior\n", cidade);

}else{
    printf("Densidade de %s é maior\n", cidade2);
}
printf("ATRIBUTO CAPITAL******\n");
printf("Carta 1 - %s: %f\n", cidade, capital);
printf("Carta 2 - %s: %f\n", cidade2);

if (capital > capital2)
{
    printf("Capital de %s é maior\n", cidade);
}else{
    printf("Capital de %s é maior\n", cidade2);
}
printf("SUPER_PODER*********\n");
printf("Carta 1 - %s: %f\n", cidade, SuperPoder1);
printf("Carta 2 - %s: %f\n", cidade2, SuperPoder2);
if (SuperPoder1 > SuperPoder2)
{
    printf("SuperPoder de %s é maior\n", cidade);

}else{
    printf("SuperPoder de %s é maior\n", cidade2);
}
}

}

