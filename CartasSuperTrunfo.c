#include <stdio.h>
int main() {

    char estado;
    char cidade[100];
    int populacao, pontos_turisticos;
    float area, pib, densidadepop, pib_per_capita;

    printf("Carta 1:\n");

    printf("Escolha a inicial de uma letra de 'A' a 'H' de um estado que a represente: ");
    scanf(" %c", &estado);
    printf("Estado: %c\n", estado);

    printf("Escolha sua Cidade: ");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a quantidade de pessoas que residem esta cidade: ");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Digite a quantidade de pontos turísticos desta cidade: ");
    scanf("%d", &pontos_turisticos);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    printf("Digite a área em quilômetros quadrado: ");
    scanf("%f", &area);
    printf("Área: %f\n", area);

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib);
    printf("PIB: %f\n", pib);

    densidadepop = populacao / area;
    printf("densidade poulacional: %f\n",densidadepop);

    pib_per_capita = pib / populacao;
    printf("PIB per capita: %f\n",pib_per_capita);

    printf("\nCarta 2:\n");

    printf("Escolha a inicial de uma letra de 'A' a 'H' de um estado que a represente: ");
    scanf(" %c", &estado);
    printf("Estado: %c\n", estado);

    printf("Escolha sua Cidade: ");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a quantidade de pessoas que residem esta cidade: ");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Digite a quantidade de pontos turísticos desta cidade: ");
    scanf("%d", &pontos_turisticos);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    printf("Digite a área em quilômetros quadrado: ");
    scanf("%f", &area);
    printf("Área: %f\n", area);

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib);
    printf("PIB: %f\n", pib);

    densidadepop = populacao / area;
    printf("densidade poulacional: %f\n",densidadepop);

    pib_per_capita = pib / populacao;
    printf("PIB per capita: %f\n",pib_per_capita);


    return 0;
}
