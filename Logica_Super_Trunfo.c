#include <stdio.h>

int main() {

    char Estado1[50];
    char Codigo1[50];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Turismo1;
    //Densidade populacional
    float DP1;
    //PIB per capita
    float PPC1;
    char Estado2[50];
    char Codigo2[50];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Turismo2;
    //Densidade populacional
    float DP2;
    //PIB per capita
    float PPC2;

    printf ("*** Carta 1 ***\n");

    printf ("Digite o Nome do Estado: ");
    scanf ("%s", Estado1);

    printf ("Digite o Código da carta: ");
    scanf ("%s", &Codigo1);

    printf ("Digite o Nome da cidade: ");
    scanf ("%s", &Cidade1);

    printf ("Digite o número populacional: ");
    scanf ("%d", &Populacao1);

    printf ("Digite a área do estado em km²: ");
    scanf ("%f", &Area1);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIB1);

    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &Turismo1);

    printf ("Nome do Estado: %s\n", Estado1);

    printf ("Código da carta: %s\n", Codigo1);

    printf ("Nome da cidade: %s\n", Cidade1);

    printf ("População: %d\n", Populacao1);

    printf ("Área do estado em km²: %f\n", Area1);

    printf ("PIB: %f\n", PIB1);

    printf ("Número de pontos turísticos: %d\n", Turismo1);

    DP1 = (float)(Populacao1 / Area1);
    printf ("Densidade populacional: %f\n", DP1);

    PPC1 = (float)(PIB1 / Populacao1);
    printf ("PIB per capita: %f\n", PPC1);

    printf ("*** Carta 2 ***\n");

    printf ("Digite o Nome do Estado: ");
    scanf ("%s", &Estado2);

    printf ("Digite o Código da carta: ");
    scanf ("%s", &Codigo2);

    printf ("Digite o Nome da cidade: ");
    scanf ("%s", &Cidade2);

    printf ("Digite o número populacional: ");
    scanf ("%d", &Populacao2);

    printf ("Digite a área do estado em km²: ");
    scanf ("%f", &Area2);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIB2);

    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &Turismo2);

    printf ("Nome do Estado: %s\n", Estado2);

    printf ("Código da carta: %s\n", Codigo2);

    printf ("Nome da cidade: %s\n", Cidade2);

    printf ("População: %d\n", Populacao2);

    printf ("Área do estado em km²: %f\n", Area2);

    printf ("PIB: %f\n", PIB2);

    printf ("Número de pontos turísticos: %d\n", Turismo2);

    DP2 = (float)(Populacao2 / Area2);
    printf ("Densidade populacional: %f\n", DP2);

    PPC2 = (float)(PIB2 / Populacao2);
    printf ("PIB per capita: %f\n", PPC2);

    printf ("*** Pontuação ***\n");

    printf ("** População **\n");
    
    if (Populacao1 > Populacao2){
        printf ("Carta 1 venceu\n");

    } else {
        printf ("Carta 2 venceu\n");

    }
    
    printf ("** Área **\n");

    if (Area1 > Area2){
        printf ("Carta 1 venceu\n");

    } else {
        printf ("Carta 2 venceu\n");

    }
    
    printf ("** PIB **\n");

    if (PIB1 > PIB2){
        printf ("Carta 1 venceu\n");

    } else {
        printf ("Carta 2 venceu\n");

    }
    
    printf ("** Turismo **\n");

    if (Turismo1 > Turismo2){
        printf ("Carta 1 venceu\n");

    } else {
        printf ("Carta 2 venceu\n");

    }
    
    printf ("** PIB per capita **\n");

    if (PPC1 > PPC2){
        printf ("Carta 1 venceu\n");

    } else {
        printf ("Carta 2 venceu\n");

    }
    
    printf ("** Densidade populacional **\n");

    if (DP1 < DP2){
        printf ("Carta 1 venceu\n");

    } else {
        printf ("Carta 2 venceu\n");

    }

    printf ("** Super poder **\n");

    if ((Populacao1 + Area1 + PIB1 + Turismo1 + PPC1 + 1/DP1) > (Populacao2 + Area2 + PIB2 + Turismo2 + PPC2 + 1/DP2)){
        printf ("Carta 1 venceu\n");

    } else {
        printf ("Carta 2 venceu\n");

    }

    return 0;
}