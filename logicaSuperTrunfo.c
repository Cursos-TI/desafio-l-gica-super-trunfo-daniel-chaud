#include <stdio.h>

/*Aqui vamos definir as variáveis, que nada mais são que as caracterìsticas das cartas do
nosso jogo, lembrando que precisaremos criar cada uma delas referente ao número de cartas!

obs: Se atente para as limitações dos campos que envolvem números grandes: 
Área por Km² e População, de preferência nesta versão não escreva números com separadores de milhar...
*/

int main() {
char estado1[20],  estado2[20]; // As variáveis acompanham números junto, para sabermos de qual carta é
char cidade1[20],  cidade2[20];
char codcarta1[4], codcarta2[4];

int pturisticos1, pturisticos2, resultcomparacao;
unsigned long int populacao1, populacao2;

float area1, area2;
float pib1, pib2;

float densidade1, densidade2; // Aqui no desafio aventureiro, seguimos a mesma lógica dos números por carta
float pibpercap1, pibpercap2;

// ↑ Aqui conseguimos definir quais serão os "Tópicos" das cartas.

int resultpopula1, resultpopula2, resultarea1, resultarea2, resultpib1, resultpib2;
int resultpt1, resultpt2, resultdensi1, resultdensi2, resultppc1, resultppc2;
/* Aqui no nível mestre optei por criar uma para cada, e no final vamos ter o trabalho de
definir uma a uma, comparando-as diretamente para que a gente possa chegar ao nosso resultado
*/
 


// AQUI TERMINAMOS DE DEFINIR e salvar os resultados da carta 1, para que possamos mostrar na carta final.


// Vamos criar o SUPER PODER e toda a sua lógica

float superpoder1, superpoder2;  

//Vamos começar com boas vindas antes de captar essas informações.
printf("Olá seja bem vindo ao SUPER TRUNFO Cidades!\n");
printf("\n");
printf("Vamos cadastrar 2 Cartas para começar!\n");


// Captação de dados:
printf("\n");
printf("Digite o estado da carta, evite nomes compostos (ex:Rio de Janeiro): \n");
scanf("%s", estado1);

printf("Certo! Qual a cidade desta carta? evite nomes compostos (ex:Rio de Janeiro): \n");
scanf("%s", cidade1);

printf("Qual a população deste municipio?: ");
scanf("%lu", &populacao1);

printf("Qual a área em KM²?(escreva sem os separadores de milhar): ");
scanf("%f", &area1);

printf("Qual o PIB? (escreva sem os separadores de milhar): ");
scanf("%f", &pib1);

printf("Quantos pontos turisticos existem em %s?: ", cidade1);
scanf("%d", &pturisticos1);

printf("Agora para terminarmos, dê um Código de 3 dígitos para a sua carta: ");
scanf("%s", codcarta1);

// ↑ Aqui terminamos a captação de dados do usuário e vamos para o resumo da carta criada.↓

densidade1 =  (float) (populacao1 / area1) ; //Além de criarmos as variáveis, também as definimos.
pibpercap1 = (float) (pib1 / populacao1);
superpoder1 = (float)populacao1 + area1 + pib1 + (float)pturisticos1 + pibpercap1 + (1.0 / densidade1); 

printf("Muito bem, Carta criada com sucesso, abaixo o resumo da carta criada!\n");
printf("\n");
printf("\n");
printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");
printf("%s\n", codcarta1);
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("População: %lu Habitantes\n", populacao1);
printf("Área em Km²: %.2f Km²\n", area1);
printf("PIB: %.2f Bilhões de Reais\n", pib1);
printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pturisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibpercap1);
printf("Super Poder: Valor %.2f\n", superpoder1);
printf("\n");
printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");

// Assim finalizamos a apresentação da primeira carta. Vamos para a segunda, ela seguirá a mesma fórmula.

printf("Vamos criar próxima carta!\n");


// Captação de dados:
printf("\n");
printf("Digite o estado da carta, evite nomes compostos (ex:Rio de Janeiro): \n");
scanf("%s", estado2);

printf("Certo! Qual a cidade desta carta? evite nomes compostos (ex:Rio de Janeiro): \n");
scanf("%s", cidade2);

