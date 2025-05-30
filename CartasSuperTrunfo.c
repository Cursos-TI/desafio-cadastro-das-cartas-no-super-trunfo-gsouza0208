#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigodacarta1 [10], codigodacarta2 [10];
    char nomedacidade1 [30], nomedacidade2 [30];
    int populacao1, populacao2;
    float areadacidade1, areadacidade2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Carta 1

    printf("Cadastro Carta 1: \n");

    printf("Digite o Código do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Digite o Número da População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &areadacidade1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontosturisticos1);

    // Carta 2

    printf("Cadastro Carta 2: \n");

    printf("Digite o Código do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Digite o Número da População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &areadacidade2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Visualização Carta 1

    printf("Carta 1: \n");
    printf("Código do Estado: %c \n", estado1);
    printf("Código da Carta: %s \n", codigodacarta1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área da Cidade (em km²): %.2f \n", areadacidade1);
    printf("PIB da Cidade: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    // Visualização Carta 2

    printf("Carta 2: \n");
    printf("Código do Estado: %c \n", estado2);
    printf("Código da Carta: %s \n", codigodacarta2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área da Cidade (em km²): %.2f \n", areadacidade2);
    printf("PIB da Cidade: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    return 0;
    
}