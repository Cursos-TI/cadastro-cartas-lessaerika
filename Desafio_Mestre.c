#include <stdio.h>
#include <string.h>

int main() {
    // Dados da carta 1
    char codigo1[4], nome1[50];
    int pop1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Dados da carta 2
    char codigo2[4], nome2[50];
    int pop2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // ======= Entrada da Carta 1 =======
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos carta 1
    densidade1 = pop1 / area1;
    pibPerCapita1 = pib1 / pop1;
    superPoder1 = pop1 + area1 + pib1 + pontos1 + pibPerCapita1 - densidade1;

    // Print do cálculo da carta 1
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões/hab\n", pibPerCapita1);

    // ======= Entrada da Carta 2 =======
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o código (ex: B01): ");
    scanf("%s", codigo2);
    getchar(); // limpa ENTER do scanf anterior

    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin); // sizeof(nome2) garante que o fgets leia até o fim da string corretamente, sem cortar.
    nome2[strcspn(nome2, "\n")] = 0; // remove o '\n' do final

    printf("População: ");
    scanf("%d", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos carta 2
    densidade2 = pop2 / area2;
    pibPerCapita2 = pib2 / pop2;
    superPoder2 = pop2 + area2 + pib2 + pontos2 + pibPerCapita2 - densidade2;

    // Print do cálculo da carta 1
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões/hab\n", pibPerCapita2);

    // ======= Comparações =======
    printf("\n=== RESULTADO DAS COMPARAÇÕES ===\n");

    printf("\nPopulação: ");
    if (pop1 > pop2)
        printf("%s venceu!\n", nome1);
    else if (pop2 > pop1)
        printf("%s venceu!\n", nome2);
    else
        printf("Empate!\n");

    printf("Área: ");
    if (area1 > area2)
        printf("%s venceu!\n", nome1);
    else if (area2 > area1)
        printf("%s venceu!\n", nome2);
    else
        printf("Empate!\n");

    printf("PIB: ");
    if (pib1 > pib2)
        printf("%s venceu!\n", nome1);
    else if (pib2 > pib1)
        printf("%s venceu!\n", nome2);
    else
        printf("Empate!\n");

    printf("Pontos turísticos: ");
    if (pontos1 > pontos2)
        printf("%s venceu!\n", nome1);
    else if (pontos2 > pontos1)
        printf("%s venceu!\n", nome2);
    else
        printf("Empate!\n");

    printf("Densidade populacional: ");
    if (densidade1 < densidade2)
        printf("%s venceu (menor densidade)!\n", nome1);
    else if (densidade2 < densidade1)
        printf("%s venceu (menor densidade)!\n", nome2);
    else
        printf("Empate!\n");

    printf("PIB per capita: ");
    if (pibPerCapita1 > pibPerCapita2)
        printf("%s venceu!\n", nome1);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("%s venceu!\n", nome2);
    else
        printf("Empate!\n");

    printf("\nSUPER PODER: ");
    if (superPoder1 > superPoder2)
        printf("%s é a campeã!\n", nome1);
    else if (superPoder2 > superPoder1)
        printf("%s é a campeã!\n", nome2);
    else
        printf("Empate total!\n");

    return 0;
}