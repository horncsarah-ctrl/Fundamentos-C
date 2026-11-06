// Fundamentos de Programação em C — Exercícios - Treinando o uso do WHILE, Acumulador, Contador e Flags

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// EXERCÍCIO 1
int calcular_85_907(){ // 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero = 85, soma = 0; 
    while (numero <= 907){
        soma = soma + numero;
        numero++;
    }
    printf("%d", soma);
    return 0;
}

// EXERCICIO 2
int media_numeros_pares(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int contador = 1, numero = 0, soma = 0, num_par = 0; 
    float media;
    while (contador <= 5){
        printf("Insira um número: ");
        scanf("%d", &numero);
        if (numero % 2 == 0){
            soma = soma + numero;
            num_par++; // Coloquei que sempre ia ser dividido por 5, precisa dessa var para funcionar
        }
        contador++;
    }
    if (soma != 0){
        media = (float)soma / num_par;
    }
    else{
        media = 0;
    }
    printf("%.2f", media);
    return 0;
}

// EXERCÍCIO 3
int media_numeros_infinito(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, cont_par = 0, soma = 0; 
    float media;
    printf("Insira um número: ");
    scanf("%d", &numero);
    while (numero > 0){
        if (numero % 2 == 0){
            soma = soma + numero;
            cont_par++;
        }
        printf("Insira um número: ");
        scanf("%d", &numero);
    }
    if (soma != 0){
        media = soma / cont_par;
    }
    else{
        media = 0;
    }
    printf("Média = %.2f", media);
    return 0;
}

// EXERCÍCIO 4
int ler_notas_media(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota1 = 0, nota2 = 0, media = 0;
    int contador = 1;
    while (contador <= 5){
        printf("Insira a primeira nota: ");
        scanf("%f", &nota1);
        printf("Insira a primeira nota: ");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;
        if (media >= 7.0){
            printf("APROVADO, MÉDIA = %f\n", media);
        }
        else{
            printf("REPROVADO, MÉDIA = %f\n", media);
        }
        contador++;
    }
    media = soma / 5;
    printf("Média da turma = %.2f\n", media);
    printf("Fim do Programa");
    return 0;
}

// EXERCÍCIO 5
int numero_qualquer_somatorio(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, contador = 1, soma = 0; 
    printf("Insira um número: ");
    scanf("%d", &numero);
    while (contador <= numero){
        soma = soma + contador;
        contador++;
    }
    printf("O somatório é de %d", soma);
    return 0;
}

// EXERCÍCIO 6
int soma_dez_termos(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int contador = 1, flag = 0, denominador = 500;
    float soma = 0, fracao;
    while (contador <= 10){
        if (flag = 0){
            fracao = 2 / denominador;
            soma = soma + fracao;
            flag = 1;
        }
        if (flag = 1){
            fracao = 5 / denominador;
            soma = soma + fracao;
            flag = 0;
        }
        denominador = denominador - 50;
        contador++;
    }
    printf("SOMA = %.2f", soma);
    return 0;
}

int main(){
    // calcular_85_907();
    // media_numeros_pares();
    // media_numeros_infinito();
    // ler_notas_media();
    // numero_qualquer_somatorio();
    soma_dez_termos();
    return 0;
}