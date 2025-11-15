#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
printf("Vamos iniciar nosso jogo de Super Trunfo!\nPara isso, iremos coletar dados de 2 cartas distintas sobre 2 estados brasileiros\nPreencha os dados conforme solicitaado e vamos iniciar a brincadeira!\n");
char estado1[3] = "a67", estado2[3] = "b67";     // utilizei um array de 3 caracteres para garantir que a sigla do estado caiba na variavel
char codigo1[4] = "A97", codigo2[4] = "A96";         //aqui utilizei um array de 3 caracteres devido ao codigo da carta ser uma letra + 2 numreos.  
char cidade1[50] = "vilax", cidade2[50] = "vilay";     //Mesmo tamanho do array para não ter problemas com o tamanho do nome da cidade.
unsigned long int populacao1 = 12323, populacao2 = 11122;         //populacao do estado em valor inteiro para as 2 cidades. Utlizado unsigned para dobrar capacidade posto que não há valor negaativo para a entrada desse tipo de dado
float areacidade1 = 1, areacidade2 = 1, PIB1 = 1, PIB2 = 1, densidade1, densidade2, pibpercapita1, pibpercapita2;                //usando float para armazenar em buffer numeros com casas decimais
short int pontosturisticos1 = 33, pontosturisticos2 = 1; //entrada de pontos turisticos como valor inteiro. utilizei short int para economizar espaço de memória e colocar em pratica o uso desse tipo de dado que ocupa apenas 2 bytes de memória.

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

printf("Carta 1 - Informe a sigla do estado: ");
scanf("%2s", estado1);
printf("Informe o codigo da carta (uma letra + 2 numeros): ");
scanf("%3s", codigo1);
printf("Informe o nome da cidade: ");
getchar();
    fgets(cidade1, 50, stdin);
printf("Informe a populacao da cidade: ");
scanf("%d", &populacao1);
printf("Informe a area da cidade (em km²): ");
scanf("%f", &areacidade1);
printf("Informe o PIB da cidade (em R$ bilhões): ");
scanf("%f", &PIB1);
printf("Informe a quantidade de pontos turisticos da cidade: ");
scanf("%hd", &pontosturisticos1); // aqui a entrada para o short int usa o especificador %hd para garantir a correta leitura do valor

/* Aqui começamos com os dados da carta 2*/

printf("Ótimo! Agora vamos para os dados da segunda carta.\n");
printf("Carta 2 - Informe a sigla do estado: ");
scanf("%2s", estado2);
printf("Informe o codigo da carta (uma letra + 2 numeros): ");
scanf("%3s", codigo2);
printf("Informe o nome da cidade: ");
getchar();
    fgets(cidade2, 50, stdin);
printf("Informe a populacao da cidade: ");
scanf("%d", &populacao2);
printf("Informe a area da cidade (em km²): ");
scanf("%f", &areacidade2);
printf("Informe o PIB da cidade (em R$ bilhões): ");
scanf("%f", &PIB2);
printf("Informe a quantidade de pontos turisticos da cidade: ");
scanf("%hd", &pontosturisticos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

/* Aqui calculamos a densidade populacional e o PIB per capita das 2 cidades */

densidade1 = (float) populacao1 / areacidade1; // calculo da densidade populacional da cidade 1, convertendo dados da variavel populacao para float para evitar perda de dados na divisao
densidade2 = (float) populacao2 / areacidade2; // calculo da densidade populacional da cidade 2, convertendo dados da variavel populacao para float para evitar perda de dados na divisao
pibpercapita1 = PIB1  / (float)populacao1; // calculo do PIB per capita do Cidade 1
pibpercapita2 = PIB2  / (float)populacao2; // calculo do PIB per capita do Cidade 2

/* aqui começamos os calculos dos resultados de cada uma das cartas conforme proposto no desafio nível mestre */
float superpoder1, superpoder2; // declarando variavel para os superpoderes das cartas. Invertendo o valor da densidade populacional conforme solicitado pelo professor
superpoder1 = populacao1 + areacidade1 + (short int)pontosturisticos1 + PIB1 + (1/ densidade1);
superpoder2 = populacao2 + areacidade2 + (short int)pontosturisticos2 + PIB2 + (1/ densidade2);


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
printf("Muito bem! Agora que temos os dados das 2 cartas, vamos exibi-las para conferência: \n\n\n\n");
printf("Carta 1 - Estado: %s | Codigo: %s | Cidade: %s | Populacao: %d habitantes | Area: %.1f km² | PIB da cidade: R$ %.2f bilhões | Pontos Turisticos: %hd\n", estado1, codigo1, cidade1, populacao1, areacidade1, PIB1, pontosturisticos1);
printf("Carta 2 - Estado: %s | Codigo: %s | Cidade: %s | Populacao: %d habitantes | Area: %.1f km² | PIB da cidade: R$ %.2f bilhões | Pontos Turisticos: %hd\n", estado2, codigo2, cidade2, populacao2, areacidade2, PIB2, pontosturisticos2);
printf ("E aqui vão alguns dados extras: \n");
printf("Densidade Populacional - %s: %.2f habitantes/km²\n", cidade1, densidade1);
printf("Densidade Populacional - %s: %.2f habitantes/km²\n", cidade2, densidade2);
printf("PIB per Capita - %s: R$ %.2f\n", cidade1, pibpercapita1 * 10000000); //multiplicando por 10 milhões para aumentar a escala e corrigir a apresentação do numero
printf("PIB per Capita - %s: R$ %.2f\n", cidade2, pibpercapita2 * 10000000);

/* Abaixo vamos apresentar essa saíde de dados comparando os resultados entre as cartas*/
printf ("Os superpoderes das cartas são: %s / %s: %.2f e %s / %s: %.2f\n", cidade1, estado1, superpoder1, cidade2, estado2, superpoder2);  
printf("Resultado do vencedor na comparação das cartas: Se o resultado for 1, %s vence. Se for 0, a %s vence.\n", cidade1, cidade2);
printf("A População de %s venceu? %d\n", cidade1, (populacao1 > populacao2));
printf("Area total de %s venceu? %d\n", cidade1, (areacidade1 > areacidade2));
printf("Pontos Turisticos de %s venceu? %d\n", cidade1, (pontosturisticos1 > pontosturisticos2));
printf("PIB da cidade de %s venceu? %d\n", cidade1, (PIB1 > PIB2));
printf("Densidade Populacional (menor é melhor) da %s venceu? %d\n", cidade2, (densidade1 < densidade2));

/* Agora vamos apresentar o Super Poder e definir qual carta é a vencedora do Super Trunfo!!! */
printf("Super Poder de %s venceu? %d\n", cidade1, (superpoder1 > superpoder2));
    return 0;
}
