#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
//Carta 1:

char Estado1, Estado2;
char Código1[4], Código2[4];
char Cidade1[20], Cidade2[20];
int População1, População2;
float Área1, Área2;
float PIB1, PIB2;
int Pontos1, Pontos2;

  // Área para entrada de dados

printf("Carta 1:\n");

printf("Digite a letra do seu Estado: ");
scanf(" %c", &Estado1);
printf("Digite o código do seu Estado: ");
scanf("%s", &Código1);
printf("Digite a sua cidade: ");
scanf("%s", &Cidade1);
printf("Digite a quantidade de habitantes na sua cidade: ");
scanf("%d", &População1);
printf("Digite os quilometros quadrados da sua cidade: ");
scanf("%f", &Área1);
printf("Digite o PIB da sua cidade: ");
scanf("%f", &PIB1);
printf("Digite a quantidade de pontos turísticos na sua cidade: ");
scanf("%d", &Pontos1);


printf("\nCarta 2:\n");

printf("Digite a letra do seu Estado: ");
scanf(" %c", &Estado2);
printf("Digite o código do seu Estado: ");
scanf("%s", &Código2);
printf("Digite a sua cidade: ");
scanf("%s", &Cidade2);
printf("Digite a quantidade de habitantes na sua cidade: ");
scanf("%d", &População2);
printf("Digite os quilometros quadrados da sua cidade: ");
scanf("%f", &Área2);
printf("Digite o PIB da sua cidade: ");
scanf("%f", &PIB2);
printf("Digite a quantidade de pontos turísticos na sua cidade: ");
scanf("%d", &Pontos2);


  // Área para exibição dos dados da cidade

  printf("\n\nInformações das Cartas 1 e 2:\n");

  //Carta 1:

  printf("\n\nCarta 1:\n");
  printf("A letra do Estado é: %c\n", Estado1);
  printf("O código do Estado é: %s\n", Código1);
  printf("A sua cidade é: %s\n", Cidade1);
  printf("A população da sua cidade é: %d\n", População1);
  printf("Os quilometros quadrados da sua cidade são: %f\n", Área1);
  printf("O PIB da sua cidade é: %f\n", PIB1);
  printf("A quantidade de pontos turísticos da sua cidade é de: %d\n", Pontos1);

 //Carta 2:
 printf("\nCarta 2:\n");
  printf("A letra do Estado é: %c\n", Estado2);
  printf("O código do Estado é: %s\n", Código2);
  printf("A sua cidade é: %s\n", Cidade2);
  printf("A população da sua cidade é: %d\n", População2);
  printf("Os quilometros quadrados da sua cidade são: %f\n", Área2);
  printf("O PIB da sua cidade é: %f\n", PIB2);
  printf("A quantidade de pontos turísticos da sua cidade é de: %d\n", Pontos2);



return 0;
} 
