#include <stdio.h>


int main() {
    // Variáveis
    
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[255], cidade2[255];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2, pontuacao1 = 0, pontuacao2 = 0;
    float area_em_km_quadrados1, area_em_km_quadrados2, pib1, pib2, densidade_populacional1, 
    densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2;

    // Cadastro das Cartas:

    printf("Bem-vindos ao super trunfo!\nEscolha duas cartas, \nBoa sorte!\n\n");

    // Primeira carta

    printf("Qual é a letra do primeiro estado? ");
    scanf(" %c", &estado1);
    printf("\n");

    printf("Qual é o código da primeira carta? ");
    scanf("%s", &codigo1);
    getchar(); // consome '\n' deixado no buffer
    printf("\n");

    printf("Qual é a primeira cidade? ");
    fgets(cidade1, 255, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("\n");
    
    printf("Quantas pessoas vivem na primeira cidade? ");
    scanf("%d", &populacao1);
    printf("\n");
    
    printf("Qual é a área em km² da primeira cidade? ");
    scanf("%f", &area_em_km_quadrados1);
    printf("\n");
    
    printf("Qual é o PIB da primeira cidade? ");
    scanf("%f", &pib1);
    printf("\n");
    
    printf("Quantos pontos turísticos existem na primeira cidade? ");
    scanf("%d", &pontos_turisticos1);
    getchar();
    printf("\n");

    // Segunda carta
    
    printf("Qual é a letra do segundo estado? ");
    scanf(" %c", &estado2);
    printf("\n");

    printf("Qual é o código da segunda carta? ");
    scanf("%s", &codigo2);
    getchar();
    printf("\n");
    
    printf("Qual é a segunda cidade? ");
    fgets(cidade2, 255, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("\n");

    printf("Quantas pessoas vivem na segunda cidade? ");
    scanf("%d", &populacao2);
    printf("\n");
    
    printf("Qual é a área em km² da segunda cidade? ");
    scanf("%f", &area_em_km_quadrados2);
    printf("\n");
    
    printf("Qual é o PIB da segunda cidade? ");
    scanf("%f", &pib2);
    printf("\n");

    printf("Quantos pontos turísticos existem na segunda cidade? ");
    scanf("%d", &pontos_turisticos2);
    getchar();
    printf("\n");

    // Calculos extras

    densidade_populacional1 = (float) populacao1 / area_em_km_quadrados1;
    densidade_populacional2 = (float) populacao2 / area_em_km_quadrados2;
    pib_per_capita1 = (float) (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (float) (pib2 * 1000000000) / populacao2;
    super_poder1 = (float) populacao1 + pontos_turisticos1 + area_em_km_quadrados1 + pib1 + pib_per_capita1 - densidade_populacional1;
    super_poder2 = (float) populacao2 + pontos_turisticos2 + area_em_km_quadrados2 + pib2 + pib_per_capita2 - densidade_populacional2;

    pontuacao1 += populacao1 > populacao2;
    pontuacao1 += area_em_km_quadrados1 > area_em_km_quadrados2;
    pontuacao1 += pontos_turisticos1 > pontos_turisticos2;
    pontuacao1 += pib1 > pib2;
    pontuacao1 += densidade_populacional1 < densidade_populacional2;
    pontuacao1 += pib_per_capita1 > pib_per_capita2;
    pontuacao1 += super_poder1 > super_poder2;

    pontuacao2 += populacao1 < populacao2;
    pontuacao2 += area_em_km_quadrados1 < area_em_km_quadrados2;
    pontuacao2 += pontos_turisticos1 < pontos_turisticos2;
    pontuacao2 += pib1 < pib2;
    pontuacao2 += densidade_populacional1 > densidade_populacional2;
    pontuacao2 += pib_per_capita1 < pib_per_capita2;
    pontuacao2 += super_poder1 < super_poder2;

    // Exibição dos Dados das Cartas:

    printf("Carta: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_em_km_quadrados1);
    printf("PIB de %s: %.2f\n", cidade1, pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\n\n\n");
    
    printf("Carta %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_em_km_quadrados2);
    printf("PIB de %s: %.2f\n", cidade2, pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Duelo
    
    printf("Duelo das cartas\n");
    printf("Cidade %s vs cidade %s\n\n", cidade1, cidade2);

    printf("População:             %d vs %d\n", populacao1 > populacao2, populacao1 < populacao2);
    printf("Área:                  %d vs %d\n", area_em_km_quadrados1 > area_em_km_quadrados2, area_em_km_quadrados1 < area_em_km_quadrados2);
    printf("Pontos turísticos:     %d vs %d\n", pontos_turisticos1 > pontos_turisticos2, pontos_turisticos1 < pontos_turisticos2);
    printf("PIB:                   %d vs %d\n", pib1 > pib2, pib1 < pib2);
    printf("Densidade demográfica: %d vs %d\n", densidade_populacional1 < densidade_populacional2, densidade_populacional1 > densidade_populacional2);
    printf("PIB per Capita:        %d vs %d\n", pib_per_capita1 > pib_per_capita2, pib_per_capita1 < pib_per_capita2);
    printf("Super poder:           %d vs %d\n\n", super_poder1 > super_poder2, super_poder1 < super_poder2);

    printf("Pontuação: Cidade %s com %d e cidade %s com %d\n\n\n", cidade1, pontuacao1, cidade2, pontuacao2);
}