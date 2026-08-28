// Fundamentos de Programação em C — Exercícios - Praticando raciocínio lógico - AULA 2 

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// Escreva um programa para definir e ler duas notas e escrever a média das notas
int media_das_notas(){
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota1, nota2, media;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A sua média é %.2f\n", media);
    return 0;
}

// Escreva um programa para calcular e escrever o volume de uma esfera de raio R, em que R é um dado fornecido pelo usuário
int volume_esfera(){
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float raio, volume;
    printf("Insira o raio da sua esfera: ");
    scanf("%f", &raio);
    volume = (4 * 3.1415 * pow(raio, 3))/3;
    printf("O volume da sua esfera é de %.2f\n", volume);
    return 0;
}

// Escreva uma programa para definir e ler o nome e salário bruto de um funcionário, calcular e escreve seu salário líquido,
// sendo que sobre o salário bruto temos um desconto de 8.5% de inss e 12% de imposto de renda
int salario_de_um_funcionario() {
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	char nome[50];
	float salario_bruto, salario_liquido, inss, imposto, desconto;
	printf("Insira o seu nome: ");
	setbuf(stdin, NULL);
	gets(nome);
	printf("Insira o seu salário bruto: ");
	setbuf(stdin, NULL);
	scanf("%f", &salario_bruto);
	inss = 0.085 * salario_bruto;
	imposto = 0.12 * salario_bruto;
	salario_liquido = salario_bruto - inss - imposto;
	printf("O seu salário líquido é de: %.2f\n", salario_liquido);
	return 0;
}

// Escreva uma programa que defina e leia 3 valores A, B, C do tipo inteiro, a seguir encontre o maior dos três valores
// e o escreva com a mensagem, maior valor é: utilize a seguinte fórmula (a + b + |a-b|) / 2
int maior_valor_entre_tres_valores(){
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valorA, valorB, valorC, maiorAB, maior_valor;
    printf("Insira o valor de A: ");
    scanf("%d", &valorA);
    printf("Insira o valor de B: ");
    scanf("%d", &valorB);
    printf("Insira o valor de C: ");
    scanf("%d", &valorC);
    maiorAB= (valorA + valorB + abs(valorA - valorB)) / 2;
    maior_valor = (maiorAB + valorC + abs(maiorAB - valorC)) / 2;
    printf("O maior número entre esses três valores é %d\n", maior_valor);
    return 0;
}

// Tendo como dados de entrada um valor com até duas casas decimais, que representa um valor monetário. Calcular e escreve o menor
// número possível de notas e moedas nas quais o valor pode ser decomposto
int menor_numero_de_notas() {
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int valor_inserido, valor_decimal, nota100, resto, nota50, nota20, nota10, nota5, nota2;
	int moeda1, cents50, cents25, cents10, cents5, cents1;
	printf("Insira um valor de até duas casas decimais: ");
	scanf("%d.%d", &valor_inserido, &valor_decimal);
	nota100 = valor_inserido / 100;
	resto = valor_inserido % 100;
	nota50 = resto / 50;
	resto = resto % 50;
	nota20 = resto / 20;
	resto = resto % 20;
	nota10 = resto / 10;
	resto = resto % 10;
	nota5 = resto / 5;
	resto = resto % 5;
	nota2 = resto / 2;
	resto = resto % 2;
	moeda1 = resto / 1;
	resto = resto % 1;
	cents50 = valor_decimal / 50;
	resto = valor_decimal % 50;
	cents25 = resto / 25;
	resto = resto % 25;
	cents10 = resto / 10;
	resto = resto % 10;
	cents5 = resto / 05;
	resto = resto % 05;
	cents1 = resto / 01;
	resto = resto % 01;
	printf("Notas de 100: %d ", nota100);
	printf("\nNotas de 50: %d ", nota50);
	printf("\nNotas de 20: %d", nota20);
	printf("\nNotas de 10: %d", nota10);
	printf("\nNotas de 5: %d", nota5);
	printf("\nNotas de 2: %d", nota2);
	printf("\nMoedas de 1: %d", moeda1);
	printf("\nMoedas de 0,50: %d", cents50);
	printf("\nMoedas de 0,25: %d", cents25);
	printf("\nMoedas de 0,10: %d", cents10);
	printf("\nMoedas de 0,05: %d", cents5);
	printf("\nMoedas de 0,01: %d\n", cents1);
	return 0;
}

// Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias;
int idade_pessoa_exata(){
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int idade_dias, anos, meses, dias, resto;
	printf("Insira a idade expressa em dias: ");
	scanf("%d", &idade_dias); 
	anos = idade_dias / 365;
	resto = idade_dias % 365;
	meses = resto / 30;
	resto = resto % 30;
	dias = resto;
	printf("Anos: %d ", anos);
	printf("\nMeses: %d ", meses);
	printf("\nDias: %d\n", dias);
}

// Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em 
// horas, minutos e segundos
int converter_segundos(){
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int tempo_segundos, horas, minutos, segundos, resto;
	printf("Insira o tempo em segundos: ");
	scanf("%d", &tempo_segundos);
	horas = tempo_segundos / 3600;
	resto = tempo_segundos % 3600;
	minutos = resto / 60;
	segundos = resto % 60;
	printf("Horas: %d ", horas);
	printf("\nMinutos: %d ", minutos);
	printf("\nSegundos: %d\n", segundos);
	return 0;
}

int main()
{
    media_das_notas();
    volume_esfera();
    salario_de_um_funcionario();
    maior_valor_entre_tres_valores();
    menor_numero_de_notas();
	idade_pessoa_exata();
	converter_segundos();
    return 0;
}