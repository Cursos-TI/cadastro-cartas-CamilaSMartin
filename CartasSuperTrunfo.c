#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char carta1[1], carta2[3];
  char cidade1[50], cidade2[50];
  char estado1[80], estado2[80];
  float pib1, pib2, população1, população2, area1, area2, pontuação1, pontuação2;

  // Área para entrada de dados

  
  printf("Digite o código da Carta: ");
  scanf("%s", &carta1);

  printf("Digite o Estado: ");
  scanf("%s", &estado1);

  printf("Digite a Cidade: ");
  scanf("%s", &cidade1);

  printf("Digite a Área: ");
  scanf("%f", &area1);

  printf("Digite a População: ");
  scanf("%f", &população1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite a Pontuação: ");
  scanf("%f", &pontuação1);

  printf(" \n");

  printf("Digite o Código da Carta: ");
  scanf("%s", &carta2);

  printf("Digite o Estado: ");
  scanf("%s", &estado2);

  printf("Digite a Cidade: ");
  scanf("%s", &cidade2);

  printf("Digite a Área: ");
  scanf("%f", &area2);

  printf("Digite a População: ");
  scanf("%f", &população2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite a Pontuação: ");
  scanf("%f", &pontuação2);

  // Área para exibição dos dados da Cidade

  printf(" \n");

  printf("Carta: %s\n", carta1);
  printf("Estado: %s\n", estado1);
  printf("Cidade: %s\n", cidade1);
  printf("Área %f\n", area1);
  printf("População: %f\n", população1);
  printf("PIB: %f\n", pib1);
  printf("Pontuação: %f\n", pontuação1);
  
  printf(" \n");

  printf("Carta: %s\n", carta2);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", cidade2);
  printf("Área %f\n", area2);
  printf("População: %f\n", população2);
  printf("PIB: %f\n", pib2);
  printf("Pontuação: %f\n", pontuação2);


  
  return 0;
} 
