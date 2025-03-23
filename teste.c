#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
 
    
    //Adicionar Variáveis - O numero na frente identifica qual é a carta, exemplo: Estado1 - É carta 1
 
    char estado1[50], estado2[50]; 
    char codigo1[50], codigo2[50];
    char cidade1[60], cidade2[60];
    
    int populacao1[13], populacao2[13];
    int pontosturisticos1[10], pontosturisticos2[10];
    float area1[20], area2[20];
    float pib1[20], pib2[20];
    
    float densidade1, densidade2;
    float pibc1, pibc2;



    // Cadastro das Cartas:


    // carta 1

    printf ("Digite o Estado que é uma letra de 'A' a 'H'\n");
    scanf  ("%s", &estado1);

    printf ("Digite o código da cidade\n");
    scanf  ("%s", &codigo1);

    printf ("Digite o nome da cidade\n");
    scanf  ("%s", &cidade1);

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

    printf ("Digite o Estado que é uma letra de 'A' a 'H'\n");
    scanf  ("%s", &estado2);

    printf ("Digite o código da cidade\n");
    scanf  ("%s", &codigo2);

    printf ("Digite o nome da cidade\n");
    scanf  ("%s", &cidade2);

    printf ("Digite a população da cidade\n");
    scanf  ("%d", &populacao2);

    printf ("Digite o número de pontos turísticos\n");
    scanf  ("%d", &pontosturisticos2);

    printf ("Digite a área\n");
    scanf  ("%f", &area2);

    printf ("Digite o Pib\n");
    scanf  ("%d", &pib2);

    densidade2= (float) (populacao2 / area2);


    
    // Exibição dos Dados das Cartas:

    // Exibição carta 1

    printf ("Carta 1\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %d\n", codigo1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Pontos Turísticos: %s\n", pontosturisticos1);
    printf ("Área: %f\n", area1);
    printf ("Pib: %f\n", pib1);
    printf ("A densidade é: %f", densidade1); 

    

    // Exibição carta 2

    printf ("Insira os dados da carta 2\n");

    printf ("Carta 2\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %d\n", codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Pontos Turísticos: %s\n", pontosturisticos2);
    printf ("Área: %f\n", area2);
    printf ("Pib: %f\n", pib2);
    printf ("A densidade é: %f", densidade2);

    


    return 0;
}