#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades,
    char Estado,Estado2;
    char codigo[4],codigo2[4];
    char cidade[50],cidade2[50];
    int populacao,populacao2;
    float area,area2;
    float pib,pib2;
    int pontosturistico,pontosturistico2;
    float densidade_populacional,densidade_populacional2;
    float per_capita,per_capita2;
  
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Cadastro da primeira carta
    printf ("Bem vindo ao Jogo Super Trunfo. \n"); 
    printf("\n");
    printf("Coloque os dados da primeira carta!\n");
    printf("Insira o Estado, uma letra de 'A' a 'H': ");
    scanf(" %c",&Estado);
    printf("Insira o codigo da carta,a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população: ");
    scanf("%d", &populacao);
    printf("Insira a área em km²: ");
    scanf("%f", &area);
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico);
    printf("\n");

    // Cadastro da segunda carta
    printf ("Agora coloque os dados da segunda carta! \n");
    printf("Insira o Estado, uma letra de 'A' a 'H': : ");
    scanf(" %c",&Estado2);
    printf("Insira o codigo da carta,a letra do estado seguida de um número de 01 a 04:: ");
    scanf(" %s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira a população: ");
    scanf("%d", &populacao2);
    printf("Insira a área em km²: ");
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico2);
    printf("\n");

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

    return 0;
}
