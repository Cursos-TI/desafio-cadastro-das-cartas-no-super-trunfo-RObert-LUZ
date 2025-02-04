#include <stdio.h>




int main() {

    char codigo[100];
    int numeropontos;
    float população, área, pib;
    char nome[50];
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
    
    printf("Carta cadastrada \n");
    printf("Codigo da cidade: %s\nNumero de pontos turisticos: %d \n", codigo, numeropontos);
    printf("População: %f\nArea em km²: %f\nPib: %f\n", população, área, pib);
    printf("Nome da Cidade: %s",nome);


    return 0;
}
