#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade[50], estado[50];
    int populacao;
    float area, pib;
    
  // Área para entrada de dados
  printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", estado);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área (km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

  // Área para exibição dos dados da cidade
printf("\n--- Carta da Cidade ---\n");
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
return 0;
} 
