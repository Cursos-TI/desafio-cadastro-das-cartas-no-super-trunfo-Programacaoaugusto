#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //declaração das variaveis para a primeira carta
    char Estado1, codigo1[10], cidade1[20];
    int população1, ponto_turistico1;
    float área1, PIB1;

    //declaração das variaveis para a segunda carta
    char Estado2, codigo2[10], cidade2[20];
    int população2, ponto_turistico2;
    float área2, PIB2

    //Cadastro da primeira carta
    printf(Cadastro da Primeira Carta \n);

    printf("Digite o Estado (A-H): ");
    scanf("%s", Estado1);

    printf("Digite o código da carta (ex: A01)");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", população1);

    printf("Digite o ponto turistico: ");
    scanf("%d", ponto_turistico1);

    printf(" Digite a área (em km²): ");
    scanf("%f", área1);

    printf("Digite o PIB: ");
    scanf("%f", PIB1);

    //Cadastro da segunda carta
    printf ("___Cadastro da segunda carta___ \n");

    printf("Digite o Estado (A-H): \n");
    scanf("%s", Estado2);

    printf("Digite o código da carta (ex: A01)");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", população2);

    printf("Digite o ponto turistico: ");
    scanf("%d", ponto_turistico2);

    printf(" Digite a área (em km²): ");
    scanf("%f", área2);

    printf("Digite o PIB: ");
    scanf("%f", PIB2);

    // Exibição dos Dados das Cartas:
    printf("\n--- Carta 1---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Ponto Turistico: %d\n", ponto_turistico1);
    printf("Area: %f km²\n", área1);
    printf("PIB: %f milhoes\n", PIB1);

    printf("\n--- Carta 2---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Ponto Turistico: %d\n", ponto_turistico2);
    printf("Area: %f km²\n", área2);
    printf("PIB: %f milhoes\n", PIB2);
    





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
