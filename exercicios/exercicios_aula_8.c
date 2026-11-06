// Fundamentos de Programação em C — Exercícios - Aprendendo como usar FOR - AULA 7

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int soma_85_907()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i, soma = 0;
    for (i = 85; i <= 907; i++)
        soma += i;
    printf("Soma = %d", soma);
    return 0;
}

int soma()
{
    int i;
    float n1, n2, soma = 0, media;
    for (i = 1; i <= 5; i++)
    {
        printf("\ninforme primeira nota:");
        scanf("%f", &n1);
        printf("informe segunda nota.:");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        if (media >= 7)
            printf("\nAluno aprovado com media %.1f", media);
        else
            printf("\nAluno reprovado com media %.1f", media);
        soma = soma + media;
    }
    media = soma / 5;
    printf("\n\nMedia da turma %.1f", media);
    return 0;
}

int fatorial()
{
    int i, num, fat = 1;
    float res = 1;
    printf("informe numero:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fat = fat * i;
        res = res + 1.0 / fat;
    }
    printf("valor de e = %.3f", res);
    return 0;
}

int soma_do_numero()
{
    int i, soma = 0, num;
    printf("informe um numero:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        soma = soma + i;
    }
    printf("soma do numero %d = %d", num, soma);
    return 0;
}

int denominador()
{
    int i, den = 500;
    char flag = '+';
    float soma = 0;
    for (i = 1; i <= 10; i++)
    {
        switch (flag)
        {
        case '+':
            soma = soma + 2.0 / den;
            flag = '-';
            break;
        case '-':
            soma = soma - 5.0 / den;
            flag = '+';
        }
        den = den - 50;
    }
    printf("Valor sa serie: %.3f", soma);
    return 0;
}

int tabuada()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, inicial, final, i;
    printf("Insira a tabuada que quer: ");
    scanf("%d", &numero);
    printf("Insira o número inicial: ");
    scanf("%d", &inicial);
    printf("Insira o número final: ");
    scanf("%d", &final);
    for (i = inicial; i <= final; i++)
    {
        printf("%d X %d = %d\n", numero, i, (numero * i));
    }
    printf("O PROGRAMA TERMINOU");
    return 0;
}

int media_num_digitados()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, i, soma = 0, media = 0, cont = 0; // Sempre lembrar de que quando usar soma, a var deve começar = a 0
    for (i = 1; i <= 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            soma = soma + numero;
            cont++;
        }
    }
    if (cont > 0)
    {
        media = (float)soma / cont;
        printf("MÉDIA = %d\n", media);
    }
    else
    {
        printf("Não foi informado um número par");
    }
    return 0;
}

int primo_ou_nao()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, flag = 1, i;
    printf("Insira um número: ");
    scanf("%d", &numero);
    for (i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1 && numero != 0 && numero != 1)
    {
        printf("Número %d é primo", numero);
    }
    else
    {
        printf("Número %d não é primo", numero);
    }
    return 0;
}

int main()
{
    // soma_85_907();
    // soma();
    // fatorial();
    // soma_do_numero();
    // denominador();
    // tabuada();
    // media_num_digitados();
    primo_ou_nao();
}