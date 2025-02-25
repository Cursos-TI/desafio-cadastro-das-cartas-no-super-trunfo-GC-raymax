#include <stdio.h>
//Deaafio nível novato
  // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
//Declaração de variáveis
    char estado1[1];
    char codigo_da_carta1[3];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    char estado2[1];
    char codigo_da_carta2[3];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

int main() {
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Desenvolvimento do código
    printf("Cadastro de Carta 1:\n");
    printf("Lembrando que na aba do Estado devem ser inserido somente letras maiúsculas de A a H e na aba Código da Carta o nome do Estado e um número 0 seguido de um númeroo de 1 a 4 \n");
       printf("Estado: \n");
        scanf("%s", &estado1);//Ler  entrada do usuário como uma cadeia (string) de caracteres e armazenar na variável estado1
       printf("Código da Carta: \n");
        scanf("%3s", &codigo_da_carta1);//Ler  entrada do usuário como uma cadeia (string) de caracteres e armazenar na variável codigo_da_carta1
        printf("Nome da Cidade: \n");
        scanf(" %[^\n]", &nome_da_cidade1);//Ler  entrada do usuário como uma cadeia (string) de caracteres e armazenar na variável nome_da_cidade1
       printf("População(em milhões): \n");
        scanf("%d", &populacao1);//Ler  entrada do usuário como número inteiro em decimal e armazenar na variável populacao1
       printf("Área(em Km²): \n");
        scanf("%f", &area1);//Ler  entrada do usuário como número de ponto flutuante no formato padrão e armazenar na variável area1
       printf("PIB(em Bilhões): \n");
        scanf("%f", &pib1);//Ler  entrada do usuário como número de ponto flutuante no formato padrão e armazenar na variável pib1
       printf("Pontos Turísticos: \n");
        scanf("%d", &pontos_turisticos1);//Ler  entrada do usuário como número inteiro em decimal na variável pontos_turisticos1

    printf("Cadastro de Carta 2:\n");
       printf("Lembrando que na aba do Estado devem ser inserido somente letras maiúsculas de A a H e na aba Código da Carta o nome do Estado e um número 0 seguido de um númeroo de 1 a 4 \n");
       printf("Estado: \n");
         scanf("%s", &estado2);//Ler  entrada do usuário como uma cadeia (string) de caracteres e armazenar na variável estado2
       printf("Código da Carta: \n");
         scanf("%3s", &codigo_da_carta2);//Ler  entrada do usuário como uma cadeia (string) de caracteres e armazenar na variável codigo_da_carta2
       printf("Nome da Cidade: \n");
        scanf(" %[^\n]", &nome_da_cidade2);//Ler  entrada do usuário como uma cadeia (string) de caracteres e armazenar na variável nome_da_cidade2
       printf("População: \n");
        scanf("%d", &populacao2);//Ler  entrada do usuário como número inteiro em decimal e armazenar na variável populacao1
       printf("Área: \n");
        scanf("%f", &area2);//Ler  entrada do usuário como número de ponto flutuante no formato padrão e armazenar na variável area1
       printf("PIB: \n");
        scanf("%f", &pib2);//Ler  entrada do usuário como número de ponto flutuante no formato padrão e armazenar na variável pib1
       printf("Pontos Turísticos: \n");
        scanf("%d", &pontos_turisticos2);//Ler  entrada do usuário como número inteiro em decimal na variável pontos_turisticos1
//Os códigos a seguir, sendo os "printf" até o "Ponto turístico:" da carta2,imprimem mensagens de auxílio ao usuário para o mesmo saber o que escrever

    printf("\nDados de Carta 1:\n");
     printf("Estado: %s\n", estado1);//imprimir mensagem onde o valor da variável estado1 seja designado para %s(Imprime uma cadeia (string) de caracteres)
     printf("Código: %3s\n", codigo_da_carta1);//imprimir mensagem onde o valor da variável codigo_da_carta1 seja designido para %s(Imprime uma cadeia (string) de caracteres)
     printf("Nome da Cidade: %[^\n]s", nome_da_cidade1);//imprimir mensagem onde o valor da variável nome_da_cidade1 seja designido para %s(Imprime uma cadeia (string) de caracteres)
     printf("População: %.2f  Milhões\n", populacao1);//imprimir mensagem onde o valor da variável populacao1 seja designado para %d(Imprime um inteiro no formato decimal)
     printf("Área: %.2f  Km²\n", area1);//imprimir mensagem onde o valor da variável area1 seja designado para %.2f(formata e exibe esse valor como um número de ponto flutuante com duas casas decimais)
     printf("PIB: %.2f  Bilhões\n", pib1);//imprimir mensagem onde o valor da variável pib1 seja designado para %.2f(formata e exibe esse valor como um número de ponto flutuante com duas casas decimais)
     printf("Pontos Turísticos: %d\n", pontos_turisticos1);//imprimir mensagem onde o valor da pontos_turisticos1 seja designado para %d(Imprime um inteiro no formato decimal)

    printf("\nDados de Carta 2:\n");
    printf("Estado: %s\n", estado2);//imprimir mensagem onde o valor da variável estado2 seja designado para %s(Imprime uma cadeia (string) de caracteres)
    printf("Código: %3s\n", codigo_da_carta2);//imprimir mensagem onde o valor da variável codigo_da_carta2 seja designido para %s(Imprime uma cadeia (string) de caracteres)
    printf("Nome da Cidade: %[^\n]s", nome_da_cidade2);//imprimir mensagem onde o valor da variável nome_da_cidade2 seja designido para %s(Imprime uma cadeia (string) de caracteres)
    printf("População: %.2f  Milhões\n", populacao2);//imprimir mensagem onde o valor da variável populacao2 seja designado para %d(Imprime um inteiro no formato decimal)
    printf("Área: %.2f  Km²\n", area2);//imprimir mensagem onde o valor da variável area2 seja designado para %.2f(formata e exibe esse valor como um número de ponto flutuante com duas casas decimais)
     printf("PIB: %.2f  Bilhões\n", pib2);//imprimir mensagem onde o valor da variável pib2 seja designado para %.2f(formata e exibe esse valor como um número de ponto flutuante com duas casas decimais)
     printf("Pontos Turísticos: %d\n", pontos_turisticos2);//imprimir mensagem onde o valor da pontos_turisticos2 seja designado para %d(Imprime um inteiro no formato decimal)

    return 0;
}