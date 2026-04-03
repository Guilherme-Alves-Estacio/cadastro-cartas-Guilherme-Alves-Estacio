#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main()
{
  char estado, codigo[4], nomeCidade[50];
  int populacao, pontosTuristicos;
  float area, pib, densidadePopulacional, pibPerCapita;

  char estado2, codigo2[4], nomeCidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2, densidadePopulacional2, pibPerCapita2;

  printf("Digite o estado da carta 1:\n");
  scanf(" %c", &estado);
  printf("Digite o codigo da carta 1:\n");
  scanf("%s", codigo);
  printf("Digite o nome da cidade da carta 1:\n");
  scanf("%s", nomeCidade);
  printf("Digite a populacao da carta 1:\n");
  scanf("%d", &populacao);
  printf("Digite a area da carta 1 (em km²): \n");
  scanf("%f", &area);
  printf("Digite o PIB da carta 1 (em bilhões de reais): \n");
  scanf("%f", &pib);
  printf("Digite o n mero de Pontos Turísticos da carta 1: \n");
  scanf("%d", &pontosTuristicos);

  // Calcular a densidade populacional
  densidadePopulacional = (float)populacao / area;
  // Calcular o PIB per capita
  pibPerCapita = pib / (float)populacao;

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
  printf("PIB per Capita: %.2f bilhões de reais por pessoa\n", pibPerCapita);

  printf("\nDigite o estado da carta 2:\n");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta 2:\n");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade da carta 2:\n");
  scanf("%s", nomeCidade2);
  printf("Digite a populacao da carta 2:\n");
  scanf("%d", &populacao2);
  printf("Digite a area da carta 2:\n");
  scanf("%f", &area2);
  printf("Digite o pib da carta 2:\n");
  scanf("%f", &pib2);
  printf("Digite o pontos turisticos da carta 2:\n");
  scanf("%d", &pontosTuristicos2);

  // Calcular a densidade populacional
  densidadePopulacional2 = (float)populacao2 / area2;
  // Calcular o PIB per capita
  pibPerCapita2 = pib2 / (float)populacao2;

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f bilhões de reais por pessoa\n", pibPerCapita2);

  return 0;
}