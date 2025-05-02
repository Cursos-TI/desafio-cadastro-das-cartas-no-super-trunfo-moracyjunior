#include <stdio.h>
int main(){
    char Estado, Codigo[3], Cidade[52], Estado2, Codigo2[3], Cidade2[50];
    int Populacao, Turisticos, Populacao2, Turisticos2, escolhajogador, escolhajogador2, atributo1, atributo2, resultado1, resultado2;
    float Area, PIB, Area2, PIB2;
    float densidade, percapita, densidade2, percapita2;

    printf("### INSIRA SUAS CARTAS ###\n");

    //Carta 1
    //solicitar dado estado
    printf("Carta 1\nInsira a Letra do Estado de A a H: \n");
    scanf("%s", &Estado);

    //solicitar codigo da carta
    printf("Carta 1\nInsira código da Carta com A seguido de 01 até 04\nExemplo: A01: \n");
    scanf("%s", &Codigo);

    //solicitar nome da cidade
    printf("Carta 1\nInsira o Nome da Cidade: \n");
    scanf("%s", &Cidade);
                                                                                                                                                         
    //solicitar população
    printf("Carta 1\nInsira o numero de habitantes: \n");
    scanf("%d", &Populacao);

    //solicitar area
    printf("Carta 1\nInsira a Área em km²: \n");
    scanf("%f", &Area);

    //solicitar PIB
    printf("Carta 1\nInsira o PIB da Cidade: \n");
    scanf("%f", &PIB);

    //solicitar numero de pontos turisticos
    printf("Carta 1\nInsira o numero de pontos turisticos: \n");
    scanf("%d", &Turisticos);

   
    //Carta 2
    //solicitar dado estado
    printf("Carta 2\nInsira a Letra do Estado de A a H: \n");
    scanf("%s", &Estado2);

    //solicitar codigo da carta
    printf("Carta 2\nInsira código da Carta com B seguido de 01 até 04\nExemplo: B01: \n");
    scanf("%s", &Codigo2);

    //solicitar nome da cidade
    printf("Carta 2\nInsira o Nome da Cidade: \n");
    scanf("%s", &Cidade2);
                                                                                                                                                         
    //solicitar população
    printf("Carta 2\nInsira o numero de habitantes: \n");
    scanf("%d", &Populacao2);

    //solicitar area
    printf("Carta 2\nInsira a Área em km²: \n");
    scanf("%f", &Area2);

    //solicitar PIB
    printf("Carta 2\nInsira o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    //solicitar numero de pontos turisticos
    printf("Carta 2\nInsira o numero de pontos turisticos: \n");
    scanf("%d", &Turisticos2);

    densidade = Populacao / Area;
    densidade2 = Populacao2 / Area2;
    percapita = PIB / Populacao;
    percapita2 = PIB2 / Populacao2;

     // Menu tipo de batalha
     printf("Escolha uma Opção:\n");
     printf("1. BATALHA COMPLETA\n");
     printf("2. BATALHA POR ATRIBUTO\n");
     printf("3. BATALHA POR DOIS ATRIBUTOS\n");
     printf("Escolha:");
     scanf("%d", &escolhajogador);

switch(escolhajogador){
 case 1:
  //resultado carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\nCódigo da Carta: %s\n", Estado, Codigo);
    printf("Cidade: %s\nPopulação: %d\n", Cidade, Populacao);
    printf("Área em km²: %.2f\nPIB: %.2f\n", Area, PIB);
    printf("Numero de pontos turisticos: %d\n", Turisticos);
    printf("Densidade populacional Hab/km²: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", percapita);

    printf("\n");
    printf("****************\n");
    printf("\n");

  //resultado carta 2
    printf("CARTA 2\n");
    printf("Estado: %c\nCódigo da Carta: %s\n", Estado2, Codigo2);
    printf("Cidade: %s\nPopulação: %d\n", Cidade2, Populacao2);
    printf("Área em km²: %.2f\nPIB: %.2f\n", Area2, PIB2);
    printf("Numero de pontos turisticos: %d\n", Turisticos2);
    printf("Densidade populacional Hab/km²: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", percapita2);

    printf("###############\n");
    printf("*** Resultado da Batalha Completa ***\n");
    printf("\n");

 if(PIB > PIB2){
     printf("PIB: ** Venceu %s! **\n", Cidade);
 } else{
     printf("PIB: ** Venceu %s! **\n", Cidade2);
 }

 if(Populacao > Populacao2){
     printf("População: ** Venceu %s! **\n", Cidade);
 } else{
     printf("População: ** Venceu %s! **\n", Cidade2);
 }

 if(Area > Area2){
     printf("Área em km²: ** Venceu %s! **\n", Cidade);
 } else{
     printf("Área em km²: ** Venceu %s! **\n", Cidade2);
 }

 if(Turisticos > Turisticos2){
     printf("Numero de pontos turisticos: ** Venceu %s! **\n", Cidade);
 } else{
     printf("Numero de pontos turisticos: ** Venceu %s! **\n", Cidade2);
 }

 if(densidade < densidade2){
     printf("Densidade populacional Hab/km²: ** Venceu %s! **\n", Cidade); 
 } else{
     printf("Densidade populacional Hab/km²: ** Venceu %s! **\n", Cidade2);
 }

 if(percapita > percapita2){
     printf("PIB per capita: ** Venceu %s! **\n", Cidade); 
 } else{
     printf("PIB per capita: ** Venceu %s! **\n", Cidade2);
 }
 break;
 case 2:
     // Menu batalha por atributo
         printf("*** BATALHA POR ATRIBUTO! ***\n");
         printf("Escolha uma Opção:\n");
         printf("1. Área em km²\n");
         printf("2. PIB\n");
         printf("3. PONTOS TURÍSTICOS\n");
         printf("4. DENSIDADE POPULACIONAL\n");
         printf("5. PIB PER CAPITA\n");
         printf("6. POPULAÇÃO\n");
         printf("Escolha:");
         scanf("%d", &escolhajogador2);

       switch(escolhajogador2){
       case 1:
       if(Area > Area2){
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("Área em km²: ** Venceu %s! **\n", Cidade);
       } else{
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("Área em km²: ** Venceu %s! **\n", Cidade2);
       }
       break;
       case 2:
       if(PIB > PIB2){
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("PIB: ** Venceu %s! **\n", Cidade);
       } else{
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("PIB: ** Venceu %s! **\n", Cidade2);
       }
       break;
       case 3:
       if(Turisticos > Turisticos2){
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("Numero de pontos turisticos: ** Venceu %s! **\n", Cidade);
       } else{
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("Numero de pontos turisticos: ** Venceu %s! **\n", Cidade2);
       }
       break;
       case 4:
       if(densidade < densidade2){
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("Densidade populacional Hab/km²: ** Venceu %s! **\n", Cidade); 
       } else{
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("Densidade populacional Hab/km²: ** Venceu %s! **\n", Cidade2);
       }
       break;
       case 5:
       if(percapita > percapita2){
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("PIB per capita: ** Venceu %s! **\n", Cidade); 
       } else{
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("PIB per capita: ** Venceu %s! **\n", Cidade2);
       }
       break;
       case 6:
       if(Populacao > Populacao2){
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("População: ** Venceu %s! **\n", Cidade);
       } else{
             printf("*** Resultado da Batalha por Atributo ***\n");
             printf("População: ** Venceu %s! **\n", Cidade2);
       }
       break;
       default:
        printf("Opção invalida\n");
       }
 case 3:
     // solicitar o primeiro atributo
     printf("*** BATALHA POR DOIS ATRIBUTOS ***\n");
     printf("Escolha o Primeiro Atributo\n");
     printf("1. Área em km²\n");
     printf("2. PIB\n");
     printf("3. Pontos Turísticos\n");
     printf("4. Densidade Populacional\n");
     printf("5. PIB Percapita\n");
     printf("6. População\n");
     printf("Digite o Atributo: ");
     scanf("%d", &atributo1);
     
     // formula ternario para chegar ao atributo vencedor
     resultado1 = Area > Area2 && PIB > PIB2 && Turisticos > Turisticos2 && densidade < densidade2 && percapita > percapita2 && Populacao > Populacao2 ? 1 : 0;


     // solicitar o segundo atributo
     printf("*** BATALHA POR DOIS ATRIBUTOS ***\n");
     printf("Escolha o Segundo Atributo\n");
     printf("### NÃO REPETIR O ATRIBUTO ###\n");
     printf("1. Área em km²\n");
     printf("2. PIB\n");
     printf("3. Pontos Turísticos\n");
     printf("4. Densidade Populacional\n");
     printf("5. PIB Percapita\n");
     printf("6. População\n");
     printf("Digite o Atributo: ");
     scanf("%d", &atributo2);

     // formula ternario para chegar ao atributo vencedor
     resultado2 = Area > Area2 && PIB > PIB2 && Turisticos > Turisticos2 && densidade < densidade2 && percapita > percapita2 && Populacao > Populacao2 ? 1 : 0;

     if ( resultado1 == resultado2 ){
        printf("** Venceu %s! **\n", Cidade);
     } else if ( resultado1 != resultado2){
        printf("** EMPATOU **\n");
     } else {
        printf("** Venceu %s! **\n", Cidade2);
     }
     break;
     
  

    default:
    printf("OPÇÃO INVALIDA\n");
}


 return 0;


}
