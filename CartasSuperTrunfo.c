#include <stdio.h>
int main(){
    char Estado, Codigo[3], Cidade[50], Estado2, Codigo2[3], Cidade2[50];
    int Populacao, Turisticos, Populacao2, Turisticos2;
    float Area, PIB, Area2, PIB2;
    
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

    //resultado carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\nCódigo da Carta: %s\n", Estado, Codigo);
    printf("Cidade: %s\nPopulação: %d\n", Cidade, Populacao);
    printf("Área em km²: %.2f\nPIB: %.2f\n", Area, PIB);
    printf("Numero de pontos turisticos: %d\n", Turisticos);


    //resultado carta 2
    printf("CARTA 2\n");
    printf("Estado: %c\nCódigo da Carta: %s\n", Estado2, Codigo2);
    printf("Cidade: %s\nPopulação: %d\n", Cidade2, Populacao2);
    printf("Área em km²: %.2f\nPIB: %.2f\n", Area2, PIB2);
    printf("Numero de pontos turisticos: %d\n", Turisticos2);


    return 0;


}