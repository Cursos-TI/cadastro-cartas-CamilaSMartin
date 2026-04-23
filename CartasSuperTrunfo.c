#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char carta[1];
  char cidade[50];
  char estado[80];
  float pib, população, area, pontuação;

  // Área para entrada de dados

  
  printf("Digite o código da Carta: ");
  scanf("%s", &carta);

  printf("Digite o Estado: ");
  scanf("%s", &estado);

  printf("Digite a Cidade: ");
  scanf("%s", &cidade);

  printf("Digite a Área: ");
  scanf("%f", &area);

  printf("Digite a População: ");
  scanf("%f", &população);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite a Pontuação: ");
  scanf("%f", &pontuação);


  printf("Digite o Código da Carta: ");
  scanf("%s", &carta);

  printf("Digite o Estado: ");
  scanf("%s", &estado);

  printf("Digite a Cidade: ");
  scanf("%s", &cidade);

  printf("Digite a Área: ");
  scanf("%f", &area);

  printf("Digite a População: ");
  scanf("%f", &população);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite a Pontuação: ");
  scanf("%f", &pontuação);

  // Área para exibição dos dados da Cidade


  printf("Carta: %s\n", carta);
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade);
  printf("Área %f\n", area);
  printf("População: %f\n", população);
  printf("PIB: %f\n", pib);
  printf("Pontuação: %f\n", pontuação);
  
  printf(" \n");

  printf("Carta: %s\n", carta);
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade);
  printf("Área: %f\n", area);
  printf("População: %f\n", população);
  printf("PIB: %f\n", pib);
  printf("Pontuação: %f\n", pontuação);

  
  return 0;
} 
