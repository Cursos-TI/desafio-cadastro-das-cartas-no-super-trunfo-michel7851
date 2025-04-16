#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2 = 'C';
    char codigo2[] = "C03";
    char nomeCidade2[] = "Florianópolis";
    int populacao2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a Carta 1
    printf("Digite a população da cidade %s: ", nomeCidade1);
    scanf("%d", &populacao1);

    printf("Digite o PIB da cidade %s (em bilhões): ", nomeCidade1);
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade %s: ", nomeCidade1);
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a Carta 2
    printf("\nDigite a população da cidade %s: ", nomeCidade2);
    scanf("%d", &populacao2);

    printf("Digite o PIB da cidade %s (em bilhões): ", nomeCidade2);
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade %s: ", nomeCidade2);
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibindo os dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}