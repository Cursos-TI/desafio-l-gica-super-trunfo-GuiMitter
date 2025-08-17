#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // CARTA 1:
    char estado1;
    char codigo_da_carta1[4], nome_cidade1[20];
    int numero_pontos_turisticos1;
    float area_km_quadrado1, pib1;

    // declaração variavel população como unsigned long int(desafio mestre)
    unsigned long int populacao1;

    // mais duas variaveis adicionadas para cumprir o nivel intermediario
    float densidade_populacional1, pib_per_capita1;

    // Variavel super poder(nivel mestre)
    float super_poder1;

    // CARTA 2:
    char estado2;
    char codigo_da_carta2[4], nome_cidade2[20];
    int numero_pontos_turisticos2;
    float area_km_quadrado2, pib2;

    // declaração variavel população como unsigned long int(desafio mestre)
    unsigned long int populacao2;

    // mais duas variaveis adicionadas para cumprir o nivel intermediario
    float densidade_populacional2, pib_per_capita2;

    // Variavel super poder(nivel mestre)
    float super_poder2;

    // Declaração de qual cidade é a vencedora
    char cidade_Vencedora[20];


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo); 
    // (Repita para cada propriedade)

    // Cadastro da Carta 1
    printf("Programa para Cadastro de cartas do Jogo Super Trunfo!\n");
    printf("\nIniciando cadastro da primeira carta.\n");

    printf("Digite a letra Referente ao estado da cidade(opções validas de 'A' a 'H')\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta(Código deve começar com a Letra referente ao estado,seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", codigo_da_carta1);

    // Como foi pedido para usar a função scanf só será possivel imprimir a primeira palavra que foi digitada pelo usuario;
    printf("Digite o nome da cidade\n");
    scanf("%s", nome_cidade1);

    printf("Digite o número de habitantes da cidade\n");
    scanf("%lu", &populacao1);

    printf("Digite A área da cidade em quilômetros quadrados.\n");
    scanf("%f", &area_km_quadrado1);

    printf("Digite o Produto Interno Bruto da cidade(PIB)\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade\n");
    scanf("%i", &numero_pontos_turisticos1);

    printf("Cadastro da carta 1 realizado com sucesso\n");
    // Fim do cadastro da carta 1

    // calculo de Desidade populacioanal
    densidade_populacional1 = (float)populacao1 / area_km_quadrado1;

    // cauculo de PIB per capita
    pib_per_capita1 = (float)pib1 / populacao1;

    // densidade_populacional_invertida(nivel mestre)
    float densidade_populacional1_invertida = (1 / densidade_populacional1);

    // cauculo super poder
    super_poder1 = populacao1 + area_km_quadrado1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1 + densidade_populacional1_invertida;

    // Cadastro da Carta 2
    printf("\nIniciando cadastro da segunda carta.\n");

    printf("Digite a letra Referente ao estado da cidade(opções validas de 'A' a 'H')\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(Código deve começar com a Letra referente ao estado,seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", codigo_da_carta2);

    // Como foi pedido para usar a função scanf só será possivel imprimir a primeira palavra que foi digitada pelo usuario;
    printf("Digite o nome da cidade\n");
    scanf("%s", nome_cidade2);

    printf("Digite o número de habitantes da cidade\n");
    scanf("%lu", &populacao2);

    printf("Digite A área da cidade em quilômetros quadrados.\n");
    scanf("%f", &area_km_quadrado2);

    printf("Digite o Produto Interno Bruto da cidade(PIB)\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade\n");
    scanf("%i", &numero_pontos_turisticos2);

    printf("Cadastro da carta 2 realizado com sucesso\n");
    // Fim do cadastro da carta 2

    // calculo de Desidade populacioanal
    densidade_populacional2 = (float)populacao2 / area_km_quadrado2;

    // cauculo de PIB per capita
    pib_per_capita2 = (float)pib2 / populacao2;

    // densidade_populacional_invertida(nivel mestre)
    float densidade_populacional2_invertida = (1 / densidade_populacional2);

    // cauculo super poder
    super_poder2 = populacao2 + area_km_quadrado2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + densidade_populacional2_invertida;

    // Exibir carta 1
    printf("Cartas cadastradas\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f Km²\n", area_km_quadrado1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", numero_pontos_turisticos1);

    // Exibir densidade da população e pib per capita(nivel intermediario)
    printf("Densidade Populacional: %.6f\n", densidade_populacional1);
    printf("PIB per Capita: %.6f\n", pib_per_capita1);

    // exibir super poder
    printf("Super poder: %.2f\n", super_poder1);

    printf("\n====================\n");

    // Exibir carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.3f Km²\n", area_km_quadrado2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", numero_pontos_turisticos2);

    // Exibir densidade da população e pib per capita(nivel intermediario)
    printf("Densidade Populacional: %.6f\n", densidade_populacional2);
    printf("PIB per Capita: %.6f\n", pib_per_capita2);

    // exibir super poder
    printf("Super poder: %.2f\n", super_poder2);
    printf("\n====================\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("Com base no atributo População.\n");

    // Escolhi comparar as populações
    if (populacao1 > populacao2)
    {
        printf("%s tem maior população.\n", nome_cidade1);
        //pesquisei como copiar uma string para outra variavel.
        strcpy(cidade_Vencedora, nome_cidade1);
        printf("A carta 1 Venceu\n");
        printf("Cidade vencedora: %s\n\n", cidade_Vencedora);
        
    }
    else
    {
        if (populacao1 == populacao2)
        {
            printf("%s e %s tem o mesmo número de habitantes.\n", nome_cidade1, nome_cidade2);
            strcpy(cidade_Vencedora, "Empate");
            printf("As cartas empataram\n\n");

        }
        else
        {
            printf("%s tem maior população.\n", nome_cidade2);
            strcpy(cidade_Vencedora, nome_cidade2);
            printf("A carta 2 Venceu\n");
            printf("Cidade vencedora: %s\n\n", cidade_Vencedora);
        }
    }
    

    return 0;
}
