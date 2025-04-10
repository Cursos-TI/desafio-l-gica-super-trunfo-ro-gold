#include <stdio.h>

int main()
{
    int turis1, turis2, opcao;
    unsigned long int pop1, pop2;
    // area em km² e pib
    float area1, area2, pib1, pib2, ppc1, ppc2, densidade1, densidade2;
    char cidade1[20];
    char cidade2[20];
    char estado1;
    char estado2;
    char codigo1[5];
    char codigo2[5];
    // menu inicial onde o jogador escolhe um atributo para competir.
    printf("Antes de iniciar, escolha que atributo vai valer na comparação das cartas:\n");
    printf("1) População\n");
    printf("2) Area.\n");
    printf("3) Pib.\n");
    printf("4) Numero de pontos turisticos.\n");
    printf("5) Densidade demografica.\n");
    scanf("%d", &opcao);
    if (opcao > 5)
    {
        printf("opção invalida.");
        return 0;
    }
    else if (opcao < 1)
    {
        printf("opção invalida.");
        return 0;
    }
    printf("Desafio cadastro de cartas no super trunfo.\n");
    printf("\n");
    // inicio do codigo para coletar informaçoes da primeira carta.
    printf("Vamos informar os dados da primeira carta:\n");

    printf("Digite apenas a primeira letra do estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta(letra + 2 números):\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Insira a populaçao:\n");
    scanf("%lu", &pop1);

    printf("Insira a area em km²:\n");
    scanf(" %f", &area1);

    printf("Insira o pib da cidade: \n");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &turis1);

    ppc1 = pib1 / pop1;
    densidade1 = pop1 / area1;

    printf(" \n");
    // inicio do codigo para coletar as informaçoes da segunda carta
    printf("Insira as informaçoes da segunda carta:\n");

    printf("Digite apenas a primeira letra do estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta(letra + 2 números):\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Insira a populaçao:\n");
    scanf("%lu", &pop2);

    printf("Insira a area em km²: \n");
    scanf("%f", &area2);

    printf("Insira o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &turis2);

    ppc2 = pib2 / pop2;
    densidade2 = pop2 / area2;

    printf(" \n");
    // inicio da apresentação de ambas as cartas.
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", pop1);
    printf("Area: %.2f km²\n", area1);
    printf("PiB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", turis1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("Pib Per Capita: %.2f reais\n", ppc1);

    printf(" \n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", pop2);
    printf("Area: %.2f km²\n", area2);
    printf("PiB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", turis2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("Pib Per Capita: %.2f reais\n", ppc2);

    printf("\n");
    // switch com todas as alternativas citadas no menu inicial.
    switch (opcao)
    {
    case 1:
        if (pop1 > pop2)
        {
            printf("Carta 1 - %s: População = %lu\n", cidade1, pop1);
            printf("Carta 2 - %s: População = %lu\n", cidade2, pop2);
            printf("Carta 1 (%s) venceu a rodada!", cidade1);
        }
        else if (pop1 == pop2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: População = %lu\n", cidade1, pop1);
            printf("Carta 2 - %s: População = %lu\n", cidade2, pop2);
            printf("Empate!");
        }
        else
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: População = %lu\n", cidade1, pop1);
            printf("Carta 2 - %s: População = %lu\n", cidade2, pop2);
            printf("Carta 2 (%s) venceu a rodada!", cidade2);
        }
        break;
    case 2:
        if (area1 > area2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Área = %.2f\n", cidade1, area1);
            printf("Carta 2 - %s: Área = %.2f\n", cidade2, area2);
            printf("Carta 1 (%s) venceu a rodada!", cidade1);
        }
        else if (area1 == area2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Área = %.2f\n", cidade1, area1);
            printf("Carta 2 - %s: Área = %.2f\n", cidade2, area2);
            printf("Empate!");
        }
        else
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Área = %.2f\n", cidade1, area1);
            printf("Carta 2 - %s: Área = %.2f\n", cidade2, area2);
            printf("Carta 2 (%s) venceu a rodada!", cidade2);
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Pib = %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s: Pib = %.2f\n", cidade2, pib2);
            printf("Carta 1 (%s) venceu a rodada!", cidade1);
        }
        else if (pib1 == pib2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Pib = %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s: Pib =  %.2f\n", cidade2, pib2);
            printf("Empate!");
        }
        else
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Pib = %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s: Pib = %.2f\n", cidade2, pib2);
            printf("Carta 2 (%s) venceu a rodada!", cidade2);
        }
        break;
    case 4:
        if (turis1 > turis2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Numero de pontos turisticos = %d\n", cidade1, turis1);
            printf("Carta 2 - %s: Numero de pontos turisticos = %d\n", cidade2, turis2);
            printf("Carta 1 (%s) venceu a rodada!", cidade1);
        }
        else if (turis1 == turis2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Numero de pontos turisticos = %d\n", cidade1, turis1);
            printf("Carta 2 - %s: Numero de pontos turisticos = %d\n", cidade2, turis2);
            printf("Empate!");
        }
        else
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Numero de pontos turisticos = %d\n", cidade1, turis1);
            printf("Carta 2 - %s: Numero de pontos turisticos = %d\n", cidade2, turis2);
            printf("Carta 2 (%s) venceu a rodada!", cidade2);
        }
        break;
    case 5:
        if (densidade1 < densidade2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Densidade Populacional = %.2f\n", cidade1, densidade1);
            printf("Carta 2 - %s: Densidade Populacional = %.2f\n", cidade2, densidade2);
            printf("Carta 1 (%s) venceu a rodada!", cidade1);
        }
        else if (densidade1 == densidade2)
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Densidade populacional = %.2f\n", cidade1, densidade1);
            printf("Carta 2 - %s: Densidade populacional = %.2f\n", cidade2, densidade2);
            printf("Empate!");
        }
        else
        {
            printf("Cartas escolhidas: %s x %s\n", cidade1, cidade2);
            printf("Carta 1 - %s: Densidade populacional = %.2f\n", cidade1, densidade1);
            printf("Carta 2 - %s: Densidade populacional = %.2f\n", cidade2, densidade2);
            printf("Carta 2 (%s) venceu a rodada!", cidade2);
        }
        break;
    }

    return 0;
}