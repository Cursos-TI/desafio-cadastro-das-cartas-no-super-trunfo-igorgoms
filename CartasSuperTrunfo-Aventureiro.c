#include <stdio.h>

// Desafio Super Trunfo - Países
// Nivel: Aventureiro
// Tema 1 - Cadastro das Cartas
// Este código agora inclui a lógica para estados e cidades
// Autor Igor Gomes

int main() {
    // Definição de variáveis para cada atributo da cidade
    char estado;             // Letra do estado (A a H)
    int numeroCidade;        // Número da cidade (1 a 4)
    char nome[50];           // Nome da cidade
    float populacao;         // População da cidade
    float area;              // Área da cidade (em km²)
    float pib_total;         // PIB da cidade (em bilhões)
    float pib_per_capita;    // PIB per capita
    float densidade_populacional; // Densidade populacional (pessoas por km²)
    int pontosTuristicos;    // Número de pontos turísticos
    char codigo[4];          // Código da cidade (ex: A01)

    // Cadastro das Cartas
    printf("Cadastro da Carta de Cidade\n");

    // Solicita o estado (A a H)
    printf("Digite a letra do estado (A a H): \n");
    scanf(" %c", &estado); // A função scanf com espaço antes de %c para evitar problemas com o buffer

    // Solicita o número da cidade (1 a 4)
    printf("Digite o número da cidade (1 a 4): \n");
    scanf("%d", &numeroCidade);

    // Geração do código da cidade (combinação do estado e número da cidade)
    sprintf(codigo, "%c%02d", estado, numeroCidade); // Exemplo: A01, B04, etc.

    // Solicita o nome da cidade
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nome); // Lê o nome com espaços

    // Solicita a população da cidade
    printf("População (em habitantes): \n");
    scanf(" %f", &populacao);

    // Solicita a área da cidade (em km²) e o PIB da cidade (em bilhões) em uma única linha
    printf("Digite a área (em km²): \n");
    scanf(" %f", &area);

    // Vai Calcular a densidade populacional
    densidade_populacional = populacao / area;

    // Solicita o PIB em bilhões
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_total);

    // Vai calcular o pib per capita
    pib_per_capita = (pib_total * 1000000000) / populacao;


    // Solicita o número de pontos turísticos
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados da Carta
    printf("\n--- Dados da Carta de Cidade ---\n");
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %.3f habitantes\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.3f bilhões\n", pib_total);
    printf("Densidade Populacional: %.2f pessoas por km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f mil reais por pessoa\n", pib_per_capita);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
