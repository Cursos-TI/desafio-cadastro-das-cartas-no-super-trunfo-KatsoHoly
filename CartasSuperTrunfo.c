#include <stdio.h>

int main() {
    char estado1, estado2; // Primeira letra dos estados
    char codigoCarta1[20], codigoCarta2[20]; // Códigos das cartas
    char nomeCidade1[20], nomeCidade2[20]; // Nomes das cidades
    float area1, area2; // Áreas das cidades em km²
    float pib1, pib2; // PIB das cidades
    int turismo1, turismo2; // Número de pontos turísticos
    int populacao1, populacao2; // População das cidades

    printf("Seja bem-vindo(a) ao jogo Super Trunfo de Cartas.\n");
    printf("Para jogar, você deve preencher os dados de cada carta do jogo.\n");
    printf("Vamos começar?\n");
    

    printf("|______________________________________________________________|\n");
    printf("|              PREENCHA OS DADOS DA PRIMEIRA CARTA             |\n");
    printf("|______________________________________________________________|\n");
    printf("Informe a primeira letra do estado 1: "); // Exemplo: 'B' para Bahia
    scanf(" %c", &estado1);

    printf("Informe o código da carta 1: "); // Exemplo: 'B01'
    scanf("%s", codigoCarta1);

    printf("Informe o nome da cidade 1: "); // Exemplo: Manaus
    scanf("%s", nomeCidade1);

    printf("Informe o tamanho da população da cidade 1: "); // Exemplo 1288767
    scanf("%d", &populacao1);

    printf("Informe o tamanho da área da cidade 1: "); //Exemplo: 158.7
    scanf("%f", &area1);

    printf("Informe o valor do PIB da cidade 1: "); // Exemplo: 177.7
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos da cidade 1: "); //Exemplo: 200
    scanf("%d", &turismo1);

    // Exibindo dados do Estado 1
    printf("|______________________________________________________________|\n");
    printf("|                 INFORMAÇÕES DA PRIMEIRA CARTA                |\n");
    printf("|______________________________________________________________|\n");
    
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turismo1);




    printf("|______________________________________________________________|\n");
    printf("|              PREENCHA OS DADOS DA SEGUNDA CARTA              |\n");
    printf("|______________________________________________________________|\n");
    printf("\nInforme a primeira letra do estado 2: "); // Exemplo: 'A' para Amazonas
    scanf(" %c", &estado2);

    printf("Informe o código da carta 2: "); // Exemplo: 'A01'
    scanf("%s", codigoCarta2);

    printf("Informe o nome da cidade 2: "); // Exemplo: Salvador
    scanf("%s", nomeCidade2);

    printf("Informe o tamanho da população da cidade 2: "); // Exemplo: 144418
    scanf("%d", &populacao2);

    printf("Informe o tamanho da área da cidade 2: "); // Exemplo: 120.7
    scanf("%f", &area2);

    printf("Informe o valor do PIB da cidade 2: "); // Exemplo: 330.9
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos da cidade 2: "); // Exemplo: 150
    scanf("%d", &turismo2);

    // Exibindo dados do Estado 2
    printf("|______________________________________________________________|\n");
    printf("|                 INFORMAÇÕES DA SEGUNDA CARTA                 |\n");
    printf("|______________________________________________________________|\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turismo2);
    

    return 0;
}