printf("Qual a população deste municipio?: ");
scanf("%lu", &populacao2);

printf("Qual a área em KM²?(escreva sem os separadores de milhar): ");
scanf("%f", &area2);

printf("Qual o PIB? (escreva sem os separadores de milhar): ");
scanf("%f", &pib2);

printf("Quantos pontos turisticos existem em %s?: ", cidade2);
scanf("%d", &pturisticos2);

printf("Agora para terminarmos, dê um Código de 3 dígitos para a sua carta: ");
scanf("%s", codcarta2);

// ↑ Aqui terminamos a captação de dados do usuário e vamos para o resumo da carta criada.↓

printf("Muito bem, Carta criada com sucesso, abaixo o resumo da carta criada!\n");
densidade2 = (float) (populacao2 / area2) ; 
pibpercap2 = (float) (pib2 / populacao2);
superpoder2 = (float)populacao2 + area2 + pib2 + (float)pturisticos2 + pibpercap2 + (1.0 / densidade2);
printf("\n");
printf("\n");


printf("/////////////////////////////////////////////////////////////////////////////////////////\n");

printf("\n");
printf("%s\n", codcarta2);
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("População: %lu Habitantes\n", populacao2);
printf("Área em Km²: %.2f Km²\n", area2);
printf("PIB: %.2f Bilhões de Reais\n", pib2);
printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pturisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpercap2);
printf("Super Poder: Valor %.2f\n", superpoder2);
printf("\n");

printf("/////////////////////////////////////////////////////////////////////////////////////////\n");


resultpopula1 = populacao1 > populacao2;
resultarea1= area1 > area2;
resultpib1= pib1 > pib2;
resultpt1 = pturisticos1 > pturisticos2;
resultdensi1 = densidade1 < densidade2;
resultppc1 = pibpercap1 > pibpercap2;

printf("\n");


//Carta de Comparação
printf("Vamos ao Jogo! Escolha uma categoria da sua carta para comparar\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");

printf("Qual você escolhe?: ");
scanf("%d", &resultcomparacao);
printf("\n");

switch (resultcomparacao)
{
case 1:
    printf("A população da sua carta é de %lu habitantes, e da Segunda carta de %lu habitantes.\n", populacao1, populacao2);
    if (populacao1 > populacao2)
    {
        printf("Então Carta 1 Venceu! Parabéns!\n");
    } else {
        printf("Então Carta 2 Venceu! Parabéns!\n");
    }
    
    break;



case 2:
    printf("A Área da sua carta é de %.2f Km², e da Segunda carta de %.2f Km².\n", area1, area2);
    if (area1 > area2)
    {
        printf("Então Carta 1 Venceu! Parabéns!\n\n");
    } else {
        printf("Então Carta 2 Venceu! Parabéns!\n");
    }
    break;



case 3:
    printf("O PIB da sua carta é de R$ %.2f Bilhões de Reais, e da Segunda carta de R$ %.2f Bilhões de Reais.\n", pib1, pib2);
    if (pib1 > pib2)
    {
        printf("Então Carta 1 Venceu! Parabéns!\n");
    } else {
        printf("Então Carta 2 Venceu! Parabéns!\n");
    }
    break;



case 4:
    printf("O Número de Pontos Turísticos da sua carta é de %d pontos turísticos, e da Segunda carta de %d pontos turísticos.\n", pturisticos1, pturisticos2);
    if (pturisticos1 > pturisticos2)
    {
        printf("Então Carta 1 Venceu! Parabéns!\n");
    } else {
        printf("Então Carta 2 Venceu! Parabéns!\n");
    }
    break;



case 5:
    printf("A Densidade Demográfica da sua carta é de %.2f hab/Km², e da Segunda carta de %.2f hab/Km².\n", densidade1, densidade2);
    if (densidade1 < densidade2 )
    {
        printf("Então Carta 1 Venceu! Parabéns!\n");
    } else {
        printf("Então Carta 2 Venceu! Parabéns!\n");
    }
    break;

default:
    printf("Opção Inválida\n");
    break;
}

printf("\n");
printf("Obrigado por Jogar! Ass: Daniel Chaud.\n");

printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");

return 0;
}
