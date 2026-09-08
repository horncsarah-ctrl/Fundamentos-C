// Fundamentos de Programação em C — Exercícios - Uso de operadores relacionais e Estruturas de Seleção - AULA 4 - parte 1

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// Exercício 2
int conta_bancaria(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float saldo, novo_saldo, valor_deposito, valor_retirada;
    int numero_conta, tipo_operacao;
    printf("Operações bancárias! \n");
    printf("Insira o número da conta: ");
    scanf("%d", &numero_conta);
    printf("Insira o saldo da conta: ");
    scanf("%f", &saldo);
    printf("Digite 1 para realizar depósito \nDigite 2 para realizar saque\n");
    printf("Insira a operação: ");
    scanf("%d", &tipo_operacao);
    if (tipo_operacao == 1){
        printf("=================================================\n");
        printf("Você está realizando um depósito: ");
        scanf("%f", &valor_deposito);
        novo_saldo = saldo + valor_deposito;
        printf("O saldo atual é de: R$ %.2f", novo_saldo);
    }
    else {
        printf("=================================================\n");
        printf("Você está realizando um saque: ");
        scanf("%f", &valor_retirada);
        novo_saldo = saldo - valor_retirada;
        if (novo_saldo < 0){
            printf("O novo saldo ficou NEGATIVO! R$ %.2f", novo_saldo);
        }
        else{
            printf("O saldo atual é de: R$ %.2f", novo_saldo);
        }
    }
    return 0;
}

// Exercício 3
int peso_ideal(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float sexo, altura, peso_ideal;
    printf("Programa para saber o seu peso ideal!\n");
    printf("Digite 1 para MULHER \nDigite 2 para HOMEM\n");
    printf("Insira o número correspondente ao seu gênero: ");
    scanf("%f", &sexo);
    printf("Insira a sua altura: ");
    scanf("%f", &altura);
    if (sexo == 1){
        peso_ideal = 62.1 * altura - 44.7;
        printf("O seu peso ideal é %.2f, considerando seu gênero e altura\n", peso_ideal);
    }
    else if (sexo == 2){
        peso_ideal = 72.7 * altura - 58;
        printf("O seu peso ideal é %.2f, considerando seu gênero e altura\n", peso_ideal);
    }
    else{
        printf("Valor Inválido");
    }
    return 0;
}

// Exercício 4
int valor_total_compra(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float valor_total;
    int quant_macas;
    printf("Insira a quantidade de macas compradas:\n");
    scanf("%d", &quant_macas);
    if (quant_macas < 12){
        valor_total = quant_macas * 1.30;
        printf("O valor total da compra é de R$ %.2f\n", valor_total);
    }
    else{
        valor_total = quant_macas * 1.00;
        printf("O valor total da compra é de R$ %.2f\n", valor_total);
    }
    return 0;
}

// Exercício 5
int imprimindo_condicionalmente(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valor;
    printf("Insira o valor: \n");
    scanf("%d", &valor);
    if (valor <=10){
        printf("F1\n");
    }
    else if(valor <= 100){
        printf("F2\n");
    }
    else{
        printf("F3\n");
    }
    return 0;
}

// Exercício 6
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
                printf("Do menor para o maior: valor C (%d), valor B (%d), valor A (%d)\n", valorC, valorB, valorA);
            }
            else{
                printf("Do menor para o maior: valor B (%d), valor C (%d), valor A (%d)\n", valorB, valorC, valorA);
            }
        }
        else{
            printf("Do menor para o maior: valor B (%d), valor A (%d), valor C (%d)\n", valorB, valorA, valorC);
        }
    }
    else{
        if (valorB > valorC){
            if (valorA > valorC){
                printf("Do menor para o maior: valor C (%d), valor A (%d), valor B (%d)\n", valorC, valorA, valorB);
            }
            else {
                printf("Do menor para o maior: valor A (%d), valor C (%d), valor B (%d)\n", valorA, valorC, valorB);
            }
        }
        if (valorC > valorB){
            printf("Do menor para o maior: valor A (%d), valor B (%d), valor C (%d)\n", valorA, valorB, valorC);
        }
    }
    return 0;
}
 
// Exercício 7
int aluno_aprovado_reprovado_3_notas(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);
    if (media >= 70){
        printf("Sua média foi o suficiente = APROVADO! (média = %.2f)\n", media);
    }
    else {
        printf("Sua média não foi o suficiente = REPROVADO! (média = %.2f)\n", media);
    }
    return 0;
}


