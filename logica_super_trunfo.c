#include <stdio.h>
#include <stdlib.h>

int main() {
    char Estado_1[20], Estado_2[20];
    char Codigo_da_Carta_1[10], Codigo_da_Carta_2[10];
    char Nome_da_Cidade_1[30], Nome_da_Cidade_2[30];
    unsigned long int Populacao_1, Populacao_2;
    float Area_1, Area_2, PIB_1, PIB_2;
    int Pontos_Turisticos_1, Pontos_Turisticos_2;
    float Densidade_1, Densidade_2;
    int escolha1, escolha2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma_carta1, soma_carta2;

    printf("Digite o nome do Estado 1: ");
    scanf("%s", Estado_1);
    printf("Digite o código da carta: ");
    scanf("%s", Codigo_da_Carta_1);
    printf("Digite o nome da cidade: ");
    scanf("%s", Nome_da_Cidade_1);
    printf("Digite a população: ");
    scanf("%lu", &Populacao_1);
    printf("Digite a área (km²): ");
    scanf("%f", &Area_1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos_1);

    Densidade_1 = Populacao_1 / Area_1;

    printf("\nDigite o nome do Estado 2: ");
    scanf("%s", Estado_2);
    printf("Digite o código da carta: ");
    scanf("%s", Codigo_da_Carta_2);
    printf("Digite o nome da cidade: ");
    scanf("%s", Nome_da_Cidade_2);
    printf("Digite a população: ");
    scanf("%lu", &Populacao_2);
    printf("Digite a área (km²): ");
    scanf("%f", &Area_2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos_2);

    Densidade_2 = Populacao_2 / Area_2;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica (menor vence)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    while (1) {
        printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica (menor vence)\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha2);
        if (escolha1 != escolha2) 
            break;
        printf("Erro! O segundo atributo deve ser diferente do primeiro.\n");
    }

    switch (escolha1) {
        case 1: valor1_carta1 = Populacao_1; valor1_carta2 = Populacao_2; 
        break;
        case 2: valor1_carta1 = Area_1; valor1_carta2 = Area_2; 
        break;
        case 3: valor1_carta1 = PIB_1; valor1_carta2 = PIB_2; 
        break;
        case 4: valor1_carta1 = Pontos_Turisticos_1; valor1_carta2 = Pontos_Turisticos_2; 
        break;
        case 5: valor1_carta1 = Densidade_2; valor1_carta2 = Densidade_1; 
        break;
    }

    switch (escolha2) {
        case 1: valor2_carta1 = Populacao_1; valor2_carta2 = Populacao_2; 
        break;
        case 2: valor2_carta1 = Area_1; valor2_carta2 = Area_2; 
        break;
        case 3: valor2_carta1 = PIB_1; valor2_carta2 = PIB_2; 
        break;
        case 4: valor2_carta1 = Pontos_Turisticos_1; valor2_carta2 = Pontos_Turisticos_2; 
        break;
        case 5: valor2_carta1 = Densidade_2; valor2_carta2 = Densidade_1; 
        break;
    }

    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\nComparação final:\n");
    printf("%s (%s) - %s vs. %s (%s) - %s\n", Nome_da_Cidade_1, Estado_1, Codigo_da_Carta_1, Nome_da_Cidade_2, Estado_2, Codigo_da_Carta_2);
    printf("Atributo 1: %d - Valores: %.2f vs %.2f\n", escolha1, valor1_carta1, valor1_carta2);
    printf("Atributo 2: %d - Valores: %.2f vs %.2f\n", escolha2, valor2_carta1, valor2_carta2);
    printf("Soma final: %.2f vs %.2f\n", soma_carta1, soma_carta2);

    (soma_carta1 > soma_carta2) ? printf("Vencedor: %s (%s)\n", Nome_da_Cidade_1, Estado_1) :
    (soma_carta2 > soma_carta1) ? printf("Vencedor: %s (%s)\n", Nome_da_Cidade_2, Estado_2) :
    printf("Resultado: Empate!\n");

    return 0;
}
