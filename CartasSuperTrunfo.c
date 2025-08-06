#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1;
    char cidade1[100];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib_1, densidadepop_1, pib_per_capita1;
    double super_poder_carta1;

    // Variáveis Carta 2
    char estado2;
    char cidade2[100];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib_2, densidadepop_2, pib_per_capita2;
    double super_poder_carta2;

    printf("**** Cadastro de Cartas ****\n\n");

    printf("Carta 1:\n");
    printf("Escolha a inicial de uma letra de 'A' a 'H' de um estado que a represente: ");
    scanf(" %c", &estado1);

    printf("Escolha sua Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a quantidade de pessoas que residem esta cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turísticos desta cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade (em bilhões): ");
    scanf("%f", &pib_1);

    densidadepop_1 = populacao1 / area1;
    pib_per_capita1 = (pib_1 * 1000000000.0) / populacao1;

    super_poder_carta1 = (double)populacao1 + (double)area1 + (double)pib_1 + 
                         (double)pontos_turisticos1 + (double)pib_per_capita1 + 
                         (1.0 / (double)densidadepop_1);

    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib_1);
    printf("Densidade populacional: %.2f\n", densidadepop_1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super poder Carta 1: %.2f\n", super_poder_carta1);

    printf("\nCarta 2:\n");
    printf("Escolha a inicial de uma letra de 'A' a 'H' de um estado que a represente: ");
    scanf(" %c", &estado2);

    printf("Escolha sua Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a quantidade de pessoas que residem esta cidade: ");
    scanf("%lu", &populacao2); // Correção: %lu

    printf("Digite a quantidade de pontos turísticos desta cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade (em bilhões): ");
    scanf("%f", &pib_2);

    densidadepop_2 = populacao2 / area2;
    pib_per_capita2 = (pib_2 * 1000000000.0) / populacao2;

    super_poder_carta2 = (double)populacao2 + (double)area2 + (double)pib_2 +
                         (double)pontos_turisticos2 + (double)pib_per_capita2 +
                         (1.0 / (double)densidadepop_2);

    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib_2);
    printf("Densidade populacional: %.2f\n", densidadepop_2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super poder Carta 2: %.2f\n", super_poder_carta2); // Correção no texto

    printf("\n*** Disputa ***\n");

    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2) ? 1 : 0);

    printf("Área: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           (area1 > area2) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n",
           (pib_1 > pib_2) ? 1 : 2,
           (pib_1 > pib_2) ? 1 : 0);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2,
           (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    printf("Densidade Populacional (menor é melhor): Carta %d venceu (%d)\n",
           (densidadepop_1 < densidadepop_2) ? 1 : 2,
           (densidadepop_1 < densidadepop_2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pib_per_capita1 > pib_per_capita2) ? 1 : 2,
           (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (super_poder_carta1 > super_poder_carta2) ? 1 : 2,
           (super_poder_carta1 > super_poder_carta2) ? 1 : 0);

    printf("*** Fim de jogo ***\n");

    return 0;
}
