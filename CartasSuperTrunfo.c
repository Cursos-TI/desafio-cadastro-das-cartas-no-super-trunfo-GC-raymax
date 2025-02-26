#include <stdio.h>

#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo_da_carta1[4]; // Aumentado para 4 para acomodar o caractere nulo
    char nome_da_cidade1[50];
    unsigned long int populacao1; //Nova variável pra maiores valores
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; // Nova variável para densidade populacional
    float pib_per_capita1;         // Nova variável para PIB per capita
    float super_poder1;            // Nova variável para Super Poder
    float inverso_densidade1;      // Nova variável para Inverso da densidade populacional

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo_da_carta2[4]; // Aumentado para 4 para acomodar o caractere nulo
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2; // Nova variável para densidade populacional
    float pib_per_capita2;         // Nova variável para PIB per capita
    float super_poder2;            // Nova variável para Super Poder
    float inverso_densidade2;      // Nova variável para Inverso da densidade populacional

    // Declaração de variáveis para armazenar os resultados das comparações
    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade;
    int resultado_pib_per_capita;
    int resultado_super_poder;
       

    // Buffer para limpar o stdin
    char buffer;
    
    // Cadastro da Carta 1
    printf("=== Cadastro de Carta 1 ===\n");
    printf("Estado (letra de A a H): ");
    scanf("%c", &estado1);
    
    // Limpar o buffer de entrada após a leitura do caractere
    scanf("%c", &buffer);
    
    printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: A01): ");
    scanf("%3s", codigo_da_carta1);
    
    // Limpar o buffer de entrada
    scanf("%c", &buffer);
    
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nome_da_cidade1);
    
    printf("População (em habitantes): ");
    scanf("%u", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Limpar o buffer de entrada após todos os dados da primeira carta
    scanf("%c", &buffer);
    
    // Cadastro da Carta 2
    printf("\n=== Cadastro de Carta 2 ===\n");
    printf("Estado (letra de A a H): ");
    scanf("%c", &estado2);
    
    // Limpar o buffer de entrada
    scanf("%c", &buffer);
    
    printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): ");
    scanf("%3s", codigo_da_carta2);
    
    // Limpar o buffer de entrada
    scanf("%c", &buffer);
    
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nome_da_cidade2);
    
    printf("População (em habitantes): ");
    scanf("%u", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para a Carta 1
    densidade_populacional1 = populacao1 / area1;                                                               // Habitantes por km²
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;                                                         // PIB total em reais dividido pela população
    inverso_densidade1 = 1.0 / densidade_populacional1;                                                         // Valor do inverso da densidade populacional
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + inverso_densidade1 + pib_per_capita1;       // Total do Super Poder
    
    // Cálculos para a Carta 2
    densidade_populacional2 = populacao2 / area2;                                                               // Habitantes por km²
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;                                                         // PIB total em reais dividido pela população
    inverso_densidade2 = 1.0 / densidade_populacional2;                                                         // Valor do inverso da densidade populacional
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + inverso_densidade2+ pib_per_capita2;  // Total do Super Poder
    
    // Exibição dos dados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %u habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Exibição dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %u habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Cálculo para a comparação de cartas

    resultado_populacao = (populacao1 > populacao2);
    resultado_area = (area1 > area2);
    resultado_pib = (pib1 > pib2);
    resultado_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2);
    resultado_densidade = (densidade_populacional1 < densidade_populacional2); // Menor densidade vence
    resultado_pib_per_capita = (pib_per_capita1 > pib_per_capita2);
    resultado_super_poder = (super_poder1 > super_poder2);

    // Comparação de Cartas
    
    printf("\n=== Comparação de Cartas: ===\n");
    printf("População: Carta %d venceu (%d)\n", resultado_populacao ? 1 : 2, resultado_populacao);
    printf("Área: Carta %d venceu (%d)\n", resultado_area ? 1 : 2, resultado_area);
    printf("PIB: Carta %d venceu (%d)\n", resultado_pib ? 1 : 2, resultado_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado_pontos_turisticos ? 1 : 2, resultado_pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado_densidade ? 1 : 2, resultado_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado_pib_per_capita ? 1 : 2, resultado_pib_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", resultado_super_poder ? 1 : 2, resultado_super_poder);

    return 0;
}