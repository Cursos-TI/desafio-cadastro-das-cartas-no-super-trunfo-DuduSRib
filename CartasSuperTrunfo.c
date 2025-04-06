#include <stdio.h>

int main()
{
    // Declaração das variáveis
    char estado1, estado2;
    char codigo_carta1[5], codigo_carta2[5];
    char nome_cidade1[100], nome_cidade2[100];
    float populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidadepp1, pibpc1, densidadepp2, pibpc2;
    int pontos_turisticos1, pontos_turisticos2;

    // Coletando dados da primeira carta
    printf("Informe os dados da Carta 1:\n");
    printf("Estado (de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo_carta1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade1);
    printf("População da cidade: ");
    scanf("%f", &populacao1);
    printf("Área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // calculando valores da carta1
    densidadepp1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;

    // Coletando dados da segunda carta
    printf("\nInforme os dados da Carta 2:\n");
    printf("Estado (de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo_carta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade2);
    printf("População da cidade: ");
    scanf("%f", &populacao2);
    printf("Área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // calculando valores da carta2
    densidadepp2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;

    // Exibindo os dados da Carta 1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %f\n", populacao1);
    printf("Área (em km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepp1);
    printf("PIB per Capita: %.2f\n", pibpc1);

    // Exibindo os dados da Carta 2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %f\n", populacao2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepp2);
    printf("PIB per Capita: %.2f\n", pibpc2);

    return 0;
}
