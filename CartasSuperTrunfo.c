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
unsigned long int População1, População2;
float Área1, Área2;
float PIB1, PIB2;
int Pontos1, Pontos2;
float Densidade1, Densidade2;
float Capita1, Capita2;
float media1, media2, media3, media4;
float poder1, poder2;

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

media1 = (População1/Área1);
Densidade1 = media1;
media2 = (PIB1/População1);
Capita1 = media2;


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

media3 = (População2/Área2);
Densidade2 = media3;
media4 = (PIB2/População2);
Capita2 = media4;

  //Área para soma dos atributos:

  int super_poder1 =  População1 + Área1 + PIB1 + Pontos1 + Densidade1 + Capita1;
  int super_poder2 = População2 + Área2 + PIB2 + Pontos2 + Densidade2 + Capita2;

  //Área para comparação das cartas:

  int resultado1 = População1 > População2;
  int resultado2 = Área1 > Área2;
  int resultado3 = PIB1 > PIB2;
  int resultado4 = Pontos1 > Pontos2;
  int resultado5 = Densidade1 < Densidade2;
  int resultado6 = Capita1 > Capita2;

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
  printf("A densidade populacional é: %.2f\n", media1);
  printf("O PIB per capita é: %.2f\n\n", media2);

 //Carta 2:
  printf("\nCarta 2:\n");
  printf("A letra do Estado é: %c\n", Estado2);
  printf("O código do Estado é: %s\n", Código2);
  printf("A sua cidade é: %s\n", Cidade2);
  printf("A população da sua cidade é: %d\n", População2);
  printf("Os quilometros quadrados da sua cidade são: %f\n", Área2);
  printf("O PIB da sua cidade é: %f\n", PIB2);
  printf("A quantidade de pontos turísticos da sua cidade é de: %d\n", Pontos2);
  printf("A densidade populacional é: %.2f\n", media3);
  printf("O PIB per capita é: %.2f\n", media4);

  printf("\n\nComparação entre as cartas:\n");
  printf("População: Carta 1 venceu: %d\n", resultado1);
  printf("Área: Carta 1 venceu: %d\n", resultado2);
  printf("PIB: Carta 1 venceu: %d\n", resultado3);
  printf("Pontos turísticos: Carta 1 venceu: %d\n", resultado4);
  printf("Densidade populacional: Carta 1 venceu: %d\n", resultado5);
  printf("PIB per capita: Carta 1 venceu: %d\n", resultado6);

printf("\n\nSuper Poder das Cartas:\n");
printf("O super poder da carta 1 é: %d\n", super_poder1);
printf("O super poder da carta 2 é: %d\n", super_poder2);

int vencedor = super_poder1 > super_poder2;
printf("\n\nO vencedor é a carta 1? %d\n", vencedor);


return 0;
} 
