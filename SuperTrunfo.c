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

    printf("População: %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2) ? 1 : 0 );
    printf("PIB: %d venceu (%d)\n", (pib > pib2) ? 1 : 2, (pib > pib2) ? 1 : 0);
    printf("Área: %d venceu (%d)\n", (area > area2) ? 1 : 2,(area > area2)? 1 : 0 );
    printf("Turismo: %d venceu (%d)\n", (turismo > turismo2)? 1 : 2, (turismo> turismo2)? 1 : 0);
    printf("Densidade %d venceu (%d)\n", (densidade > densidade2)? 1 : 2, (densidade > densidade2)? 1 : 0);
    printf("Capital: %d venceu (%d)\n",(capital > capital2)? 1 : 2, (capital > capital2)? 1 : 0);
    printf("SuperPoder: %d venceu (%d)\n", (SuperPoder1 > SuperPoder2)? 1 : 2, (SuperPoder1 > SuperPoder2)? 1 : 0);


}

