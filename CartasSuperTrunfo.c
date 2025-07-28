#include <stdio.h>
int main() {

    char estado;
    char cidade[100];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib_1, pib_2, densidadepop_1, densidadepop_2, pib_per_capita1, pib_per_capita2, super_poder_carta1, super_poder_carta2;

    printf("Carta 1:\n");

    printf("Escolha a inicial de uma letra de 'A' a 'H' de um estado que a represente: ");
    scanf(" %c", &estado);
    printf("Estado: %c\n", estado);

    printf("Escolha sua Cidade: ");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a quantidade de pessoas que residem esta cidade: ");
    scanf("%lu", &populacao1);
    printf("População: %lu\n", populacao1);

    printf("Digite a quantidade de pontos turísticos desta cidade: ");
    scanf("%d", &pontos_turisticos1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("Digite a área em quilômetros quadrado: ");
    scanf("%f", &area1);
    printf("Área: %f\n", area1);

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib_1);
    printf("PIB: %f\n", pib_1);

    densidadepop_1 = populacao1 / area1;
    printf("densidade poulacional: %f\n",densidadepop_1);

    pib_per_capita1 = pib_1 / populacao1;
    printf("PIB per capita: %f\n",pib_per_capita1);

    super_poder_carta1 = (float) populacao1 + area1 + pib_1 + (float) pontos_turisticos1 + pib_per_capita1 + densidadepop_1;
    printf("Super poder Carta 1: %.2f\n",super_poder_carta1);

    printf("\nCarta 2:\n");

    printf("Escolha a inicial de uma letra de 'A' a 'H' de um estado que a represente: ");
    scanf(" %c", &estado);
    printf("Estado: %c\n", estado);

    printf("Escolha sua Cidade: ");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a quantidade de pessoas que residem esta cidade: ");
    scanf("%lu", &populacao2);
    printf("População: %lu\n", populacao2);

    printf("Digite a quantidade de pontos turísticos desta cidade: ");
    scanf("%d", &pontos_turisticos2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    printf("Digite a área em quilômetros quadrado: ");
    scanf("%f", &area2);
    printf("Área: %f\n", area2);

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib_2);
    printf("PIB: %f\n", pib_2);

    densidadepop_2 = populacao2 / area2;
    printf("densidade poulacional: %f\n",densidadepop_2);

    pib_per_capita2 = pib_2 / populacao2;
    printf("PIB per capita: %f\n",pib_per_capita2);


    super_poder_carta2 = populacao2 + area2 + pib_2 +  pontos_turisticos2 + pib_per_capita2 + densidadepop_2;
    printf("Super poder Carta 2: %.2f\n",super_poder_carta2);


    printf("***Disputa****\n");

    




    return 0;
}
