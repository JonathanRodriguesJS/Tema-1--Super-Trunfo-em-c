#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    
    
    // Captura dos dados da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (01-04): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Captura dos dados da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (01-04): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // calcula a densidade populacional e o pib percapita das cartas
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1*1000000000 / populacao1;
    
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2*1000000000 / populacao2;

    // adiciona super poder.
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1/densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1/densidade2);

    // comparar atributos das cartas cadastradas.
    int resultPopulacao = populacao1 > populacao2;
    int resultArea = area1 > area2;
    int resultPib = pib1 > pib2;
    int resultPontoTuristico = pontosTuristicos1 > pontosTuristicos2;
    int resultPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int resultSuperPoder = superPoder1 > superPoder2;
    int resultDensidade = densidade1 < densidade2;
    
    // Exibição dos dados cadastrados
    printf("\n===============================\n");
    printf("Cartas cadastradas:\n\n");
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("SUPER-PODER: %.2f \n", superPoder1);
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("SUPER-PODER: %.2f \n", superPoder2);
    printf("\n");

    // exibir resultado da comparação.
    printf("Comparação de Cartas:\n");
    printf("1 - Carta 1 venceu. | 2 - Carta 2 venceu.\n");
    printf("População: (%d)\n", resultPopulacao);
    printf("Área: (%d)\n", resultArea);
    printf("PIB: (%d)\n", resultPib);
    printf("Pontos Turísticos: (%d)\n", resultPontoTuristico);
    printf("Densidade Populacional: (%d)\n", resultDensidade);
    printf("PIB per Capita: (%d)\n", resultPibPerCapita);
    printf("Super Poder: (%d)\n", resultSuperPoder);
        
    
    return 0;
}