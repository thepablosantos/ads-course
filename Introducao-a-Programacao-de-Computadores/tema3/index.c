#include <stdio.h>
#include <string.h>

int main() {

    char nome1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000.0;
    float pib1 = 2200.0;
    int pontos_turisticos1 = 50;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Portugal";
    int populacao2 = 10300000;
    float area2 = 92200.0;
    float pib2 = 250.0;
    int pontos_turisticos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("=== SUPER TRUNFO: COMPARAÇÃO ENTRE CARTAS ===\n\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome1, pontos_turisticos1);
            printf("%s: %d pontos\n", nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            // Regra invertida: vence a menor densidade
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, execute novamente e escolha uma opção de 1 a 5.\n");
            break;
    }

    printf("\nObrigado por jogar Super Trunfo!\n");

    return 0;
}