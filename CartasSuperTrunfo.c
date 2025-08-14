#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char est1, est2;
    char cid1[3], cid2[3];
    char cod1[4], cod2[4];
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Vamos jogar super trunfo!\n");
    printf("Preciso que você insira os dados de 2 cartas, ok? Vamos lá!\n");
    printf("----------------------------------------------------------\n");

    printf("CADASTRO DA CARTA 1\n");
    printf("Escolha um estado (A a H): ");
    scanf(" %c", &est1);

    printf("Escolha uma cidade (01 a 04): ");
    scanf(" %s", cid1);

    //sprintf(cod1, "%c%s", est1, cid1);
    //printf("O código da carta 1 é: %s\n", cod1);

    printf("Agora dê algumas informações sobre a cidade escolhida.\n");

    printf("População: ");
    scanf("%d", &pop1);

    printf("Área (em Km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &tur1);

    printf("----------------------------------------------------------\n");

    // Cadastro da carta 2
    printf("CADASTRO DA CARTA 2\n");
    printf("Escolha um estado (A a H): ");
    scanf(" %c", &est2);

    printf("Escolha uma cidade (01 a 04): ");
    scanf(" %s", cid2);

    printf("Agora dê algumas informações sobre a cidade escolhida.\n");

    printf("População: ");
    scanf("%d", &pop2);

    printf("Área (em Km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &tur2);



    return 0;
}
