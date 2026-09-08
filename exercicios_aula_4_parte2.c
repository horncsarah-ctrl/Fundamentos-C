// Fundamentos de Programação em C — Exercícios - Uso de operadores relacionais e Estruturas de Seleção - AULA 4 - parte 2

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// Exercício 14
int comparacao_de_dados(){
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

// Exercício 15
int calculo_salario(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float horas, salario_hora, horas_extras, salario_final;
    printf("Insira a quantidade de horas trabalhadas");
    scanf("%f", &horas);
    printf("Insira o valor das horas regulares: ");
    scanf("%f", &salario_hora);





    //TERMINAR





    return 0;
}

// Exercício 16
int placar_jogo(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome1[25], nome2[25];
    int numero_gols1, numero_gols2;
    setbuf(stdin,NULL);
    printf("Insira o nome do primeiro time: ");
    gets (nome1);
    printf("Insira o número de gols do primeiro time: ");
    scanf("%d", &numero_gols1);
    setbuf(stdin,NULL);
    printf("Insira o nome do segundo time: ");
    gets (nome2);
    printf("Insira o número de gols do segundo time: ");
    scanf("%d", &numero_gols2);
    if (numero_gols1 > numero_gols2){
        printf("O time %s GANHOU de %d a %d\n", nome1, numero_gols1, numero_gols2);
    }
    else if (numero_gols2 > numero_gols1){
        printf("O time %s GANHOU de %d a %d\n", nome2, numero_gols2, numero_gols1);
    }
    else{
        printf("O jogo EMPATOU em %d a %d\n", numero_gols2, numero_gols1);
    }
    return 0;
}

// Exercício 17
int posto_de_combustivel(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float quant_litros, valor_pagar, desconto;
    char letra;
    printf("Insira o número de litros vendidos: ");
    scanf("%f", &quant_litros);
    printf("Aperte A para Álcool ou G para Gasolina: ");
    scanf(" %c", &letra);
    if (letra == 'A'){
        if (quant_litros <= 20){
            desconto = (0.03 * 2.90) * quant_litros; 
            valor_pagar = (quant_litros * 2.90) - desconto;
            printf("Opção escolhida = ÁLCOOL - O valor a ser pago é de R$ %.2f", valor_pagar);
        }
        else{
            desconto = (0.05 * 2.90) * quant_litros; 
            valor_pagar = (quant_litros * 2.90) - desconto;
            printf("Opção escolhida = ÁLCOOL - O valor a ser pago é de R$ %.2f", valor_pagar);
        }
    }
    else if (letra == 'G'){
        if (quant_litros <= 20){
            desconto = (0.04 * 3.30) * quant_litros; 
            valor_pagar = (quant_litros * 3.30) - desconto;
            printf("Opção escolhida = GASOLINA - O valor a ser pago é de R$ %.2f", valor_pagar);
        }
        else{
            desconto = (0.06 * 3.30) * quant_litros; 
            valor_pagar = (quant_litros * 3.30) - desconto;
            printf("Opção escolhida = GASOLINA - O valor a ser pago é de R$ %.2f", valor_pagar);
        }
    }
    return 0;
}

// Exercício 18
int soma_e_produto_de_idades(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    return 0;
}

// Exercício 19
int aposentadoria(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    return 0;
}

// Exercício 20
int direito_de_voto_e_cnh(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    return 0;
}

// Exercício 21
int classificacao_de_produto(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    return 0;
}

// Exercício 22
int origem_do_produto(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    return 0;
}

// Exercício 23
int classificacao_expandida(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    return 0;
}

// Exercício 24
int categoria_de_nadador(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    return 0;
}

// Exercício 25
int origem_expandida(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    return 0;
}

int main(){
    // comparacao_de_dados();
    // calculo_salario();
    // placar_jogo();
    // posto_de_combustivel();
    // soma_e_produto_de_idades();
    // aposentadoria();
    // direito_de_voto_e_cnh();
    // classificacao_de_produto();
    // origem_do_produto();
    // classificacao_expandida();
    // categoria_de_nadador();
    // origem_expandida();
    return 0;
}