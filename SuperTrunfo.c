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
    scanf("%3s", estado);

    printf("Digite o codigo da carta:\n");
    scanf("%49s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", cidade);

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

    int opçao, opçao2;
    float valor1, valor2, valor11, valor22;
    float soma1, soma2;
    printf("Menu de comparação\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Turismo\n");
    printf("5 - Densidade\n");
    printf("6 - Capital\n");
    printf("7 - superpoder\n");
    printf("Digite a primeiro Atributo;\n");
    scanf("%d", &opçao);

 printf("Digite o segundo atributo:\n");
 scanf("%d", &opçao2);
    printf("X1 Dos crias\n");
switch (opçao) {
case 1:   
valor1 = populacao;
valor2 = populacao2;
break; 
case 2:
valor1 = area;
valor2 = area2;
break;
case 3:
valor1 = pib;
valor2 = pib2;
break;
case 4:
valor1 = turismo;
valor2 = turismo2;
break;
case 5:
valor1 = densidade;
valor2 = densidade2;
break;
case 6:
valor1 = capital;
valor2 = capital2;
break;
case 7:
valor1 = SuperPoder1;
valor2 = SuperPoder2;
break;
default:
printf("opçao invalida\n");}

switch (opçao2)
{
case 1:
    valor11 = populacao;
    valor22 = populacao2;
    break;
case 2:
valor11 = area;
valor22 = area2;
break;
case 3:
valor11 = pib;
valor22 = pib2;
break;
case 4:
valor11 = turismo;
valor22 = turismo2;
break;
case 5:
valor11 = densidade;
valor22 = densidade2;
break;
case 6:
valor11 = capital;
valor22 = capital2;
break;
case 7:
valor11 = SuperPoder1;
valor22 = SuperPoder2;
    break;

default:
printf("Opçao invalida\n");
    break;
}
printf("Comparação de atributos\n");
 printf("atributo 1: %s\n", (opçao == 1) ? "população" : (opçao == 2) ? "area" : (opçao == 3) ? "pib" : (opçao == 4) ? "turismo" : (opçao == 5) ? "densidade" : "capital");
 printf("Carta 1 - %s: %f\n", cidade, valor1);
printf("Carta 2 - %s: %f\n", cidade2, valor2);
printf("Atributo 2: %s\n", (opçao2 == 1) ? "populaçao" : (opçao2 == 2) ? "area" : (opçao2 == 3) ? "pib" : (opçao2 == 4) ? "turismo" : (opçao2 == 5) ? "densidade" : "capital");
printf("Carta 1 - %s: %f\n", cidade, valor11);
printf("Carta 2 - %s: %f\n", cidade2 ,valor22); 

soma1 = valor1 + valor11;
soma2 = valor2 + valor22;

printf("Soma de atributos\n");
printf("Carta 1 - %s: %f\n", cidade, soma1);
printf("Carta 2 - %s; %f\n", cidade2, soma2);

if (soma1 > soma2)
{
    printf("A carta vencedora é: %s\n", cidade);
}else if (soma1 < soma2){
    printf("A carta vencedora é: %s\n", cidade2);
} else
{
    printf("Empate\n");
}

}
