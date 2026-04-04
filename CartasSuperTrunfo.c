#include <stdio.h>

/*
TEMA 1
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.
Para cada carta, o usuário deverá fornecer as seguintes informações:

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas,
de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara.
Por exemplo:

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
*/

/*
TEMA 2
Calcular a Densidade Populacional: Divida a população da cidade pela sua área.
O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
Armazene esse valor em uma variável do tipo float.

Calcular o PIB per Capita: Divida o PIB da cidade pela sua população.
O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
Armazene esse valor em uma variável do tipo float.

Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico),
seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade.
Formate os valores de ponto flutuante com duas casas decimais.
*/

/*
TEMA 3
Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores,
mas com uma mudança importante: a população agora deve ser armazenada como unsigned long int para acomodar números maiores.
As demais informações permanecem com os mesmos tipos. Após a leitura dos dados, seu programa deverá:

Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.

Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB,
número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").
Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!

Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder.
Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder),
a carta com o maior valor vence.

Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2),
exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

Exemplo de Saída (após a entrada dos dados):

Comparação de Cartas:
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
*/

int main()
{
  char estado, codigo[4], nomeCidade[50];
  unsigned long int populacao;
  int pontosTuristicos;
  float area, pib, densidadePopulacional, pibPerCapita;

  char estado2, codigo2[4], nomeCidade2[50];
  unsigned long int populacao2;
  int pontosTuristicos2;
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
  printf("Digite o número de Pontos Turísticos da carta 1: \n");
  scanf("%d", &pontosTuristicos);

  // Calcular a densidade populacional
  densidadePopulacional = (float)populacao / area;
  // Calcular o inverso da desidade populacional
  float inversoDensidade = 1.0 / densidadePopulacional;
  // Calcular o PIB per capita
  pibPerCapita = (pib * 1000000000) / (float)populacao;
  // Calcular o Super Poder
  float superPoder1 = populacao + area + pib + pontosTuristicos + pibPerCapita + inversoDensidade;

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
  printf("Digite a area da carta 2 (em km²): \n");
  scanf("%f", &area2);
  printf("Digite o PIB da carta 2 (em bilhões de reais): \n");
  scanf("%f", &pib2);
  printf("Digite o número de Pontos Turísticos da carta 2: \n");
  scanf("%d", &pontosTuristicos2);

  // Calcular a densidade populacional
  densidadePopulacional2 = (float)populacao2 / area2;
  // Calcular o inverso da desidade populacional
  float inversoDensidade2 = 1.0 / densidadePopulacional2;
  // Calcular o PIB per capita
  pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
  // Calcular o Super Poder
  float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

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

  // Comparar as Cartas
  printf("\nComparação de Cartas:\n");

  printf("População: (%s)\n", populacao > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu");
  printf("Área: (%s)\n", area > area2 ? "Carta 1 venceu" : "Carta 2 venceu");
  printf("PIB: (%s)\n", pib > pib2 ? "Carta 1 venceu" : "Carta 2 venceu");
  printf("Pontos Turísticos: (%s)\n", pontosTuristicos > pontosTuristicos2 ? "Carta 1 venceu" : "Carta 2 venceu");
  printf("Densidade Populacional: (%s)\n", densidadePopulacional > densidadePopulacional2 ? "Carta 1 venceu" : "Carta 2 venceu");
  printf("PIB per Capita: (%s)\n", pibPerCapita > pibPerCapita2 ? "Carta 1 venceu" : "Carta 2 venceu");
  printf("Super Poder: (%s)\n", superPoder1 > superPoder2 ? "Carta 1 venceu" : "Carta 2 venceu");

  return 0;
}