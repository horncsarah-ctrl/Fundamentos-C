// Fundamentos de Programação em C — Exercícios - Uso de operadores relacionais e Estruturas de Seleção - AULA 3

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// Escrever um programa em C para ler dois valores e escrever o maior deles.
// LEMBRAR QUE MINHA SOLUÇÃO NÃO LEVA EM CONSIDERAÇÃO VALORES IGUAIS
int dois_valores_maior(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB;
    printf("Insira o valor de A: ");
    scanf("%d", &valorA);
    printf("Insira o valor de B: ");
    scanf("%d", &valorB);
    if (valorA > valorB){
        printf("O valor A (%d) é maior que o valor B (%d)", valorA, valorB);
    }
    else {
        printf("O valor B (%d) é maior que o valor a (%d)", valorB, valorA);
    }
    return 0;
}

// Escrever um programa em C para ler três valores e escrever o maior deles.
// LEMBRAR QUE MINHA SOLUÇÃO NÃO LEVA EM CONSIDERAÇÃO VALORES IGUAIS
int tres_valores_maior(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB, valorC;
    printf("Insira o valor de A: ");
    scanf("%d", &valorA);
    printf("Insira o valor de B: ");
    scanf("%d", &valorB);
    printf("Insira o valor de C: ");
    scanf("%d", &valorC);
    if (valorA > valorB){
        if (valorA > valorC){
            printf("O valor A (%d) é maior que o valor B (%d) e o valor C (%d)", valorA, valorB, valorC);
        }
    }
    else{
        if (valorB > valorC){
            printf("O valor B (%d) é maior que o valor A (%d) e o valor C (%d)", valorB, valorA, valorC);
        }
        if (valorC > valorB){
            printf("O valor C (%d) é maior que o valor A (%d) e o valor B (%d)", valorC, valorA, valorB);  
        }
    }
    return 0;

}

// Escrever um programa em C para ler três valores e escreve-los em ordem crescente.
// LEMBRAR QUE MINHA SOLUÇÃO NÃO LEVA EM CONSIDERAÇÃO VALORES IGUAIS
int tres_valores_crescente(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB, valorC;
    printf("Insira o valor de A: ");
    scanf("%d", &valorA);
    printf("Insira o valor de B: ");
    scanf("%d", &valorB);
    printf("Insira o valor de C: ");
    scanf("%d", &valorC);
    if (valorA > valorB){
        if (valorA > valorC){
            if (valorB > valorC){
                printf("Do menor para o maior: valor C (%d), valor B (%d), valor A (%d)", valorC, valorB, valorA);
            }
            else{
                printf("Do menor para o maior: valor B (%d), valor C (%d), valor A (%d)", valorB, valorC, valorA);
            }
        }
        else{
            printf("Do menor para o maior: valor B (%d), valor A (%d), valor C (%d)", valorB, valorA, valorC);
        }
    }
    else{
        if (valorB > valorC){
            if (valorA > valorC){
                printf("Do menor para o maior: valor C (%d), valor A (%d), valor B (%d)", valorC, valorA, valorB);
            }
            else {
                printf("Do menor para o maior: valor A (%d), valor C (%d), valor B (%d)", valorA, valorC, valorB);
            }
        }
        if (valorC > valorB){
            printf("Do menor para o maior: valor A (%d), valor B (%d), valor C (%d)", valorA, valorB, valorC);
        }
    }
    return 0;
}

// Escreva um programa em C para ler três notas e o nome de um aluno, calcular e escrever sua média e o conceito aprovado ou
// reprovado(aprovado com média maior ou igual a 7);
int aprovacao_reprovacao(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota1, nota2, nota3, media;
    char nome[30];
    printf("Insira o nome do aluno: ");
    setbuf(stdin, NULL);
    gets(nome);
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 7.0){
        printf("Aluno(a) %s - Média: %.2f - Status: Aprovado", nome, media);
    }
    else{
        printf("Aluno(a) %s - Média: %.2f - Status: Reprovado", nome, media);
    }
    return 0;
}

// Número 5
//Escrever um programa em C para ler dois valores e mostrar uma mensagem se os valores são múltiplos ou não.
int dois_valores_multiplos_ou_nao(){
    
    return 0;
}

// Númro 6
// Escreva um programa em C para ler um número inteiro mostrar a mensagem se o número é par ou impar;
int ler_numero_par_ou_nao(){
    
    return 0;
}

// Número 7
// Escreva um programa para ler o nome, altura e peso de duas pessoas, mostrar o nome da pessoa mais pesada e o nome da pessoa mais alta.
int nome_pessoa_mais_pesada_e_alta(){
    
    return 0;
}

// Número 8
// Escrever um programa para ler o código de um determinado produto e mostrar sua descrição, utilize a tabela abaixo;
int ler_codigo_mostrar_produto(){
    
    return 0;
}


int main(){
    dois_valores_maior();
    tres_valores_maior();
    tres_valores_crescente();
    aprovacao_reprovacao();
    dois_valores_multiplos_ou_nao();
    ler_numero_par_ou_nao();
    nome_pessoa_mais_pesada_e_alta();
    ler_codigo_mostrar_produto();
    return 0;
}