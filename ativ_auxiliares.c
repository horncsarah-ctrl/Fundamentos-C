// Fundamentos de Programação em C — Atividades Complementares / Auxiliares com relação a aula 5

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// Exercício 1
int reajuste_salarial_bonus(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float salario, anos, tempo_servico, reajuste, novo_salario;
    printf("Insira o seu salário atual: ");
    scanf("%f", &salario);
    printf("Insira o seu tempo de serviço em anos: ");
    scanf("%f", &anos);
    tempo_servico = anos * 12;
    if (salario <= 500 && tempo_servico <= 12){
        reajuste = salario * 0.25;
        novo_salario = salario + reajuste;
        printf("Você receberá R$ %.2f - Sem direito a bônus\n", novo_salario);
    }
    else if (salario <= 1000 && tempo_servico <=36){
        reajuste = salario * 0.20;
        novo_salario = salario + reajuste + 100;
        printf("Você receberá R$ %.2f\n", novo_salario);
    }
    else if (salario <= 1500 && tempo_servico <=72){
        reajuste = salario * 0.15;
        novo_salario = salario + reajuste + 200;
        printf("Você receberá R$ %.2f\n", novo_salario);
    }
    else if (salario <= 2000 && tempo_servico <=120){
        reajuste = salario * 0.10;
        novo_salario = salario + reajuste + 100;
        printf("Você receberá R$ %.2f\n", novo_salario);
    }
    else if (salario > 1000 && tempo_servico > 120){
        novo_salario = salario + 500;
        printf("Você receberá R$ %.2f - Sem direito a reajuste\n", novo_salario);
    }
    else{
        printf("Você inseriu um valor inválido!\n");
    }
    return 0;  
}

// Exercício 2
int calculo_de_imc(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float peso, altura, imc;
    printf("Insira o seu peso: ");
    scanf("%f", &peso);
    printf("Insira a sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if (imc < 18.5){
        printf("Abaixo do peso\n");
        printf("IMC = %.2f\n", imc);
    }
    else if (imc <= 24.9){
        printf("Saudável\n");
        printf("IMC = %.2f\n", imc);
    }
    else if (imc <= 29.9){
        printf("Peso em excesso\n");
        printf("IMC = %.2f\n", imc);
    }
    else if (imc <= 34.9){
        printf("Obesidade Grau I\n");
        printf("IMC = %.2f\n", imc);
    }
    else if (imc <= 39.9){
        printf("Obesidade Grau II (severa)\n");
        printf("IMC = %.2f\n", imc);
    }
    else{
        printf("Obesidade Grau III (mórbida)\n");
        printf("IMC = %.2f\n", imc);
    }
    return 0;
}

// Exercício 3
int validacao_data(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int dia, mes, ano;
    printf("Insira a data: ");
    scanf("%d", &dia);
    printf("Insira o mês: ");
    scanf("%d", &mes);
    printf("Insira o ano: ");
    scanf("%d", &ano);
    if (dia > 0 && mes > 0 && mes < 13){
        if (ano <= 2023){
            if (mes == 2){
                if (dia <= 28){
                    printf("Data válida\n");
                }
                else{
                    printf("Data Inválida\n");
                }
            }
            else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
                if (dia <= 30){
                    printf("Data Válida\n");
                }
                else {
                    printf("Data Inválida\n");
                }
            }
            else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                if (dia <= 31){
                    printf("Data Válida\n");
                }
                else{
                    printf("Data Inválida\n");
                }
            }
            else{
                printf("Data Inválida\n");
            }
        }
        else {
            printf("Data Inválida\n");
        }
    }
    else{
        printf("Data Inválida\n");
    }
    return 0;
}

// Exercício 4
int classificacao_altura_peso(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float peso, altura;
    printf("Insira a altura: ");
    scanf("%f", &altura);
    printf("Insira o peso: ");
    scanf("%f", &peso);
    if (altura > 0 && peso > 0){
        if (altura < 1.20){
            if (peso < 60){
                printf("A\n");
            }
            else if (peso >= 60 && peso <= 90){
                printf("D\n");
            }
            else {
                printf("G\n");
            }
        }
        else if (altura >= 1.20 && altura <= 1.70){
            if (peso < 60){
                printf("B\n");
            }
            else if (peso >= 60 && peso <= 90){
                printf("E\n");
            }
            else {
                printf("H\n");
            }
        }
        else {
            if (peso < 60){
                printf("C\n");
            }
            else if (peso >= 60 && peso <= 90){
                printf("F\n");
            }
            else {
                printf("I\n");
            }
        }
    }
    else {
        printf("Valores Inválidos\n");
    }
    return 0;
}

//Exercício 5
int controle_reservatorio_agua(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float altura, largura, comprimento, consumo_diario


    

    return 0;
}

int main(){
    // reajuste_salarial_bonus();
    // calculo_de_imc();
    // validacao_data();
    // classificacao_altura_peso();
    return 0;
}