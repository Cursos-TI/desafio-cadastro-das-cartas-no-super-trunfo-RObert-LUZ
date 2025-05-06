# include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[100];
    int numeropontos1, numeropontos2;
    unsigned long int população1, população2;
    int área1, pib1;
    int área2, pib2;
    char nome[50];
    char nome1[50];
    float media, media1;
    float media2, media3;
    int resultado , resultado1 ,resultado2, resultado3, resultado4, resultado5;
    // Cadastro das Cartas:

    printf("País Brasil \n");
    printf("Insira os dados pedidos a seguir, carta A01 \n");
    printf("Insira codigo do País: \n");
    scanf("%s", &codigo);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &numeropontos1); 
    printf("Insira a população do País: \n");
    scanf("%d", &população1);
    printf("Insira área em km² \n");
    scanf("%d", &área1);
    printf("Insira pib da cidade \n");
    scanf("%d", &pib1);
    printf("Insira nome do País\n");
    scanf("%s", &nome);
    printf("Carta cadastrada \n");
    printf("Codigo da cidade: %s\nNumero de pontos turisticos: %d \n", codigo, numeropontos1);
    printf("População: %3.d\nArea em km²: %3.d\nPib: %3.d\n", população1, área1, pib1);
    printf("Nome do País: %s\n",nome);
   
    
    media= (população1 / área1); 
    media1= (pib1 / população1);
    
    printf("A Densidade Populacional é: %3.f \n",media);
    printf("O PIB per capita é: %3.f \n",media1);

    float superpoderA01 = numeropontos1 + área1 + população1 + pib1;
    printf("O superpoder da carta É %3.f;\n",superpoderA01);
 // fim carta a01
    printf("País Argentina\n");
    printf("Insira os dados pedidos a seguir, carta A02 \n");
    printf("Insira codigo da País: \n");
    scanf("%s", &codigo);
    printf("Insira a população do País: \n");
    scanf("%d", &população2);
    printf("Insira área em km² \n");
    scanf("%d", &área2);
    printf("Insira pib da País \n");
    scanf("%d", &pib2);
    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &numeropontos2);
    printf("Insira nome do País \n");
    scanf("%s", &nome1);
    printf("O superpoder da carta É:\n",superpoderA01);
    //FIM CARTA A02
   
    media2= (população2/ área2); 
    media3= (pib2 / população2);
    
    printf("Carta cadastrada \n");
    printf("Codigo do País: %s\nNumero de pontos turisticos: %d \n", codigo, numeropontos2);
    printf("População: %3.d\nArea em km²: %3.d\nPib: %3.d\n", população2, área2, pib2);
    printf("Nome do País: %s\n",nome1);
    printf("A Densidade Populacional é: %3.f \n",media);
    printf("O PIB per capita é: %3.f \n",media1);

    float superpoderA02 = numeropontos2 + área2 + população2 + pib2;
    printf("O SuperPoder da carta 2 É:%3.f\n",superpoderA02);
   
    // comparação de atributos escolhidos pelo jogador
   
    int escolhaJogador;

    printf("JOGO COMPARAÇÃO DE CARTAS");
    printf(" Escolha uma opção; \n");
    printf("1.População \n");
    printf("2.Área \n");
    printf("3.PIB\n");
    printf("4.Numero de pontos turisticos \n");
    printf("5.Densidade demografica \n");
    

    printf("Escolha atributo para comparação:\n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador escolheu comparar população -\n");
    break;   
        case 2:
        printf("Jogador escolheu comparar área -\n");
    break;
        case 3:
        printf("Jogador escolheu comparar PIB -\n");
    break;
        case 4:
         printf("Jogador escolheu comparar Numero de pontos turisticos\n ");
    break;
        case 5:
         printf("Jogador escolheu comparar densidade demografica\n");
         
         
   break;

    default:
        printf("Opção inválida\n");
        break;
    }
         if (escolhaJogador == pib1==pib2, população1 == população2, área1 == área2, numeropontos1 == numeropontos2, 
                                                                                                 media2 == media3   )
         {
            printf("### JOGO EMAPTOU\n");
         }
         


      else  if ((escolhaJogador == 1 ) == (população1> população2)|| (escolhaJogador==2)==(área1>área2) 
      || (escolhaJogador==3)==(pib1 >pib2) ||(escolhaJogador==4)==(numeropontos1>numeropontos2) 
                                                      ||(escolhaJogador == 5) == (media2<media3)) 
      {

         printf("Carta Brasil ganhou  -\n");
      }  else {

         printf("Carta Argentina Ganhou\n");
        

      }


    
    
    



    return 0;
   }

