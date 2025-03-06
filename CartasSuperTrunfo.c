#include <stdio.h>

int main(){

    int população, turismo, população1, turismo1;
    char estado, cidade [50], codigo, estado1, cidade1 [50], codigo1;
    float pib, area, pib1, area1;


    // INTRODUÇÃO DO JOGO
    printf("Bem vindo ao jogo Super Trunfo \n");
    printf("Vamos começar preenchendo os dados da sua carta \n");   

    // RECEBIMENTO DE DADOS DO JOGADOR
    printf("Digite o nome do seu Estado:");
    scanf("%s", &estado);
    printf("Escolha um numero de 01 a 04");
    scanf("%d", &codigo);
    printf("Digite o nome da cidade:");
    scanf("%s", &cidade);
    printf("Digite o numero da população média da cidade");
    scanf("%d", &população);
    printf("Digite a área da cidade em KM²");
    scanf("%f", &area);
    printf("Digite o PIB da sua cidade");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da cidade");
    scanf("%d", &turismo);

            // Mensagem após preenchimento dos dados
            printf("Coletando dados.....\n");
            printf("Carta criada com sucesso! \n");
            printf("Imprimindo dados da carta....\n");
            printf("Carta 1\n");

       // Visualização dos dados preenchidos jogador 1
    printf("Estado: %c \n", estado);
    printf("Codigo: %c0%d \n", estado,codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", população);
    printf("PIB: %.2f \n", pib);
    printf("Área: %.2f² \n", area);
    printf("Numero de Pontos Turisticos: %d \n", turismo);

    // RECEBIMENTO DE DADOS DO ADVERSÁRIO
    printf("Agora vamos preencher os dados da carta do seu adversário \n");
    
    // RECEBIMENTO DE DADOS DO JOGADOR 2
    printf("Digite o nome do seu Estado:");
    scanf("%s", &estado1);
    printf("Escolha um numero de 01 a 04");
    scanf("%d", &codigo1);
    printf("Digite o nome da cidade:");
    scanf("%s", &cidade1);
    printf("Digite o numero da população média da cidade");
    scanf("%d", &população1);
    printf("Digite a área da cidade em KM²");
    scanf("%f", &area1);
    printf("Digite o PIB da sua cidade");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da cidade");
    scanf("%d", &turismo1);

       // Visualização dos dados preenchidos do jogador 2
       printf("Carta 2\n");
       printf("Coletando dados.....\n");
       printf("Carta criada com sucesso! \n");
       printf("Estado: %c \n", estado1);
       printf("Codigo: %c0%d \n", estado1,codigo1);
       printf("Nome da Cidade: %s \n", cidade1);
       printf("População: %d \n", população1);
       printf("PIB: %.2f \n", pib1);
       printf("Área: %.2f² \n", area1);
       printf("Numero de Pontos Turisticos: %d \n", turismo1);

    

    // AVALIAÇÃO DAS CARTAS
    // JOGADOR 1
    printf("       Jogador 1: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %c0%d \n", estado,codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", população);
    printf("PIB: %.2f \n", pib);
    printf("Área: %.2f² \n", area);
    printf("Numero de Pontos Turisticos: %d \n", turismo);

    //JOGADOR 2
    printf("       Jogador 2: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c0%d \n", estado1,codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", população1);
    printf("PIB: %.2f \n", pib1);
    printf("Área: %.2f² \n", area1);
    printf("Numero de Pontos Turisticos: %d \n", turismo1);


    

return 0;
    















}
