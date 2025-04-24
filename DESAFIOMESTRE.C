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
    int numeropontos1, numeropontos2;
    unsigned long int população1, população2;
    int área1, pib1;
    int área2, pib2;
    char nome[50];
    float media, media1;
    float media2, media3;
    int resultado , resultado1 ,resultado2, resultado3, resultado4, resultado5;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("País Brasil estado A cidade 01\n");
    printf("Insira os dados pedidos a seguir, carta A01 \n");
    printf("Insira codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &numeropontos1);
    
    printf("Insira a população da cidade A01: \n");
    scanf("%d", &população1);
    printf("Insira área em km² \n");
    scanf("%d", &área1);
    printf("Insira pib da cidade \n");
    scanf("%d", &pib1);
    printf("Insira nome da cidade \n");
    scanf("%s", &nome);
    printf("Carta cadastrada \n");
    printf("Codigo da cidade: %s\nNumero de pontos turisticos: %d \n", codigo, numeropontos1);
    printf("População: %3.d\nArea em km²: %3.d\nPib: %3.d\n", população1, área1, pib1);
    printf("Nome da Cidade: %s\n",nome);
   
    
    media= (população1 / área1); 
    media1= (pib1 / população1);
    
    printf("A Densidade Populacional é: %3.f \n",media);
    printf("O PIB per capita é: %3.f \n",media1);

    float superpoderA01 = numeropontos1 + área1 + população1 + pib1;
    printf("O superpoder da carta A01 É %3.f;\n",superpoderA01);
 // fim carta a01
    printf("País Brasil estado A cidade 02\n");
    printf("Insira os dados pedidos a seguir, carta A02 \n");
    printf("Insira codigo da cidade: \n");
    scanf("%s", &codigo);
    printf("Insira a população da cidade A02: \n");
    scanf("%d", &população2);
    printf("Insira área em km² \n");
    scanf("%d", &área2);
    printf("Insira pib da cidade \n");
    scanf("%d", &pib2);
    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &numeropontos2);
    printf("Insira nome da cidade \n");
    scanf("%s", &nome);
    printf("O superpoder da carta A01 É:\n",superpoderA01);
   
    media2= (população2/ área2); 
    media3= (pib2 / população2);
    
    printf("Carta cadastrada \n");
    printf("Codigo da cidade: %s\nNumero de pontos turisticos: %d \n", codigo, numeropontos2);
    printf("População: %3.d\nArea em km²: %3.d\nPib: %3.d\n", população2, área2, pib2);
    printf("Nome da Cidade: %s\n",nome);
    printf("A Densidade Populacional é: %3.f \n",media);
    printf("O PIB per capita é: %3.f \n",media1);

    float superpoderA02 = numeropontos2 + área2 + população2 + pib2;
    printf("O SuperPoder da carta A02 É:%3.f\n",superpoderA02);
    
    resultado = superpoderA01 > superpoderA02;
    resultado1 = pib1 > pib2;
    resultado2 = área1 > área2;
    resultado3 = numeropontos1 > numeropontos2;
    resultado4 = media < media2;
    resultado5 = media1 > media3;

    printf("Comparação de super poder é: %d\n", resultado);
    printf("Comparação PIB é:%d \n", resultado1);
    printf("Comparação de área é; %d\n", resultado2);
    printf("A comparação numero de pontos turistico é:%d\n",resultado3);
    printf("A comparação de densidade popúlacional é;%d\n",resultado4);
    printf("Comparação de PIB PER CAPITA É:%d\n",resultado5);
    

    
    



    return 0;
}
