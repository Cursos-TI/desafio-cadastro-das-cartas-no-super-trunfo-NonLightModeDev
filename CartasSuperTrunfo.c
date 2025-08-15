#include <stdio.h>

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
    fgets(carta1.codigo, 3, stdin);
    getchar();
    printf("Informe o nome da cidade: ");
    fgets(carta1.cidade, 50, stdin);
    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);
    printf("Informe a Área (km2): ");
    scanf("%f", &carta1.areaDaCidade);
    printf("Informe o PIB: R$");
    scanf("%f", &carta1.pib);
    printf("Informe o número de Pontos Turísticos: ");
    scanf("%d", &carta1.qtdPontosTuristicos);
    printf("| --------------- |");


    /*
        Cadastrando informações da Carta 2:
    */
    struct Carta carta2;
    printf("\n\n\n| --- Carta 2 --- |");
    printf("\nInforme um estado ('A' a 'H'): ");
    scanf(" %c", &carta2.estado);
    getchar();
    printf("Informe um código ('01' a '04'): ");
    fgets(carta2.codigo, 3, stdin);
    getchar();
    printf("Informe o nome da cidade: ");
    fgets(carta2.cidade, 50, stdin);
    printf("Informe a população: ");
    scanf("%d", &carta2.populacao);
    printf("Informe a Área (km2): ");
    scanf("%f", &carta2.areaDaCidade);
    printf("Informe o PIB: R$");
    scanf("%f", &carta2.pib);
    printf("Informe o número de Pontos Turísticos: ");
    scanf("%d", &carta2.qtdPontosTuristicos);
    printf("| --------------- |");

    /*
        Exibindo informações da Carta 1:
    */
    printf("\n\n\n\n\n| --- Carta --- |");
    printf("\nCarta 1");
    printf("\nEstado: %c", carta1.estado);
    printf("\nCódigo: %c%s", carta1.estado, carta1.codigo);
    printf("\nNome da Cidade: %s", carta1.cidade);
    printf("População: %d", carta1.populacao);
    printf("\nÁrea: %.2fkm2", carta1.areaDaCidade);
    printf("\nPIB: R$%.2f", carta1.pib);
    printf("\nNúmero de pontos turísticos: %d\n", carta1.qtdPontosTuristicos);
    printf("| --------------- |");

    /*
        Exibindo informações da Carta 2:
    */
    printf("\n\n\n| --- Carta --- |");
    printf("\nCarta 2");
    printf("\nEstado: %c", carta2.estado);
    printf("\nCódigo: %c%s", carta2.estado, carta2.codigo);
    printf("\nNome da Cidade: %s", carta2.cidade);
    printf("População: %d", carta2.populacao);
    printf("\nÁrea: %.2fkm2", carta2.areaDaCidade);
    printf("\nPIB: R$%.2f", carta2.pib);
    printf("\nNúmero de pontos turísticos: %d\n", carta2.qtdPontosTuristicos);
    printf("| --------------- |");
    return 0;
}
