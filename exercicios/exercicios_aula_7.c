// Fundamentos de Programação em C — Exercícios - Aprendendo como usar WHILE, Acumulador, Contador e Flags - AULA 6

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// EXERCÍCIO 1
int tabuada()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, contador = 0, resultado; // Erro principal = esqueci de iniciar o contador
    printf("Insira um número: ");
    scanf("%d", &numero);
    while (contador <= 10)
    {
        resultado = numero * contador;
        printf("%d X %d = %d\n", numero, contador, resultado);
        contador++;
    }
    return 0;
}

// EXERCÍCIO 2
int media_alunos()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int idade, contador = 0;
    float altura, media_idade, media_altura, soma_idade = 0, soma_altura = 0;
    while (contador < 5)
    {
        printf("Idade:");
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);
        soma_idade = soma_idade + idade;
        soma_altura = soma_altura + altura;
        contador++;
    }
    media_idade = soma_idade / 5;
    media_altura = soma_altura / 5;
    printf("Média idades = %.2f\n", media_idade);
    printf("Média alturas = %.2f\n", media_altura);
    return 0;
}

// EXERCÍCIO 3
int maior_menor()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, maior, menor, cont = 1;
    while (cont <= 5)
    {
        printf("Insira um número: ");
        scanf("%d", &numero);
        if (cont == 1)
        {
            maior = numero;
            menor = numero;
        }
        if (maior < numero)
        {
            maior = numero;
        }
        else
        {
            maior = maior;
        }
        if (menor > numero)
        {
            menor = numero;
        }
        else
        {
            menor = menor;
        }
        cont++;
    }
    printf("Menor = %d\n", menor);
    printf("Maior = %d\n", maior);
    return 0;
}

// EXERCÍCIO 4
int fibonacci()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int soma = 0, cont = 1, primeiro = 0, segundo = 1;
    printf("soma = %d\n", segundo);
    while (cont <= 20)
    {
        soma = primeiro + segundo;
        printf("soma = %d\n", soma);
        primeiro = segundo;
        segundo = soma;
        cont++;
    }
    return 0;
}

// EXERCÍCIO 5
int determine_valor_s()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int contador = 1;
    float soma, numerador = 1, denominador = 1, conta;
    while (contador <= 10)
    {
        conta = (float)numerador / denominador;
        if (contador == 1)
        {
            soma = conta;
        }
        else if (contador % 2 == 0)
        { // Errei no raciocínio. Os números PARES que sempre seriam subtraídos, não os ímpares
            // Buscar associar o sinal ao número, não considerar o sinal como algo separado. Os números são os termos e o sinal pertence a eles.
            // o sinal NÃO é o termo, ele ACOMPANHA o termo
            soma = soma - conta;
        }
        else
        {
            soma = soma + conta;
        }
        contador++;
        numerador = contador; // Erei aqui - o numerador assume o valor do contador, não preciso ficar somando valores a variável
        denominador = numerador * numerador;
    }
    printf("SOMA = %.2f\n", soma);
    return 0;
}

// EXERCÍCIO 6
int fatorial()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int contador, numero, fator, fatorial = 1; // 1 é o termo neutro da multiplicação
    printf("Insira um número: ");
    scanf("%d", &numero);
    contador = numero; // Comparado a segunda solução, esse ficou muito "complicado"
    while (contador >= 1)
    {
        fator = contador;
        fatorial = fatorial * fator;
        contador--;
    }
    printf("%d", fatorial);
    return 0;
}

// EXERCÍCIO 6 - Solução diferente
int fatorial_solucao_secundaria()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, contador = 1, fatorial = 1; // 1
    printf("Insira um número: ");
    scanf("%d", &numero);
    while (contador <= numero)
    {
        fatorial = fatorial * contador;
        contador++;
    }
    printf("%d", fatorial);
    return 0;
}

// EXERCÍCIO 7
int quantidade_fatoriais()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int contador, numero, num_fatorial, fator, fatorial;
    printf("Insira um número para definir a quantidade de números: ");
    scanf("%d", &numero);
    contador = numero;
    while (contador >= 1)
    {
        printf("Insira um número ");
        scanf("%d", &num_fatorial);
        fatorial = 1; // Esqueci de zerar a variável fatorial antes de começar
        while (num_fatorial > 1)
        {
            fator = num_fatorial;
            fatorial = fatorial * fator;
            num_fatorial--;
        }
        printf("Fatorial %d\n", fatorial);
        contador--;
    }
    return 0;
}

// EXERCÍCIO 7 - Segunda Solução
// Lembrar de que quando eu for usar um while dentro de outro, reiniciar as variáveis que eu estou alterando dentro do segundo while
int quantidade_fatoriais_segunda_solucao()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int quant_repeticoes, numero, fatorial, contador = 1;
    printf("Insira a quantidade de vezes: ");
    scanf("%d", &quant_repeticoes);
    while (quant_repeticoes >= 1)
    {
        printf("Insira um número: ");
        scanf("%d", &numero);
        fatorial = 1;
        contador = 1;
        while (contador <= numero)
        {
            fatorial = fatorial * contador;
            contador++;
        }
        printf("%d\n", fatorial);
        quant_repeticoes--;
    }
    return 0;
}

// EXERCÍCIO 8
// Sempre que eu for fazer qualquer tipo de soma no código, preciso declarar como 0 antes
void pesquisa_habitantes()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int contador, idade, soma_idade = 0, pessoas = 0, quant_mulher = 0, maior, menor;
    float salario, media_salarial, soma_salarial = 0;
    char sexo;
    printf("Insira a idade: ");
    scanf("%d", &idade);
    printf("Insira o salário: ");
    scanf("%f", &salario);
    printf("Insira o sexo: ");
    scanf("%c", &sexo);
    while (idade > 0)
    {
        if (pessoas == 0)
        {
            maior = idade;
            menor = idade;
        }
        if (idade > maior)
        {
            maior = idade;
        }
        else
        {
            maior = maior;
        }
        if (idade < menor)
        {
            menor = idade;
        }
        else
        {
            menor = menor;
        }
        soma_idade = soma_idade + idade;
        soma_salarial = soma_salarial + salario;
        printf("Insira a idade: ");
        scanf("%d", &idade);
        printf("Insira o salário: ");
        scanf("%f", &salario);
        printf("Insira o sexo: ");
        scanf("%c", &sexo);
        if (sexo == 'M' && salario <= 100.00)
        {
            quant_mulher++;
        }
        pessoas++;
    }
    media_salarial = soma_salarial / pessoas;
    printf("%d - Maior Idade", maior);
    printf("%d - Menor Idade", menor);
    printf("%f", media_salarial);
    printf("%d  Mulheres que ganham até R$100", quant_mulher);
}

int main()
{
    // tabuada();
    // media_alunos();
    // maior_menor();
    // fibonacci();
    // determine_valor_s();
    // fatorial();
    // fatorial_solucao_secundaria();
    // quantidade_fatoriais();
    // quantidade_fatoriais_segunda_solucao();
    // pesquisa_habitantes();
    return 0;
}