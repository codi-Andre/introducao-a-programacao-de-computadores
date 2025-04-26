#include <stdio.h>


int main() {
    // Variáveis

    /*
    Carta 1:
        Estado: A
        Código: A01
        Nome da Cidade: São Paulo
        População: 12325000
        Área: 1521.11 km²
        PIB: 699.28 bilhões de reais
        Número de Pontos Turísticos: 50
        Densidade Populacional: 8102.47 hab/km²
        PIB per Capita: 56724.32 reais

        Carta 2:
        Estado: B
        Código: B02
        Nome da Cidade: Rio de Janeiro
        População: 6748000
        Área: 1200.25 km²
        PIB: 300.50 bilhões de reais
        Número de Pontos Turísticos: 30
        Densidade Populacional: 5622.24 hab/km²
        PIB per Capita: 44532.91 reais
    */
    
    char estado1 = 'A', estado2 = 'B', codigo1[3] = "01", codigo2[3] = "02", cidade1[255] = "São Paulo", cidade2[255] = "Rio de Janeiro";
    int populacao1 = 12325000, populacao2 = 6748000, pontos_turisticos1 = 50, pontos_turisticos2 = 30, pontuacao1 = 0, pontuacao2 = 0, escolha1, escolha2;
    float area_em_km_quadrados1 = 1521.11, area_em_km_quadrados2 = 1200.25, pib1 = 699.28, pib2 = 300.50, densidade_populacional1, 
    densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1 = 0.0, super_poder2 = 0.0;

    // Calculos extras

    densidade_populacional1 = (float) populacao1 / area_em_km_quadrados1;
    densidade_populacional2 = (float) populacao2 / area_em_km_quadrados2;
    pib_per_capita1 = (float) (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (float) (pib2 * 1000000000) / populacao2;

    

    // Exibição dos Dados das Cartas:

    printf("Carta: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_em_km_quadrados1);
    printf("PIB de %s: %.2f\n", cidade1, pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    
    printf("\n");
    
    printf("Carta %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_em_km_quadrados2);
    printf("PIB de %s: %.2f\n", cidade2, pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n\n", pib_per_capita2);

    // Duelo

    printf("Escolha dois atributos para comparar\n\n");
    printf("O primeiro atributo:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pontos turísticos\n");
    printf("4. PIB\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n\n");

    scanf("%d", &escolha1);
    printf("\n");

    printf("O segundo atributo:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pontos turísticos\n");
    printf("4. PIB\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n\n");

    scanf("%d", &escolha2);
    printf("\n");
    
    printf("Duelo das cartas\n");
    printf("%s vs %s\n\n", cidade1, cidade2);

    switch (escolha1)
    {
    case 2:
        super_poder1 += area_em_km_quadrados1;
        super_poder2 += area_em_km_quadrados2;

        if (area_em_km_quadrados1 > area_em_km_quadrados2) {
            pontuacao1++;
            printf("%s tem maior área.\n", cidade1);
        } else if (area_em_km_quadrados1 < area_em_km_quadrados2) {
            pontuacao2++;
            printf("%s tem maior área.\n", cidade2);
        }
        break;
    
    case 3:
        super_poder1 += pontos_turisticos1;
        super_poder2 += pontos_turisticos2;

        if (pontos_turisticos1 > pontos_turisticos2) {
            pontuacao1++;
            printf("%s tem mais pontos turísticos.\n", cidade1);
        } else if (pontos_turisticos1 < pontos_turisticos2) {
            pontuacao2++;
            printf("%s tem mais pontos turísticos.\n", cidade2);
        }
        break;
    
    case 4:
        super_poder1 += pib1;
        super_poder2 += pib2;

        if (pib1 > pib2) {
            pontuacao1++;
            printf("%s tem maior PIB.\n", cidade1);
        } else if (pib1 < pib2) {
            pontuacao2++;
            printf("%s tem maior PIB.\n", cidade2);
        }
        break;
    
    case 5:
        super_poder1 += densidade_populacional1;
        super_poder2 += densidade_populacional2;

        if (densidade_populacional1 < densidade_populacional2) {
            pontuacao1++;
            printf("%s tem menor densidade demográfica.\n", cidade1);
        } else if (densidade_populacional1 > densidade_populacional2) {
            pontuacao2++;
            printf("%s tem menor densidade demográfica.\n", cidade2);
        }
        break;
    
    case 6:
        super_poder1 += pib_per_capita1;
        super_poder2 += pib_per_capita2;

        if (pib_per_capita1 > pib_per_capita2) {
            pontuacao1++;
            printf("%s tem maior PIB per capita.\n", cidade1);
        } else if (pib_per_capita1 < pib_per_capita2) {
            pontuacao2++;
            printf("%s tem maior PIB per capita.\n", cidade2);
        }
        break;
    
    default:
        super_poder1 += populacao1;
        super_poder2 += populacao2;

        if (populacao1 > populacao2) {
            pontuacao1++;
            printf("%s tem maior população.\n", cidade1);
        } else if (populacao1 < populacao2) {
            pontuacao2++;
            printf("%s tem maior população.\n", cidade2);
        }
        break;
    }

    switch (escolha2)
    {
    case 2:
        super_poder1 += area_em_km_quadrados1;
        super_poder2 += area_em_km_quadrados2;

        if (area_em_km_quadrados1 > area_em_km_quadrados2) {
            pontuacao1++;
            printf("%s tem maior área.\n", cidade1);
        } else if (area_em_km_quadrados1 < area_em_km_quadrados2) {
            pontuacao2++;
            printf("%s tem maior área.\n", cidade2);
        }
        break;
    
    case 3:
        super_poder1 += pontos_turisticos1;
        super_poder2 += pontos_turisticos2;

        if (pontos_turisticos1 > pontos_turisticos2) {
            pontuacao1++;
            printf("%s tem mais pontos turísticos.\n", cidade1);
        } else if (pontos_turisticos1 < pontos_turisticos2) {
            pontuacao2++;
            printf("%s tem mais pontos turísticos.\n", cidade2);
        }
        break;
    
    case 4:
        super_poder1 += pib1;
        super_poder2 += pib2;

        if (pib1 > pib2) {
            pontuacao1++;
            printf("%s tem maior PIB.\n", cidade1);
        } else if (pib1 < pib2) {
            pontuacao2++;
            printf("%s tem maior PIB.\n", cidade2);
        }
        break;
    
    case 5:
        super_poder1 -= densidade_populacional1;
        super_poder2 -= densidade_populacional2;

        if (densidade_populacional1 < densidade_populacional2) {
            pontuacao1++;
            printf("%s tem menor densidade demográfica.\n", cidade1);
        } else if (densidade_populacional1 > densidade_populacional2) {
            pontuacao2++;
            printf("%s tem menor densidade demográfica.\n", cidade2);
        }
        break;
    
    case 6:
        super_poder1 += pib_per_capita1;
        super_poder2 += pib_per_capita2;

        if (pib_per_capita1 > pib_per_capita2) {
            pontuacao1++;
            printf("%s tem maior PIB per capita.\n", cidade1);
        } else if (pib_per_capita1 < pib_per_capita2) {
            pontuacao2++;
            printf("%s tem maior PIB per capita.\n", cidade2);
        }
        break;
    
    default:
        super_poder1 += populacao1;
        super_poder2 += populacao2;

        if (populacao1 > populacao2) {
            pontuacao1++;
            printf("%s tem maior população.\n", cidade1);
        } else if (populacao1 < populacao2) {
            pontuacao2++;
            printf("%s tem maior população.\n", cidade2);
        }
        break;
    }

    printf("\n");
    printf("%s tem um super poder de %.2f.\n", cidade1, super_poder1);
    printf("%s tem um super poder de %.2f.\n", cidade2, super_poder2);
    printf("\n");
    
    if (super_poder1 > super_poder2) {
        pontuacao1++;
        printf("%s tem maior super poder.\n\n", cidade1);
    } else if (super_poder1 < super_poder2) {
        pontuacao2++;
        printf("%s tem maior super poder.\n\n", cidade2);
    }

    if (pontuacao1 > pontuacao2) {
        printf("%s venceu!\n", cidade1);
    } else if (pontuacao1 < pontuacao2) {
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}