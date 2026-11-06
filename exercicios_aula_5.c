// Fundamentos de Programação em C — Exercícios - Aprendendo o uso de operadores lógicos - AULA 5

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// EXERCÍCIO 1
int ano_nascimento()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int ano_nascimento, idade;
    printf("Insira o seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    idade = 2026 - ano_nascimento;
    if (idade >= 16 && idade >= 18)
    {
        printf("Você pode votar e conseguir a CNH\n");
    }
    else if (idade < 18 && idade >= 16)
    {
        printf("Você pode votar\n");
    }
    else
    {
        printf("Você não possui idade o suficiente\n");
    }
    return 0;
}

// EXERCÍCIO 2
int ano_nascimento_2()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int ano_nascimento, idade;
    printf("Insira o seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    idade = 2026 - ano_nascimento;
    if (idade >= 18)
    {
        printf("Você pode votar e dirigir\n");
    }
    else if (idade >= 16)
    {
        printf("Você pode votar\n");
    }
    else
    {
        printf("Você não possui idade o suficiente\n");
    }
    return 0;
}

// EXERCÍCIO 2 - OUTRA SOLUÇÃO
int codigo_mostre_classfic()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int codigo;
    printf("Insira o código para ver a classificação de um determinado produto: ");
    scanf("%d", &codigo);
    if (codigo == 1)
    {
        printf("Alimento não perecível\n");
    }
    else if (codigo == 2 || codigo == 3 || codigo == 4)
    {
        printf("Alimento perecível\n");
    }
    else if (codigo == 5 || codigo == 6)
    {
        printf("Vestuário\n");
    }
    else if (codigo == 7)
    {
        printf("Higiene pessoal\n");
    }
    else if (codigo >= 8 && codigo <= 15)
    {
        printf("Limpeza\n");
    }
    else
    {
        printf("Inválido\n");
    }
    return 0;
}

// EXERCÍCIO 3
int divisibilidade_3_7()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valor;
    printf("Insira um um valor: ");
    scanf("%d", &valor);
    if (valor % 3 == 0 && valor % 7 == 0)
    {
        printf("O valor %d é divisível por 3 e 7\n", valor);
    }
    else
    {
        printf("O valor %d não é divisível por 3 e 7\n");
    }
}

// EXERCÍCIO 4
int categoria_natacao()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int idade;
    printf("Insira oa idade para saber a categoria ");
    scanf("%d", &idade);
    if (idade < 5)
    {
        printf("Não tem categoria");
    }
    else if (idade >= 5 && idade <= 7)
    {
        printf("Infantil A\n");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Infantil B\n");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Juvenil A\n");
    }
    else if (idade >= 13 && idade <= 17)
    {
        printf("Juvenil B\n");
    }
    else
    {
        printf("Adulto\n");
    }
    return 0;
}

// EXERCÍCIO 5
int tipo_de_triangulo()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB, valorC;
    printf("Insira o valor do lado A: ");
    scanf("%d", &valorA);
    printf("Insira o valor do lado B: ");
    scanf("%d", &valorB);
    printf("Insira o valor do lado C: ");
    scanf("%d", &valorC);
    if (valorA < (valorB + valorC) && valorB < (valorA + valorC) && valorC < (valorB + valorA))
    {
        if (valorA == valorB && valorB == valorC)
        {
            printf("Triângulo EQUILÁTERO\n");
        }
        else if (valorA == valorB || valorA == valorC || valorB == valorC)
        {
            printf("Triângulo ISÓSCELES\n");
        }
        else
        {
            printf("Triângulo ESCALENO\n");
        }
    }
    else
    {
        printf("Não é um triângulo!");
    }
    return 0;
}

int main()
{
    // ano_nascimento();
    // ano_nascimento_2();
    // codigo_mostre_classfic();
    // categoria_natacao();
    tipo_de_triangulo();
    return 0;
}