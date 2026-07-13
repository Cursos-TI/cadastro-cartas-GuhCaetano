#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nomeCidade1[50], nomeCidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  float densidadePopulacional1, densidadePopulacional2;
  float pibPerCapita1, pibPerCapita2;
  float superPoder1, superPoder2;
  int pontosTuristicos1, pontosTuristicos2;
  int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos;
  int resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoSuperPoder;

  // Área para entrada de dados
  printf("Cadastro da Carta 1\n");

  printf("Digite o estado da carta 1 (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta 1 (ex: A01): ");
  scanf("%3s", codigo1);

  printf("Digite o nome da cidade da carta 1: ");
  scanf(" %49[^\n]", nomeCidade1);

  printf("Digite a populacao da carta 1: ");
  scanf("%lu", &populacao1);

  printf("Digite a area da carta 1: ");
  scanf("%f", &area1);

  printf("Digite o PIB da carta 1 em bilhoes de reais: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos da carta 1: ");
  scanf("%d", &pontosTuristicos1);

  printf("\nCadastro da Carta 2\n");

  printf("Digite o estado da carta 2 (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta 2 (ex: B01): ");
  scanf("%3s", codigo2);

  printf("Digite o nome da cidade da carta 2: ");
  scanf(" %49[^\n]", nomeCidade2);

  printf("Digite a populacao da carta 2: ");
  scanf("%lu", &populacao2);

  printf("Digite a area da carta 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB da carta 2 em bilhoes de reais: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos da carta 2: ");
  scanf("%d", &pontosTuristicos2);

  // Calcula as propriedades adicionais do nivel aventureiro
  densidadePopulacional1 = populacao1 / area1;
  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
  pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
  superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
  superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

  // Compara as cartas atributo por atributo
  resultadoPopulacao = populacao1 > populacao2;
  resultadoArea = area1 > area2;
  resultadoPib = pib1 > pib2;
  resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
  resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
  resultadoSuperPoder = superPoder1 > superPoder2;

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  printf("\nComparacao de Cartas:\n");
  printf("Populacao: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
  printf("Area: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
  printf("PIB: Carta %d venceu (%d)\n", resultadoPib ? 1 : 2, resultadoPib);
  printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidadePopulacional ? 1 : 2, resultadoDensidadePopulacional);
  printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPibPerCapita ? 1 : 2, resultadoPibPerCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);

  return 0;
}
