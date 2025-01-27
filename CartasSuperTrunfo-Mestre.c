#include <stdio.h>

// Desafio Super Trunfo - Países
// Nivel: Mestre
// Tema 1 - Cadastro das Cartas
// Este código agora inclui a lógica para estados e cidades
// Autor Igor Gomes

int main() {
    // Definição de variáveis para a primeira cidade
    char estado1, codigo1[4];
    int numeroCidade1, pontosTuristicos1;
    char nome1[50];
    float populacao1, area1, pib_total1, densidade_populacional1, pib_per_capita1, superPoder1;

    // Definição de variáveis para a segunda cidade
    char estado2, codigo2[4];
    int numeroCidade2, pontosTuristicos2;
    char nome2[50];
    float populacao2, area2, pib_total2, densidade_populacional2, pib_per_capita2, superPoder2;

    // Cadastro da primeira cidade
    printf("Cadastro da Primeira Cidade:\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o número da cidade (1 a 4): ");
    scanf("%d", &numeroCidade1);
    sprintf(codigo1, "%c%02d", estado1, numeroCidade1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População (em habitantes): ");
    scanf("%f", &populacao1);
    printf("Área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("PIB total da cidade (em bilhões): ");
    scanf("%f", &pib_total1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da primeira cidade
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib_total1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib_total1 + densidade_populacional1 + pib_per_capita1 + pontosTuristicos1;

    // Cadastro da segunda cidade
    printf("\nCadastro da Segunda Cidade:\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o número da cidade (1 a 4): ");
    scanf("%d", &numeroCidade2);
    sprintf(codigo2, "%c%02d", estado2, numeroCidade2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População (em habitantes): ");
    scanf("%f", &populacao2);
    printf("Área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("PIB total da cidade (em bilhões): ");
    scanf("%f", &pib_total2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da segunda cidade
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib_total2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib_total2 + densidade_populacional2 + pib_per_capita2 + pontosTuristicos2;

    // Exibição dos dados das duas cidades
    printf("\n--- Dados da Primeira Cidade ---\n");
    printf("Código da cidade: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB Total: %.2f bilhões\n", pib_total1);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f mil reais\n", pib_per_capita1 / 1000);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Dados da Segunda Cidade ---\n");
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB Total: %.2f bilhões\n", pib_total2);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f mil reais\n", pib_per_capita2 / 1000);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações entre as duas cidades
    printf("\n--- Comparação entre as Cidades ---\n");

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Vencedor: %s\n", codigo1);
    } else {
        printf("Vencedor: %s\n", codigo2);
    }

    // PIB per Capita (maior vence)
    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Vencedor: %s\n", codigo1);
    } else {
        printf("Vencedor: %s\n", codigo2);
    }

    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Vencedor: %s\n", codigo1);
    } else {
        printf("Vencedor: %s\n", codigo2);
    }

    // Super Poder (maior vence)
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Vencedor: %s\n", codigo1);
    } else {
        printf("Vencedor: %s\n", codigo2);
    }

    return 0;
}
