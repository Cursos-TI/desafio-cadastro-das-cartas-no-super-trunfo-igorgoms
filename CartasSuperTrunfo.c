#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código agora inclui a lógica para estados e cidades
// Aluno: Igor Gomes

int main() {
    // Definição de variáveis para cada atributo da cidade
    int numeroCidade;        // Número da cidade (1 a 4)
    int pontosTuristicos;    // Número de pontos turísticos
    char codigo[4];          // Código da cidade (ex: A01)
    char estado;             // Letra do estado (A a H)
    char nome[50];           // Nome da cidade
    float area;              // Área da cidade (em km²)
    float pib;               // PIB da cidade (em bilhões)
    float populacao;         // População da cidade

    // Cadastro das Cartas
    printf("Cadastro da Carta de Cidade\n");

    // Solicita o estado (A a H)
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado); // A função scanf com espaço antes de %c para evitar problemas com o buffer

    // Solicita o número da cidade (1 a 4)
    printf("Digite o número da cidade (1 a 4): ");
    scanf("%d", &numeroCidade);

    // Geração do código da cidade (combinação do estado e número da cidade)
    sprintf(codigo, "%c%02d", estado, numeroCidade); // Exemplo: A01, B04, etc.

    // Solicita o nome da cidade
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê o nome com espaços

    // Solicita a população da cidade
    printf("População (em habitantes): ");
    scanf("%f", &populacao);

    // Solicita a área da cidade (em km²) e o PIB da cidade (em bilhões) em uma única linha
    printf("Área (em km²) e PIB (em bilhões) separados por espaço: ");
    scanf("%f %f", &area, &pib);

    // Solicita o número de pontos turísticos
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados da Carta
    printf("\n--- Dados da Carta de Cidade ---\n");
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %.3f habitantes\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.3f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}