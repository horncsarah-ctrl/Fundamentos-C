// Fundamentos de Programação em C — Exercícios - Aprendendo sobre PESQUISA SEQUENCIAL - AULA 10

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int exercicio_1()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome[5][50], pesquisa[50];
    float n1[5], n2[5], media = 0;
    int i, achou = 0, parar = 0;
    for (i = 0; i < 5; i++)
    {
        setbuf(stdin, NULL);
        printf("Insira o nome: ");
        gets(nome[i]);
        setbuf(stdin, NULL);
        printf("Insira a primeira nota: ");
        scanf("%f", &n1[i]);
        setbuf(stdin, NULL);
        printf("Insira a segunda nota: ");
        scanf("%f", &n2[i]);
        setbuf(stdin, NULL);
    }
    printf("Insira o nome que quer pesquisar: ");
    scanf("%s", &pesquisa);
    while (strcmp(pesquisa, "fim") != 0)
    {
        achou = 0;
        i = 0;
        while (i < 5 && achou == 0)
        {
            if (strcmp(pesquisa, nome[i]) == 0)
            {
                achou = 1;
                media = (n1[i] + n2[i]) / 2;
            }
            else
            {
                i++;
            }
        }
        if (achou == 1)
        {
            if (media >= 6.0)
            {
                printf("A média do aluno é %.2f = APROVADO", media);
            }
            else
            {
                printf("A média do aluno é %.2f = REPROVADO", media);
            }
        }
        else
        {
            printf("Nenhum nome compatível com a pesquisa.");
        }

        printf("\nInsira o nome que quer pesquisar: ");
        scanf("%s", &pesquisa);
    }

    return 0;
}

int exercicio_2(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome[5][50], num[5][50], email[5][50], nome_pesq[50];
    int achou = 0, i;
    for (i = 0; i < 5; i++)
    {
        setbuf(stdin, NULL);
        printf("Insira o nome: ");
        gets(nome[i]);
        setbuf(stdin, NULL);
        printf("Insira o número: ");
        gets(num[i]);
        setbuf(stdin, NULL);
        printf("Insira o email: ");
        gets(email[i]);
        setbuf(stdin, NULL);
    }
    printf("Insira o nome que quer pesquisar:");
    scanf("%s", &nome_pesq);
    while (strcmp(nome_pesq, "fim") != 0){
        i = 0;
        achou = 0;
        while (i < 5 && achou == 0){
            if (strcmp(nome_pesq, nome[i]) == 0){
                achou = 1;
            }
            else{
                i++;
            }
        }   
        if (achou == 1){
            printf("Nome = %s | Número = %s | Email = %s", nome[i], num[i], email[i]);
        }
        else{
            printf("Nome não encontrado");
        }
        printf("\n\n Insira o nome que quer pesquisar:");
        scanf("%s", &nome_pesq);
    }
}


int main()
{
    // exercicio_1();
    exercicio_2();
    return 0;
}