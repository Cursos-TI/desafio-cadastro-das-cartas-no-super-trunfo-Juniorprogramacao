#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
 
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos
 
    //Adicionar Variáveis
 
    char estado1[10], estado2[10]; //c1 representa carta 1 c2 representa a carta 2
    char codigo1[50], codigo2[50];
    char cidade1[60], cidade2[60];
    
    int populacao1[13], populacao2[13];
    int pontosturisticos1[10], pontosturisticos2[10];
    float area1[20], area2[20];
    float pib1[20], pib2[20];

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


    
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   


    return 0;
}