// Considere que o último concurso vestibular apresentou três provas: Português, Matemática e Conhecimentos
// Gerais. Considerando que para cada candidato tem-se um registro contendo o seu nome e as notas obtidas em
// cada uma das provas, construa um algoritmo que forneça:
// a) O nome e as notas em cada prova do candidato;
// b) A média do candidato;
// Calcule e escreva uma informação dizendo se o candidato foi aprovado ou não. Considere que um candidato é
// aprovado se sua média for maior que 7.0 e se não apresentou nenhuma nota abaixo de 5.0.
// Exercício 8
int informacoes_candidatos_concurso(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota_portugues, nota_matematica, nota_conhec_gerais, media;
    char nome[25];
    printf("Insira o seu nome: ");
    setbuf(stdin, NULL);
    gets(nome);
    printf("Insira sua nota em Português: ");
    scanf("%f", &nota_portugues);
    printf("Insira sua nota em Matemática: ");
    scanf("%f", &nota_matematica);
    printf("Insira sua nota em conhecimentos gerais: ");
    scanf("%f", &nota_conhec_gerais);
    media = (nota_conhec_gerais + nota_matematica + nota_portugues) / 3.0;
    if(media >= 70){
        if (nota_portugues < 50){
            printf("REPROVADO\n");
        }
        else if (nota_matematica < 50){
            printf("REPROVADO\n");
        }
        else if (nota_conhec_gerais < 50){
            printf("REPROVADO\n");
        }
        else{
            printf("APROVADO\n");
        }
    }
    else{
        printf("REPROVADO\n");
    }
    return 0;
}

// Exercício 9
int comissao_vendas(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome[25];
    float valor_vendas, comissao;
    printf("Insira o nome do corretor: ");
    setbuf(stdin, NULL);
    gets(nome);
    printf("Insira o valor das vendas: ");
    scanf("%f", &valor_vendas);
    if (valor_vendas > 50000){
        comissao = valor_vendas * 0.12;
        printf("Corretor %s - Valor da venda - R$ %.2f\n", nome, valor_vendas);
        printf("A comissão é de R$ %.2f\n", comissao);
    }
    else{
        if (valor_vendas <= 50000){
            if (valor_vendas >= 30000){
                comissao = valor_vendas * 0.095;
                printf("Corretor %s - Valor da venda - R$ %.2f\n", nome, valor_vendas);
                printf("A comissão é de R$ %.2f\n", comissao);
            }
        else{
            comissao = valor_vendas * 0.07;
            printf("Corretor %s - Valor da venda - R$ %.2f\n", nome, valor_vendas);
            printf("A comissão é de R$ %.2f\n", comissao);
        }
        }
    }
    return 0;
}

// Exercício 10
int comparacao_soma(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB, valorC, soma;
    printf("Insira o valor de A: ");
    scanf("%d", &valorA);
    printf("Insira o valor de B: ");
    scanf("%d", &valorB);
    printf("Insira o valor de C: ");
    scanf("%d", &valorC);
    soma = valorA + valorB;
    if (soma > valorC){
        printf("A soma (%d) é MAIOR que o valor de C (%d)\n", soma, valorC);
    }
    else if (soma < valorC){
        printf("A soma (%d) é MENOR que o valor de C (%d)\n", soma, valorC);
    }
    else{
        printf("A soma (%d) é IGUAL que o valor de C (%d)\n", soma, valorC);
    }
    return 0;
}

// Exercício 11
int conceito_por_nota(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota;
    printf("Insira sua nota: ");
    scanf("%f", &nota);
    if (nota <= 49){
        printf("Conceito = INSUFICIENTE!\n");
    }
    else if (nota <= 64){
        printf("Conceito = REGULAR!\n");
    }
    else if (nota <= 84){
        printf("Conceito = BOM!");
    }
    else{
        printf("Conceito = ÓTIMO!");
    }
    return 0;
}

// Exercício 12
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

// Exercício 13
int ler_numero_par_positivo_negativo(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("\nLer um número inteiro e dizer se ele é par ou ímpar: ");
    int numero;
    printf("\nInsira um número para saber se ele é par ou ímpar: ");
    scanf("%d", &numero);
    if (numero % 2 == 0){
        printf("O número %d é par\n", numero);
    }
    else {
        printf("O número %d é ímpar\n", numero);
    }
    if (numero > 0){
        printf("O número %d é positivo\n", numero);
    }
    else{
        printf("O número %d é negativo\n", numero);
    }
    return 0;
}

int main(){
    // conta_bancaria();
    // peso_ideal();
    // imprimindo_condicionalmente();
    // valor_total_compra();
    // tres_valores_crescente();
    // aluno_aprovado_reprovado_3_notas();
    // informacoes_candidatos_concurso();
    // comissao_vendas();
    // comparacao_soma();
    // conceito_por_nota();
    // dois_valores_multiplos_ou_nao();
    // ler_numero_par_positivo_negativo();
    return 0;
}