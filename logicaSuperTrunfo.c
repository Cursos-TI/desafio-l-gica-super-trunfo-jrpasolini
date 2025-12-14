#include <stdio.h>
/* Higienizei todo o código atraves dos operadores ternários, substituindo o IF quando posso. Elimiei os comentários desnecessários para deixar o código mais limpo. */
int main() {
    int escolha;
    printf("***** Bem-vindo ao Super Trunfo! *****\n Por favor, escolha uma opção para continuar:\n1. Iniciar Jogo\n2. Regras do Jogo\n3. Sair\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: {
            printf("Iniciando o jogo...\n");
            printf("Vamos iniciar nosso jogo de Super Trunfo!\nPara isso, iremos coletar dados de 2 cartas distintas sobre 2 estados brasileiros\nPreencha os dados conforme solicitado e vamos iniciar a brincadeira!\n");

            // Variáveis das cartas
            char estado1[3], estado2[3];
            char codigo1[4], codigo2[4];
            char cidade1[50], cidade2[50];
            unsigned long int populacao1, populacao2;
            float areacidade1, areacidade2, PIB1, PIB2;
            float densidade1, densidade2, pibpercapita1, pibpercapita2;
            short int pontosturisticos1, pontosturisticos2;

            // Cadastro Carta 1
            printf("Carta 1 - Informe a sigla do estado: ");
            scanf("%2s", estado1);
            printf("Informe o codigo da carta (uma letra + 2 numeros): ");
            scanf("%3s", codigo1);
            printf("Informe o nome da cidade: ");
            getchar(); // limpa o \n do buffer
            fgets(cidade1, 50, stdin);
            printf("Informe a populacao da cidade: ");
            scanf("%lu", &populacao1);
            printf("Informe a area da cidade (em km²): ");
            scanf("%f", &areacidade1);
            printf("Informe o PIB da cidade (em R$ bilhões): ");
            scanf("%f", &PIB1);
            printf("Informe a quantidade de pontos turisticos da cidade: ");
            scanf("%hd", &pontosturisticos1);

            // Cadastro Carta 2
            printf("Ótimo! Agora vamos para os dados da segunda carta.\n");
            printf("Carta 2 - Informe a sigla do estado: ");
            scanf("%2s", estado2);
            printf("Informe o codigo da carta (uma letra + 2 numeros): ");
            scanf("%3s", codigo2);
            printf("Informe o nome da cidade: ");
            getchar(); // limpa o \n
            fgets(cidade2, 50, stdin);
            printf("Informe a populacao da cidade: ");
            scanf("%lu", &populacao2);
            printf("Informe a area da cidade (em km²): ");
            scanf("%f", &areacidade2);
            printf("Informe o PIB da cidade (em R$ bilhões): ");
            scanf("%f", &PIB2);
            printf("Informe a quantidade de pontos turisticos da cidade: ");
            scanf("%hd", &pontosturisticos2);

            // Cálculos derivados
            densidade1 = (float)populacao1 / areacidade1;
            densidade2 = (float)populacao2 / areacidade2;
            pibpercapita1 = PIB1 / (float)populacao1;
            pibpercapita2 = PIB2 / (float)populacao2;

            float superpoder1 = populacao1 + areacidade1 + pontosturisticos1 + PIB1 + (1 / densidade1);
            float superpoder2 = populacao2 + areacidade2 + pontosturisticos2 + PIB2 + (1 / densidade2);

            // Exibir cartas
            printf("\nMuito bem! Agora que temos os dados das 2 cartas, vamos exibi-las para conferência:\n\n");
            printf("Carta 1 - Estado: %s | Codigo: %s | Cidade: %s | Populacao: %lu habitantes | Area: %.1f km² | PIB: R$ %.2f bilhões | Pontos Turísticos: %hd\n",
                   estado1, codigo1, cidade1, populacao1, areacidade1, PIB1, pontosturisticos1);
            printf("Carta 2 - Estado: %s | Codigo: %s | Cidade: %s | Populacao: %lu habitantes | Area: %.1f km² | PIB: R$ %.2f bilhões | Pontos Turísticos: %hd\n",
                   estado2, codigo2, cidade2, populacao2, areacidade2, PIB2, pontosturisticos2);

            printf("\nDados extras:\n");
            printf("Densidade Populacional - %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Densidade Populacional - %s: %.2f hab/km²\n", cidade2, densidade2);
            printf("PIB per Capita - %s: R$ %.2f\n", cidade1, pibpercapita1 * 10000000);
            printf("PIB per Capita - %s: R$ %.2f\n", cidade2, pibpercapita2 * 10000000);

            printf("\nSuperpoderes: %s (%s): %.2f | %s (%s): %.2f\n\n", cidade1, estado1, superpoder1, cidade2, estado2, superpoder2);

            // Duelo entre atributos
            short int selecaoduelo1, selecaoduelo2;

            printf("Vamos fazer o duelo entre as cartas!\nEscolha o PRIMEIRO atributo para comparar:\n");
            printf("1. População\n2. Área\n3. Pontos Turísticos\n4. PIB\n5. Densidade Populacional (menor vence)\n6. Super Poder\n");
            scanf("%hd", &selecaoduelo1);

            // Primeiro duelo
            switch (selecaoduelo1) {
                case 1: printf("População: %s vence!\n", (populacao1 > populacao2) ? cidade1 : (populacao1 < populacao2) ? cidade2 : "Empate"); break;
                case 2: printf("Área: %s vence!\n", (areacidade1 > areacidade2) ? cidade1 : (areacidade1 < areacidade2) ? cidade2 : "Empate"); break;
                case 3: printf("Pontos turísticos: %s vence!\n", (pontosturisticos1 > pontosturisticos2) ? cidade1 : (pontosturisticos1 < pontosturisticos2) ? cidade2 : "Empate"); break;
                case 4: printf("PIB: %s vence!\n", (PIB1 > PIB2) ? cidade1 : (PIB1 < PIB2) ? cidade2 : "Empate"); break;
                case 5: printf("Densidade (menor vence): %s vence!\n", (densidade1 < densidade2) ? cidade1 : (densidade1 > densidade2) ? cidade2 : "Empate"); break;
                case 6: printf("Super Poder: %s vence!\n", (superpoder1 > superpoder2) ? cidade1 : (superpoder1 < superpoder2) ? cidade2 : "Empate"); break;
                default: printf("Opção inválida no primeiro duelo.\n"); break;
            }

            // Segundo duelo (opcional)
            printf("\nAgora escolha o SEGUNDO atributo (NÃO pode repetir a primeira escolha):\n");
            scanf("%hd", &selecaoduelo2);
            while (selecaoduelo2 == selecaoduelo1) {  // Aqui utilizei o while. Não foi proposta na aula, mas considerei que estou no nível avançado e o professor me deu liberdade de aprender e explorar a linguagem. Nesse caso, o while certifica que a escolha não seja igual a primeira e dá a chande de repetir caso não seja, evitando fechar o programa.
            printf("Você escolheu o mesmo atributo do primeiro duelo (%hd). Escolha uma opção diferente!\n", selecaoduelo1);
            scanf("%hd", &selecaoduelo2);} // lê de novo até ser diferente

            
            switch (selecaoduelo2) {
                case 1: printf("População: %s vence!\n", (populacao1 > populacao2) ? cidade1 : (populacao1 < populacao2) ? cidade2 : "Empate"); break;
                case 2: printf("Área: %s vence!\n", (areacidade1 > areacidade2) ? cidade1 : (areacidade1 < areacidade2) ? cidade2 : "Empate"); break;
                case 3: printf("Pontos turísticos: %s vence!\n", (pontosturisticos1 > pontosturisticos2) ? cidade1 : (pontosturisticos1 < pontosturisticos2) ? cidade2 : "Empate"); break;
                case 4: printf("PIB: %s vence!\n", (PIB1 > PIB2) ? cidade1 : (PIB1 < PIB2) ? cidade2 : "Empate"); break;
                case 5: printf("Densidade (menor vence): %s vence!\n", (densidade1 < densidade2) ? cidade1 : (densidade1 > densidade2) ? cidade2 : "Empate"); break;
                case 6: printf("Super Poder: %s vence!\n", (superpoder1 > superpoder2) ? cidade1 : (superpoder1 < superpoder2) ? cidade2 : "Empate"); break;
                default: printf("Opção inválida no segundo duelo.\n"); break;
            }

            printf("\nObrigado por jogar Super Trunfo! Volte sempre!\n");
            break;
        }

        case 2:
            printf("Regras do Jogo:\n- Cada jogador cadastra uma carta com dados de uma cidade brasileira.\n- As cartas serão comparadas com base em atributos como população, área, PIB, etc.\n- O jogador com a carta vencedora em mais atributos ganha o jogo.\n");
            break;

        case 3:
            printf("Saindo do jogo. Até a próxima!\n");
            return 0;

        default:
            printf("Opção inválida. Por favor, reinicie o jogo e escolha uma opção válida.\n");
            return 0;
    }

    return 0;
}