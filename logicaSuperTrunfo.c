#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades,
    char Estado[50],Estado2[50];
    char codigo[4],codigo2[4];
    char cidade[50],cidade2[50];
    int populacao,populacao2;
    float area,area2;
    float pib,pib2;
    int pontosturistico,pontosturistico2;
    float densidade_populacional,densidade_populacional2;
    float per_capita,per_capita2;
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    printf ("Bem vindo ao Jogo Super Trunfo. \n"); 
    printf("\n");
    printf("Coloque os dados da primeira carta!\n");
    printf("Insira o Estado: ");
    scanf("%s",Estado);
    printf("Insira o codigo da carta: ");
    scanf("%s", codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população: ");
    scanf("%ld", &populacao);
    printf("Insira a área em km²: ");
    scanf("%f", &area);
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico);
    printf("\n");

    printf ("Agora coloque os dados da segunda carta! \n");
    printf("Insira o Estado: ");
    scanf("%s",Estado2);
    printf("Insira o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira a população: ");
    scanf("%ld", &populacao2);
    printf("Insira a área em km²: ");
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico2);
    printf("\n");
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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
