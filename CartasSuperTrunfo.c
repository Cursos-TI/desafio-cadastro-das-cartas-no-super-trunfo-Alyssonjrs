#include <stdio.h>
#include <stdlib.h>

int main() {
    // Carta 1
    char estado1;
    char cidade1[100];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib_1, densidadepop_1, pib_per_capita1;
    double super_poder_carta1;

    // Carta 2
    char estado2;
    char cidade2[100];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib_2, densidadepop_2, pib_per_capita2;
    double super_poder_carta2;

    // Atributos de comparação
    int atributo1, atributo2;
    float valor1_attr1, valor2_attr1;
    float valor1_attr2, valor2_attr2;
    float soma1, soma2;

    printf("******** SUPER TRUNFO - DESAFIO FINAL ********\n\n");

    // ----------- CARTA 1 -----------
    printf("Cadastro da Carta 1:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib_1);

    densidadepop_1 = populacao1 / area1;
    pib_per_capita1 = (pib_1 * 1000000000.0) / populacao1;
    super_poder_carta1 = populacao1 + area1 + pib_1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidadepop_1);

    printf("\nResumo Carta 1:\n");
    printf("Estado: %c | Cidade: %s | População: %lu | Pontos turísticos: %d\n", estado1, cidade1, populacao1, pontos_turisticos1);
    printf("Área: %.2f | PIB: %.2f | Densidade: %.2f | PIB per capita: %.2f\n", area1, pib_1, densidadepop_1, pib_per_capita1);

    // ----------- CARTA 2 -----------
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib_2);

    densidadepop_2 = populacao2 / area2;
    pib_per_capita2 = (pib_2 * 1000000000.0) / populacao2;
    super_poder_carta2 = populacao2 + area2 + pib_2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidadepop_2);

    printf("\nResumo Carta 2:\n");
    printf("Estado: %c | Cidade: %s | População: %lu | Pontos turísticos: %d\n", estado2, cidade2, populacao2, pontos_turisticos2);
    printf("Área: %.2f | PIB: %.2f | Densidade: %.2f | PIB per capita: %.2f\n", area2, pib_2, densidadepop_2, pib_per_capita2);

    // ----------- COMPARAÇÃO -----------
    printf("\n===== COMPARAÇÃO =====\n");

    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nVocê escolheu o mesmo atributo duas vezes! Reinicie o programa e tente novamente.\n");
        return 0;
    }

    // -------- PRIMEIRO ATRIBUTO --------
    switch (atributo1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib_1; valor2_attr1 = pib_2; break;
        case 4: valor1_attr1 = pontos_turisticos1; valor2_attr1 = pontos_turisticos2; break;
        case 5: valor1_attr1 = densidadepop_1; valor2_attr1 = densidadepop_2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // -------- SEGUNDO ATRIBUTO --------
    switch (atributo2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib_1; valor2_attr2 = pib_2; break;
        case 4: valor1_attr2 = pontos_turisticos1; valor2_attr2 = pontos_turisticos2; break;
        case 5: valor1_attr2 = densidadepop_1; valor2_attr2 = densidadepop_2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Comparações individuais (usando operador ternário e regra especial da densidade)
    float pontos_carta1 = 0, pontos_carta2 = 0;

    pontos_carta1 += (atributo1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    pontos_carta2 += (atributo1 == 5) ? (valor2_attr1 < valor1_attr1) : (valor2_attr1 > valor1_attr1);

    pontos_carta1 += (atributo2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);
    pontos_carta2 += (atributo2 == 5) ? (valor2_attr2 < valor1_attr2) : (valor2_attr2 > valor1_attr2);

    // Soma total
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    printf("\nResultado das comparações:\n");
    printf("%s -> Atributos: %.2f e %.2f | Soma: %.2f\n", cidade1, valor1_attr1, valor1_attr2, soma1);
    printf("%s -> Atributos: %.2f e %.2f | Soma: %.2f\n", cidade2, valor2_attr1, valor2_attr2, soma2);

    // Resultado final
    if (soma1 == soma2) {
        printf("\nEmpate!\n");
    } else if (soma1 > soma2) {
        printf("\n%s venceu!\n", cidade1);
    } else {
        printf("\n%s venceu!\n", cidade2);
    }

    printf("\n*** Fim de jogo ***\n");
    return 0;
}
