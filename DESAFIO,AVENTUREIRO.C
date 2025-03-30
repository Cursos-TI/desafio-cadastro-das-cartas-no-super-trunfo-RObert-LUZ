#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[100];
    int numeropontos;
    float população, área, pib;
    char nome[50];
    float media, media1;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("País Brasil estado A cidade 01\n");
    printf("Insira os dados pedidos a seguir, carta A01 \n");
    printf("Insira codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &numeropontos);
    
    printf("Insira a população da cidade A01: \n");
    scanf("%f", &população);
    printf("Insira área em km² \n");
    scanf("%f", &área);
    printf("Insira pib da cidade \n");
    scanf("%f", &pib);
    printf("Insira nome da cidade \n");
    scanf("%s", &nome);
    media= (área / população); 
    media1= (pib / população);
    
    printf("Carta cadastrada \n");
    printf("Codigo da cidade: %s\nNumero de pontos turisticos: %d \n", codigo, numeropontos);
    printf("População: %3.f\nArea em km²: %3.f\nPib: %3.f\n", população, área, pib);
    printf("Nome da Cidade: %s\n",nome);
    printf("A Densidade Populacional é: %3.f \n",media);
    printf("O PIB per capita é: %3.f",media1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
