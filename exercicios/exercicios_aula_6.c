// Fundamentos de Programação em C — Exercícios - Aprendendo o uso do SWITCH e CASE - AULA 6

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// EXERCÍCIO 1

int dia_da_semana()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero;
    printf("Insira um número entre 1 e 7: ");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1:
        printf("DOMINGO\n");
        break;
    case 2:
        printf("SEGUNDA\n");
        break;
    case 3:
        printf("TERÇA\n");
        break;
    case 4:
        printf("QUARTA\n");
        break;
    case 5:
        printf("QUINTA\n");
        break;
    case 6:
        printf("SEXTA\n");
        break;
    case 7:
        printf("SÁBADO\n");
        break;
    default:
        printf("ERRO! Número digitado inválido");
        break;
    }
    return 0;
}

// EXERCÍCIO 2
int classificacao_de_atleta()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int idade;
    printf("Insira a idade: ");
    scanf("%d", &idade);
    switch (idade)
    {
    case 5 ... 10:
        printf("INFANTIL\n");
        break;
    case 11 ... 15:
        printf("JUVENIL\n");
        break;
    case 16 ... 20:
        printf("JUNIOR\n");
        break;
    case 21 ... 25:
        printf("PROFISSIONAL\n");
        break;
    default:
        printf("Valor inserido fora das categorias\n");
    }
    return 0;
}

// EXERCÍCIO 3
int codigo_origem_procedencia()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int codigo;
    float preco;
    printf("Insira o código do produto: ");
    scanf("%d", &codigo);
    printf("Insira o preço do produto: ");
    scanf("%f", &preco);
    switch (codigo)
    {
    case 1:
        printf("Procedência = SUL\n");
        printf("Preço = R$ %.2f\n", preco);
        break;
    case 2:
        printf("Procedência = NORTE\n");
        printf("Preço = R$ %.2f\n", preco);
        break;
    case 3:
        printf("Procedência = LESTE\n");
        printf("Preço = R$ %.2f\n", preco);
        break;
    case 4:
        printf("Procedência = OESTE\n");
        printf("Preço = R$ %.2f\n", preco);
        break;
    case 5:
    case 6:
        printf("Procedência = NORDESTE\n");
        printf("Preço = R$ %.2f\n", preco);
        break;
    case 7 ... 9:
        printf("Procedência = SUDESTE\n");
        printf("Preço = R$ %.2f\n", preco);
        break;
    case 10 ... 20:
        printf("Procedência = CENTRO - OESTE\n");
        printf("Preço = R$ %.2f\n", preco);
        break;
    case 25 ... 30:
        printf("Procedência = NOROESTE\n");
        printf("Preço = R$ %.2f\n", preco);
        break;
    default:
        printf("Procedência = PRODUTO IMPORTADO\n");
        printf("Preço = R$ %.2f\n", preco);
    }
    return 0;
}

// EXERCÍCIO 4
int venda_cond_pag_total()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float valor, valor_total, condicao;
    int cond_pagamento;
    printf("Insira o valor da venda: ");
    scanf("%f", &valor);
    printf("Condições de Pagemnto: \n1 - à vista \n2 - à prazo 30 dias \n3 - à prazo 60 dias \n4 - à prazo 90 dias \n5 - venda com cartão de de débito \n6 - venda com cartão de crédito\n");
    printf("Insira a condição de pagamento: ");
    scanf("%d", &cond_pagamento);
    switch (cond_pagamento)
    {
    case 1:
        condicao = valor * 0.10;
        valor_total = valor - condicao;
        printf("Preço = R$%.2f", valor_total);
        break;
    case 2:
        condicao = valor * 0.05;
        valor_total = valor - condicao;
        printf("Preço = R$%.2f", valor_total);
        break;
    case 3:
        valor_total = valor;
        printf("Preço = R$%.2f", valor_total);
        break;
    case 4:
        condicao = valor * 0.05;
        valor_total = valor + condicao;
        printf("Preço = R$%.2f", valor_total);
        break;
    case 5:
        condicao = valor * 0.08;
        valor_total = valor - condicao;
        printf("Preço = R$%.2f", valor_total);
        break;
    case 6:
        condicao = valor * 0.07;
        valor_total = valor - condicao;
        printf("Preço = R$%.2f", valor_total);
        break;
    default:
        printf("VALOR INVÁLIDO");
        break;
    }
    return 0;
}

int main()
{
    // dia_da_semana()
    // classificacao_de_atleta();
    //  codigo_origem_procedencia();
    //  venda_cond_pag_total();
}