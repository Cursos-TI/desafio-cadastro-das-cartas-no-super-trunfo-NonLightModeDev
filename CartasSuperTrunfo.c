#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

/*
  Um registro para armazenar as informações de cada carta
*/
struct Carta
{
    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float areaDaCidade;
    float pib;
    int qtdPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    /*
        Cadastrando informações da Carta 1:
    */
    struct Carta carta1;
    printf("| --- Carta 1 --- |");
    printf("\nInforme um estado ('A' a 'H'): ");
    scanf(" %c", &carta1.estado);
    getchar();
    printf("Informe um código ('01' a '04'): ");
    fgets(carta1.codigo, sizeof(carta1.codigo), stdin);
    getchar();
    printf("Informe o nome da cidade: ");
    fgets(carta1.cidade, sizeof(carta1.cidade), stdin);
    carta1.cidade[strcspn(carta1.cidade, "\n")] = '\0';
    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);
    printf("Informe a Área (km²): ");
    scanf("%f", &carta1.areaDaCidade);
    printf("Informe o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Informe o número de Pontos Turísticos: ");
    scanf("%d", &carta1.qtdPontosTuristicos);
    carta1.densidadePopulacional = carta1.populacao / carta1.areaDaCidade;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    printf("| --------------- |");

    printf("\n\n\n");
    /*
        Cadastrando informações da Carta 2:
    */
    struct Carta carta2;
    printf("| --- Carta 2 --- |");
    printf("\nInforme um estado ('A' a 'H'): ");
    scanf(" %c", &carta2.estado);
    getchar();
    printf("Informe um código ('01' a '04'): ");
    fgets(carta2.codigo, sizeof(carta2.codigo), stdin);
    getchar();
    printf("Informe o nome da cidade: ");
    fgets(carta2.cidade, sizeof(carta2.cidade), stdin);
    carta2.cidade[strcspn(carta2.cidade, "\n")] = '\0';
    printf("Informe a população: ");
    scanf("%d", &carta2.populacao);
    printf("Informe a Área (km²): ");
    scanf("%f", &carta2.areaDaCidade);
    printf("Informe o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Informe o número de Pontos Turísticos: ");
    scanf("%d", &carta2.qtdPontosTuristicos);
    carta2.densidadePopulacional = carta2.populacao / carta2.areaDaCidade;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    printf("| --------------- |");

    printf("\n\n\n\n\n");
    /*
        Exibindo informações da Carta 1:
    */
    printf("| ---- Carta ---- |");
    printf("\nCarta 1");
    printf("\nEstado: %c", carta1.estado);
    printf("\nCódigo: %c%s", carta1.estado, carta1.codigo);
    printf("\nNome da Cidade: %s", carta1.cidade);
    printf("\nPopulação: %d", carta1.populacao);
    printf("\nÁrea: %.2f km²", carta1.areaDaCidade);
    printf("\nPIB: %.2f bilhões de reais", carta1.pib);
    printf("\nNúmero de Pontos Turísticos: %d", carta1.qtdPontosTuristicos);
    printf("\nDensidade Populacional: %.2f hab/km²", carta1.densidadePopulacional);
    printf("\nPIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    printf("| --------------- |");

    printf("\n\n\n");
    /*
        Exibindo informações da Carta 2:
    */
    printf("| ---- Carta ---- |");
    printf("\nCarta 2");
    printf("\nEstado: %c", carta2.estado);
    printf("\nCódigo: %c%s", carta2.estado, carta2.codigo);
    printf("\nNome da Cidade: %s", carta2.cidade);
    printf("\nPopulação: %d", carta2.populacao);
    printf("\nÁrea: %.2f km²", carta2.areaDaCidade);
    printf("\nPIB: %.2f bilhões de reais", carta2.pib);
    printf("\nNúmero de Pontos Turísticos: %d", carta2.qtdPontosTuristicos);
    printf("\nDensidade Populacional: %.2f hab/km²", carta2.densidadePopulacional);
    printf("\nPIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    printf("| --------------- |");
    return 0;
}
