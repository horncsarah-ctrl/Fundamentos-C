// Fundamentos de Programação em C — Exercícios - Aprendendo como usar VETORES - AULA 9

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

//  R de 5 elementos e S de 10 elementos. Ger
int exercicio_1()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nNúmero %d", num[i]);
    }
    return 0;
}

int exercicio_2()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        b[i] = a[i] * 5;
        printf("\nB = %d", b[i]);
    }
    return 0;
}

int exercicio_3()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float notas[5], soma = 0, media = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira a nota: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / 5;
    printf("\nMédia = %.2f", media);
    for (i = 0; i < 5; i++)
    {
        if (notas[i] >= media)
        {
            printf("\nNota %d = %.2f, acima da média", i, notas[i]);
        }
    }
}

int exercicio_4()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota[5], soma = 0, media = 0;
    int i;
    char nome[5][30];
    for (i = 0; i < 5; i++)
    {
        setbuf(stdin, NULL);
        printf("Insira o nome: ");
        gets(nome[i]);
        setbuf(stdin, NULL);
        printf("Insira a nota: ");
        scanf("%f", &nota[i]);
        setbuf(stdin, NULL);
        soma = soma + nota[i];
    }
    media = soma / 5;
    printf("\nMédia = %.2f", media);
    for (i = 0; i < 5; i++)
    {
        if (nota[i] >= media)
        {
            printf("\n%s = %.2f - Acima da Média", nome[i], nota[i]);
        }
    }
    return 0;
}

int exercicio_5()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[5], c[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número a: ");
        scanf("%d", &a[i]);
        printf("Insira um número b: ");
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        printf("\nSoma %d = %d", i, c[i]);
    }
    return 0;
}

int exercicio_6()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[5], fat = 1, i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        fat = 1;
        for (j = 1; j <= a[i]; j++)
        {
            fat = fat * j;
        }
        b[i] = fat;
        printf("\nFatorial %d = %d", i + 1, b[i]);
    }
    return 0;
}

int exercicio_7()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[5], c[10], i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &b[i]);
        c[i + 5] = b[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n%d", c[i]);
    }
    return 0;
}

int exercicio_8()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[5], c[5], d[15], i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
        d[i] = a[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &b[i]);
        d[i + 5] = b[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &c[i]);
        d[i + 10] = c[i];
    }
    for (i = 0; i < 15; i++)
    {
        printf("\n%d", d[i]);
    }
    return 0;
}

int exercicio_9()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[10], c[15], i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &b[i]);
        c[i + 5] = b[i];
    }
    for (i = 0; i < 15; i++)
    {
        printf("\n%d", c[i]);
    }
    return 0;
}

int exercicio_10()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[5], i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
    }
    for (i = 0, j = 4; i < 5; i++, j--)
    {
        b[i] = a[j];
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", b[i]);
    }
    return 0;
}

int exercicio_11()
{ // Tive dificuldade para fazer a parte dos positivos
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[5], i, j = -1; // O máximo de elementos que o b pode ter é 5, entáo a gente pode iniciar a variável com esse valor
    // o j vai ser para compactar o vetor, ele começa em 1 por que é se caso nenhum elemento for inserido
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
        if (a[i] >= 0)
        {
            b[j] = a[i]; // b[j] = para que o tamanho do vetor se limite a só o que ele vai utilizar
            j++;         // Se aparecer um elemento positivo, o tamanho do vetor vai aumentar e ele vai para ocupar a próxima casa do vetor
        }
    }
    if (j == -1)
    {
        printf("Vetor B vazio\n");
    }
    else
    {
        for (i = 0; i <= j; i++) // Esqueci de colocar o igual!!!!!
        {
            printf("Vetor B[%d] = %d\n", i, b[i]);
        }
    }
    return 0;
}

int exercicio_12()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[10], b[10], c[10], i, j = 0, l = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            c[j] = a[i];
            j++;
        }
        else
        {
            b[l] = a[i];
            l++;
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("\nPar = %d", c[i]);
    }
    for (i = 0; i < l; i++)
    {
        printf("\nÍmpar = %d", b[i]);
    }
    return 0;
}

int exercicio_13()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[10], i, maior, cont = 0, posicao;
    for (i = 0; i < 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
        if (cont == 0)
        {
            maior = a[i];
            posicao = 0;
            cont++;
        }
        else
        {
            if (a[i] > maior)
            {
                maior = a[i];
                posicao = i;
            }
        }
    }
    printf("Maior = %d, posição %d", maior, posicao);

    return 0;
}

int exercicio_14()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], i, cont = 0, maior, menor, soma = 0, inferior = 0;
    float media = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
        if (cont == 0)
        {
            maior = a[i];
            menor = a[i];
            soma = a[i];
            cont++;
        }
        else
        {
            if (a[i] > maior)
            {
                maior = a[i];
            }
            if (a[i] < menor)
            {
                menor = a[i];
            }
            soma = soma + a[i];
        }
        cont++;
    }
    media = soma / 5;
    printf("\nMédia = %.2f", media);
    printf("\nMaior = %d", maior);
    printf("\nMenor = %d", menor);
    for (i = 0; i < 5; i++)
    {
        if (a[i] < media)
        {
            inferior++;
        }
    }
    printf("\nQuant. dias abaixo da média = %d", inferior);
    return 0;
}

int exercicio_15()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[10], i, num, quant = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
    }
    printf("Insira um número para ver quantas vezes ele repete: ");
    scanf("%d", &num);
    for (i = 0; i < 10; i++)
    {
        if (num == a[i])
        {
            quant++;
        }
    }
    printf("Quant. repetições: %d", quant);
    return 0;
}

int exercicio_16()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[10], pos[10], i, j, l = 0, quant = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] == a[j])
            {
                printf("\nO número %d repete na posição %d e %d", a[i], i, j);
            }
        }
    }
    return 0;
}

int main()
{
    // exercicio_1();
    // exercicio_2();
    // exercicio_3();
    // exercicio_4();
    // exercicio_5();
    // exercicio_6();
    // exercicio_7();
    // exercicio_8();
    // exercicio_9();
    // exercicio_10();
    // exercicio_11();
    // exercicio_12();
    // exercicio_13();
    // exercicio_14();
    // exercicio_15();
    // exercicio_16();
    return 0;
}