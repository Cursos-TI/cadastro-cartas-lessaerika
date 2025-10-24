#include <stdio.h> 
#include <string.h>

int main() {
    // Variáveis da carta
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Entrada de dados
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);
    
    getchar(); // Limpar o buffer do teclado
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, 50, stdin); // Usar fgets para permitir nomes com espaços e usar o stdin para ler dados imputados no terminal
    nomeCidade[strcspn(nomeCidade, "\n")] = 0; // strcspn: Remover a nova linha do final. Essa linha procura o “\n” dentro do texto e substitui ele por um “\0” para não aparecer o "\n"para o usuário.
    
    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados
    printf("\n=== Dados da Carta ===\n");
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}