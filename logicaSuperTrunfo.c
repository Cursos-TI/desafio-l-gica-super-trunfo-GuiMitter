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
    /*
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
        */

    // Comparação entre cartas, implementando logica do desafio intermediario
    /*
    int opcao;
    printf("Agora escolha um atributo de comparação entre as duas cartas.\n");
    printf("1 - População\n");
    printf("2 - Àrea\n");
    printf("3- PIB\n");
    printf("4 - Número de pontos turisticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: População\n");
            printf("População carta 1 : %d\n", populacao1);
            printf("População carta 2 : %d\n", populacao2);
            printf("Carta 1 Venceu");
        }
        else if (populacao1 < populacao2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: População\n");
            printf("População carta 1 : %d\n", populacao1);
            printf("População carta 2 : %d\n", populacao2);
            printf("Carta 2 venceu");
        }
        else
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: População\n");
            printf("População carta 1 : %d\n", populacao1);
            printf("População carta 2 : %d\n", populacao2);

            printf("Empate!");
        }

        break;
    case 2:
        if (area_km_quadrado1 > area_km_quadrado2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Area\n");
            printf("Area carta 1 : %d\n", area_km_quadrado1);
            printf("area carta 2 : %d\n", area_km_quadrado2);
            printf("Carta 1 Venceu");
        }
        else if (area_km_quadrado1 < area_km_quadrado2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Area\n");
            printf("Area carta 1 : %d\n", area_km_quadrado1);
            printf("area carta 2 : %d\n", area_km_quadrado2);
            printf("Carta 2 venceu");
        }
        else
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Area\n");
            printf("Area carta 1 : %d\n", area_km_quadrado1);
            printf("area carta 2 : %d\n", area_km_quadrado2);
            printf("Empate!");
        }

        break;
    case 3:
        if (pib1 > pib2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: PIB\n");
            printf("PIB carta 1 : %d\n", pib1);
            printf("PIB carta 2 : %d\n", pib2);
            printf("Carta 1 Venceu");
        }
        else if (pib1 < pib2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: PIB\n");
            printf("PIB carta 1 : %d\n", pib1);
            printf("PIB carta 2 : %d\n", pib2);
            printf("Carta 2 venceu");
        }
        else
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: PIB\n");
            printf("PIB carta 1 : %d\n", pib1);
            printf("PIB carta 2 : %d\n", pib2);
            printf("Empate!");
        }

        break;
    case 4:
        if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Número de pontos Turisticos\n");
            printf("Número de pontos Turisticos carta 1 : %d\n", numero_pontos_turisticos1);
            printf("Número de pontos Turisticos carta 2 : %d\n", numero_pontos_turisticos2);
            printf("Carta 1 Venceu");
        }
        else if (numero_pontos_turisticos1 < numero_pontos_turisticos2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Número de pontos Turisticos\n");
            printf("Número de pontos Turisticos carta 1 : %d\n", numero_pontos_turisticos1);
            printf("Número de pontos Turisticos carta 2 : %d\n", numero_pontos_turisticos2);
            printf("Carta 2 venceu");
        }
        else
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Número de pontos Turisticos\n");
            printf("Número de pontos Turisticos carta 1 : %d\n", numero_pontos_turisticos1);
            printf("Número de pontos Turisticos carta 2 : %d\n", numero_pontos_turisticos2);
            printf("Empate!");
        }

        break;
    case 5:
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Densidade demográfica\n");
            printf("Densidade demográfica carta 1 : %d\n", densidade_populacional1);
            printf("Densidade demográfica carta 2 : %d\n", densidade_populacional2);
            printf("Carta 1 Venceu");
        }
        else if (densidade_populacional1 > densidade_populacional2)
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Densidade demográfica\n");
            printf("Densidade demográfica carta 1 : %d\n", densidade_populacional1);
            printf("Densidade demográfica carta 2 : %d\n", densidade_populacional2);
            printf("Carta 2 venceu");
        }
        else
        {
            printf("Carta 1 País: %s - Carta 2 País: %s\n", nome_cidade1, nome_cidade2);
            printf("atributo usado como comparação: Densidade demográfica\n");
            printf("Densidade demográfica carta 1 : %d\n", densidade_populacional1);
            printf("Densidade demográfica carta 2 : %d\n", densidade_populacional2);
            printf("Empate!");
        }

        break;

    default:
        printf("Opção não valida");
        break;
    }
*/

    // Comparação entre dois atributos, desafio Mestre.
    // Resultado da primeira e da segunda comparação
    int resultado1, resultado2, opcao1, opcao2;
    // Inicialize as somas
    float soma1 = 0;
    float soma2 = 0;

    printf("Está na hora de escolher quais atributos serão base para comparação entre as duas cartas;");

    printf("Escolha o primeiro atributo de comparação entre as duas cartas.\n");
    printf("1 - População\n");
    printf("2 - Àrea\n");
    printf("3- PIB\n");
    printf("4 - Número de pontos turisticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &opcao1);

    printf("Escolha o primeiro atributo de comparação entre as duas cartas.\n");
    printf("1 - População\n");
    printf("2 - Àrea\n");
    printf("3- PIB\n");
    printf("4 - Número de pontos turisticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &opcao2);

    printf("Carta1 Pais: %s\n", nome_cidade1);
    printf("Carta2 Pais: %s\n", nome_cidade2);

    switch (opcao1)
    {
    case 1:
        printf("Você escolheu o atributo população\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        printf("População carta1: %ld\n", populacao1);
        printf("População carta2: %ld\n", populacao2);
        soma1 = soma1 + populacao1;
        soma2 = soma2 + populacao2;

        break;
    case 2:
        printf("Você escolheu o atributo Àrea\n");
        resultado1 = area_km_quadrado1 > area_km_quadrado2 ? 1 : 0;
        printf("Àrea carta1: %.2f\n", area_km_quadrado1);
        printf("Àrea carta2: %.2f\n", area_km_quadrado2);
        soma1 = soma1 + area_km_quadrado1;
        soma2 = soma2 + area_km_quadrado2;
        break;
    case 3:
        printf("Você escolheu o atributo PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        printf("PIB carta1: %.2f\n", pib1);
        printf("PIB carta2: %.2f\n", pib2);
        soma1 = soma1 + pib1;
        soma2 = soma2 + pib2;
        break;
    case 4:
        printf("Você escolheu o atributo Número de pontos turisticos\n");
        resultado1 = numero_pontos_turisticos1 > numero_pontos_turisticos2 ? 1 : 0;
        printf("Número de pontos turisticos carta1: %d\n", numero_pontos_turisticos1);
        printf("Número de pontos turisticos carta2: %d\n", numero_pontos_turisticos2);
        soma1 = soma1 + numero_pontos_turisticos1;
        soma2 = soma2 + numero_pontos_turisticos2;
        break;
    case 5:
        printf("Você escolheu o atributo Densidade demográfica\n");
        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        printf("Densidade demográfica carta1: %f\n", densidade_populacional1);
        printf("Densidade demográfica carta2: %f\n", densidade_populacional2);
        soma1 = soma1 + densidade_populacional1;
        soma2 = soma2 + densidade_populacional2;
        break;

    default:
        printf("opção invalida\n");
        break;
    }

    if (opcao1 == opcao2)
    {
        printf("Você escolheu o mesmo atributo duas vezes\n");
    }
    else
    {
        switch (opcao2)
        {
        case 1:
            printf("Você escolheu o atributo população\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            printf("População carta1: %lu\n", populacao1);
            printf("População carta2: %lu\n", populacao2);
            soma1 = soma1 + populacao1;
            soma2 = soma2 + populacao2;

            break;
        case 2:
            printf("Você escolheu o atributo Àrea\n");
            resultado2 = area_km_quadrado1 > area_km_quadrado2 ? 1 : 0;
            printf("Àrea carta1: %.2f\n", area_km_quadrado1);
            printf("Àrea carta2: %.2f\n", area_km_quadrado2);
            soma1 = soma1 + area_km_quadrado1;
            soma2 = soma2 + area_km_quadrado2;
            break;
        case 3:
            printf("Você escolheu o atributo PIB\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            printf("PIB carta1: %.2f\n", pib1);
            printf("PIB carta2: %.2f\n", pib2);
            soma1 = soma1 + pib1;
            soma2 = soma2 + pib2;
            break;
        case 4:
            printf("Você escolheu o atributo Número de pontos turisticos\n");
            resultado2 = numero_pontos_turisticos1 > numero_pontos_turisticos2 ? 1 : 0;
            printf("Número de pontos turisticos carta1: %d\n", numero_pontos_turisticos1);
            printf("Número de pontos turisticos carta2: %d\n", numero_pontos_turisticos2);
            soma1 = soma1 + numero_pontos_turisticos1;
            soma2 = soma2 + numero_pontos_turisticos2;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade demográfica\n");
            resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            printf("Densidade demográfica carta1: %.2f\n", densidade_populacional1);
            printf("Densidade demográfica carta2: %.2f\n", densidade_populacional2);
            soma1 = soma1 + densidade_populacional1;
            soma2 = soma2 + densidade_populacional2;
            break;

        default:
            printf("opção invalida\n");
            break;
        }

        if (resultado1 && resultado2)
        {
            printf("Carta 1 Venceu entre as comparações dos 2 atributos\n");
        }else if (resultado1!= resultado2)
        {
             printf("Empate entre as comparações dos 2 atributos\n");
        }else{
            printf("Carta 2 Venceu entre as comparações dos 2 atributos\n");
        }


        printf("Valor de soma dos dois atributos escolhidos: \n");
            printf("Carta 1 : %f\n", soma1);
            printf("Carta 2 : %f\n", soma2);

        if(soma1>soma2){
            printf("Carta 1 Venceu, por ter soma maior");
        }else if(soma1<soma2){
            printf("Carta 2 Venceu, por ter soma maior");
        }else{
            printf("Houve empate");
        }



        
    }

    return 0;
}
