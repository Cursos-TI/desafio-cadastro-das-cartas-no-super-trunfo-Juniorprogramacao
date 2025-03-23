#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
 
    
    //Adicionar Variáveis - O numero na frente identifica qual é a carta, exemplo: Estado1 - É carta 1
 
    char estado1[1], estado2[1]; 
    char codigo1[03], codigo2[03];
    char cidade1[60], cidade2[60];
    
    int populacao1[13], populacao2[13];
    int pontosturisticos1[10], pontosturisticos2[10];
    float area1[20], area2[20];
    float pib1[20], pib2[20];
    
    float densidade1, densidade2;
    float pibc1, pibc2;



    // Cadastro das Cartas:


    // carta 1


    printf ("Digite o Estado que é uma letra de A a H\n");

    scanf  ("%c", &estado1);

    printf ("Digite o código da cidade\n");
    scanf  ("%c", &codigo1);

    printf ("Digite o nome da cidade\n");
    scanf  ("%c", &cidade1);

    printf ("Digite a população da cidade\n");
    scanf  ("%d", &populacao1);

    printf ("Digite o número de pontos turísticos\n");
    scanf  ("%d", &pontosturisticos1);

    printf ("Digite a área\n");
    scanf  ("%f", &area1);

    printf ("Digite o Pib\n");
    scanf  ("%d", &pib1);

    densidade1= (float) (populacao1 / area1);



    // Carta 2

    
    
    

    return 0;
}
