// Fundamentos de Programação em C — Exercícios - Aprendendo como usar DO WHILE - AULA 8
// Verificação é feita no final
// O bloco será repetido pelo menos uma vez, INDEPENDENTE da condição

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int fatorial()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num, fat = 1, cont = 1;
    do
    {
        printf("informe um numero par:");
        scanf("%d", &num);
    } while (num % 2 != 0);
    do
    {
        fat = fat * cont;
        cont++;
    } while (cont <= num);
    printf("fatorial de %d = %d", num, fat);
    return 0;
    return 0;
}

int sistema_menu()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int escolha, num1 = 0, num2 = 0;
    do
    {
        printf("Insira um número do menu: ");
        printf("OPÇÕES: \n 1- Somar dois números\n 2- Subtração de dois números\n 3- Multipicação de dois números\n 4- Divisão de dois números\n 5-Sair do Programa");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("Insira um número: ");
            scanf("%d", &num1);
            printf("Insira um número: ");
            scanf("%d", &num2);
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Insira um número: ");
            scanf("%d", &num1);
            printf("Insira um número: ");
            scanf("%d", &num2);
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Insira um número: ");
            scanf("%d", &num1);
            printf("Insira um número: ");
            scanf("%d", &num2);
            printf("%d X %d = %d", num1, num2, num1 * num2);
            break;
        case 4:
            printf("Insira um número: ");
            scanf("%d", &num1);
            printf("Insira um número: ");
            scanf("%d", &num2);
            printf("%d / %d = %d", num1, num2, num1 / num2);
            break;
        }
    } while (escolha != 5);
    return 0;
}

int anos_para_crescer()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int altura_Feliz = 110, altura_Ana = 150, quant_anos = 0; // Se inicializar o contador com 0 usamos o <=
    do
    {
        altura_Feliz = altura_Feliz + 3;
        altura_Ana = altura_Ana + 2;
        quant_anos++;
    } while (altura_Feliz <= altura_Ana);
    printf("%d anos", quant_anos);
    return 0;
}

int valores_dados()
{
    int d1, d2;
    for (d1 = 1; d1 <= 6; d1++)
    {
        for (d2 = 1; d2 <= 6; d2++)
        {
            if (d1 + d2 == 7)
            {
                printf("%d + %d = %d\n", d1, d2, d1 + d2);
            }
        }
    }
    printf("FIM DO PROGRAMA\n");
    return 0;
}

int escrever_somatorio()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, somatorio = 0;
    printf("Insira um número: ");
    scanf("%d", &numero);
    for (numero; numero >= 1; numero--)
    {
        somatorio = somatorio + numero;
    }
    printf("%d", somatorio);
    return 0;
}

int fatorial_somatorio()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero = 0, fatorial = 1, soma_fatorial = 0;
    printf("Insira um número: ");
    scanf("%d", &numero);
    while (numero != 0)
    {
        for (numero; numero >= 1; numero--)
        {
            fatorial = fatorial * numero;
        }
        printf("Fatorial = %d\n", fatorial);
        printf("Insira um número: ");
        scanf("%d", &numero);
        soma_fatorial = soma_fatorial + fatorial;
        fatorial = 1;
    }
    printf("Soma dos Fatoriais = %d\n", soma_fatorial);
    printf("Fim do Programa!\n");
    return 0;
}

int caracterisiticas_populacao()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char sexo[4], cor_olhos, cor_cabelo;
    int contador = 0, quant_indi = 0;
    int idade, maior = 0;
    setbuf(stdin, NULL);
    printf("\nInsira o sexo: f- feminino, m - masculino ");
    gets(sexo);
    while (strcmp(sexo, "fim") != 0)
    {
        setbuf(stdin, NULL);
        printf("\nInsira a cor dos olhos: a - azuis, v - verde, c - castanho");
        scanf("%c", &cor_olhos);
        setbuf(stdin, NULL);
        printf("\nInsira a cor dos cabelos: L - louro, C - castanho, P - preto");
        scanf("%c", &cor_cabelo);
        setbuf(stdin, NULL);
        printf("\nInsira a idade: ");
        scanf("%d", &idade);
        setbuf(stdin, NULL);
        if (contador == 0)
        {
            maior = idade;
        }
        else
        {
            if (maior < idade)
            {
                maior = idade;
            }
        }
        if (strcmp(sexo, "f") == 0 && idade >= 18 && idade <= 35 && cor_olhos == 'v' && cor_cabelo == 'L')
        {
            quant_indi++;
        }
        setbuf(stdin, NULL);
        system("cls");
        printf("\nInsira o sexo: ");
        gets(sexo);
        contador++;
    }
    printf("\nMaior Idade = %d", maior);
    printf("\nQuantidade de Indivíduos: %d", quant_indi);
    return 0;
}

int main()
{
    // sistema_menu();
    // anos_para_crescer();
    // valores_dados();
    // escrever_somatorio();
    // fatorial_somatorio();
    caracterisiticas_populacao();
}
