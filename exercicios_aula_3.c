// Fundamentos de Programação em C — Exercícios - Uso de operadores relacionais e Estruturas de Seleção - AULA 3
// Também aprendi a utilizar o encadeamento de if e else

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>


// Exercício 1
// Escrever um programa em C para ler dois valores e escrever o maior deles.
int dois_valores_maior(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB;
    printf("Saber qual o maior número entre dois valores");
    printf("\nInsira o valor de A: ");
    scanf("%d", &valorA);
    printf("Insira o valor de B: ");
    scanf("%d", &valorB);
    if (valorA > valorB){
        printf("O valor A (%d) é maior que o valor B (%d)", valorA, valorB);
    }
    else {
        if (valorB > valorA){
            printf("O valor B (%d) é maior que o valor a (%d)", valorB, valorA);
        }
        else{
            printf("Os números são iguais");
        }
    }
    return 0;
}

// Exercício 2
// Escreva um programa em C para ler três notas e o nome de um aluno, calcular e escrever sua média e o conceito aprovado ou reprovado(aprovado com média maior ou igual a 7);
int aprovacao_reprovacao(){ // deu problema
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("\nLer três notas de um aluno e diga se ele foi aprovado ou reprovado: ");
    float nota1, nota2, nota3, media;
    char nome[30];
    printf("\nInsira o nome do aluno: ");
    setbuf(stdin, NULL);
    gets(nome);
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 7){
        printf("Aluno(a) %s - Média: %.2f - Status: Aprovado", nome, media);
    }
    else{
        printf("Aluno(a) %s - Média: %.2f - Status: Reprovado", nome, media);
    }
    return 0;
}

// Exercício 3
//Escrever um programa em C para ler dois valores e mostrar uma mensagem se os valores são múltiplos ou não.
int dois_valores_multiplos_ou_nao(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valor1, valor2;
    printf("Insira o primeiro valor: ");
    scanf("%d", valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", valor2);
    if (valor1 % valor2 == 0){
        printf("O primeiro valor (%d) é múltiplo do segundo valor (%d)", valor1, valor2);
    }
    else{
        if (valor2 % valor1==0){
            printf("O segundo valor (%d) é múltiplo do primeiro valor (%d)", valor2, valor1);
        }
        else {
            printf("Não são múltiplos");
        }
    }
    return 0;
}

// Exercício 4
// Escreva um programa em C para ler um número inteiro mostrar a mensagem se o número é par ou impar;
int ler_numero_par_ou_nao(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("\nLer um número inteiro e dizer se ele é par ou ímpar: ");
    int numero;
    printf("\nInsira um número para saber se ele é par ou ímpar: ");
    scanf("%d", &numero);
    if (numero % 2 == 0){
        printf("O número %d é par", numero);
    }
    else {
        printf("O número %d é ímpar", numero);
    }
    return 0;
}

// Exercício 5
// Escreva um programa para ler o nome, altura e peso de duas pessoas, mostrar o nome da pessoa mais pesada e o nome da pessoa mais alta.
int nome_pessoa_mais_pesada_e_alta(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float altura1, altura2, peso1, peso2;
    char nome1[30], nome2[30];
    printf("\nLer a altura e peso de duas pessoas e dizer quem é a mais alta e quem é a mais pesada:");
    printf("\nInsira o primeiro nome: ");
    setbuf(stdin, NULL);
    gets(nome1);
    printf("Insira o peso da primeira pessoa: ");
    scanf("%f", &peso1);
    printf("Insira a altura da primeira pessoa: ");
    scanf("%f", &altura1);
    printf("Insira o segundo nome: ");
    setbuf(stdin, NULL);
    gets(nome2);
    printf("Insira o peso da segunda pessoa: ");
    scanf("%f", &peso2);
    printf("Insira a altura da segunda pessoa: ");
    scanf("%f", &altura2);
    if (altura1 > altura2){
        printf("A altura da primeira pessoa %s (%.2f), é maior que a da segunda pessoa %s (%.2f)\n", nome1, altura1, nome2, altura2);
    }
    else{
        printf("A altura da segunda pessoa %s (%.2f), é maior que a da primeira pessoa %s (%.2f)\n", nome2, altura2, nome1, altura1);
    }
    if (peso1 > peso2){
        printf("O peso da primeira pessoa %s (%.2f), é maior que o da segunda pessoa %s (%.2f)\n", nome1, peso1, nome2, peso2);
    }
    else{
        printf("O peso da segunda pessoa %s (%.2f), é maior que o da primeira pessoa %s (%.2f)\n", nome2, peso2, nome1, peso1);
    }
    return 0;
}

// Exercício 6
// Escrever um programa para ler o código de um determinado produto e mostrar sua descrição, utilize a tabela abaixo;
int ler_codigo_mostrar_produto(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int codigo;
    printf("Ler o código de um determinado produto e mostre sua descrição:");
    scanf("%d", &codigo);
    if (codigo == 1){
        printf("Produto = Banana");
    }
    else if (codigo == 2){
        printf("Produto = Maça");
    }
    else if (codigo == 3){
        printf("Produto = Laranja");
    }
    else if (codigo == 4){
        printf("Produto = Abacate");
    }
    else if (codigo == 5){
        printf("Produto = Melancia");
    }
    else if (codigo == 6){
        printf("Produto = Abacaxi");
    }
    else{
        printf("Produto Inválido");
    }
    return 0;
}


// REVISAR ISSO NA PRÓXIMA AULA


// Escrever um programa em C para ler três valores e escrever o maior deles.
// MINHA SOLUÇÃO NÃO LEVA EM CONSIDERAÇÃO VALORES IGUAIS
int tres_valores_maior(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB, valorC;
    printf("\nLer três valores e saber qual o maior entre eles:");
    printf("\nInsira o valor de A: ");
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
// MINHA SOLUÇÃO NÃO LEVA EM CONSIDERAÇÃO VALORES IGUAIS
int tres_valores_crescente(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB, valorC;
    printf("\nLer três valores e escrever eles em ordem crescente: ");
    printf("\nInsira o valor de A: ");
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

// RODAR OS CÓDIGOS

int main(){
    dois_valores_maior();
    aprovacao_reprovacao();
    dois_valores_multiplos_ou_nao();
    ler_numero_par_ou_nao();
    nome_pessoa_mais_pesada_e_alta();
    ler_codigo_mostrar_produto();
    tres_valores_maior();
    tres_valores_crescente();
    return 0;
}