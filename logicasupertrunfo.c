#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    int main() {
        char Estado,Estado2;
        char codigo[4],codigo2[4];
        char cidade[50],cidade2[50];
        int populacao,populacao2;
        float area,area2;
        float pib,pib2;
        int pontosturistico,pontosturistico2;
        float densidade_populacional,densidade_populacional2;
        float per_capita,per_capita2;
    
        //CADASTRO DA PRIMEIRA CARTA
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
    
        //Cadastro da segunda carta
        printf ("Agora coloque os dados da segunda carta! \n");
        printf("Insira o Estado,Uma letra de 'A' a 'H': ");
        scanf(" %c",&Estado2);
        printf("Insira o codigo da carta,a letra do estado seguida de um número de 01 a 04: ");
        scanf("%s", codigo2);
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
    
        //Calculando densidade e pib per capita primeira carta
        densidade_populacional = (float)populacao/area;
        per_capita = (float)pib/populacao;
        //Calculando densidade e pib per capita segunda carta
        densidade_populacional2 = (float)populacao2/area2;
        per_capita2 = (float)pib2/populacao2;

        printf("Comparação de cartas (Atributo: População)\n");     // Comparação de Cartas:
        printf("\n");
        printf("carta 1 - %s, tem população de: %d\n",cidade,populacao);  //informações da primeira carta
        printf("carta 2- %s, tem população de: %d\n",cidade2,populacao2); //informações da primeira carta


    //uso de if-else para verificar a carta com maior população

    if (populacao > populacao2) {
        printf("A carta 1- %s tem maior população.\n", cidade);  //Ebição do valor do atributo da primeira carta
        printf("Resultado: carta 1 - %s é a carta vencedora.\n", cidade);  // Exibição da carta vencedora
    } else {
        printf("A carta 2 - %s tem maior população.\n", cidade2);  //Ebição do valor do atributo da segunda carta
        printf("Resultado: carta 2 - %s é a carta vencedora.\n", cidade2); // Exibição da carta vencedora
    }
    return 0;
    }