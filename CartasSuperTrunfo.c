#include <stdio.h>

int main() {
    
    // Variáveis carta 1
    char est1, cid1[4], cod1[4];
    int pop1, tur1;
    float area1;
    double pib1;
    
    // Variáveis carta 2
    char est2, cid2[4], cod2[4];
    int pop2, tur2;
    float area2;
    double pib2;

    printf("Vamos jogar super trunfo!\n");
    printf("Preciso que você insira os dados de 2 cartas, ok? Vamos lá!\n");
    printf("----------------------------------------------------------\n");

    // Cadastro das cartas:

    // Carta 1
    printf("CADASTRO DA CARTA 1\n");
    printf("Escolha um estado (A a H): ");
    scanf(" %c", &est1);

    printf("Escolha uma cidade (01 a 04): ");
    scanf(" %s", cid1);

    printf("Agora dê algumas informações sobre a cidade escolhida.\n");

    printf("População: ");
    scanf(" %d", &pop1);

    printf("Área (em Km²): ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %lf", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &tur1);

    // Carta 2
    printf("CADASTRO DA CARTA 2\n");
    printf("Escolha um estado (A a H): ");
    scanf(" %c", &est2);

    printf("Escolha uma cidade (01 a 04): ");
    scanf(" %s", cid2);

    printf("Agora dê algumas informações sobre a cidade escolhida.\n");

    printf("População: ");
    scanf(" %d", &pop2);

    printf("Área (em Km²): ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %lf", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &tur2);

    printf("----------------------------------------------------------\n");

    // Exibição dos Dados das Cartas:

    // Carta 1
    printf("CARTA 1\n");
    printf("Código: %c%s\n", est1, cid1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turïsticos: %d\n", tur1);

    // Carta 2
    printf("\nCARTA 2\n");
    printf("Código: %c%s\n", est2, cid2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turïsticos: %d", tur2);



}
