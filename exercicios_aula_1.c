// Fundamentos de Programação em C — Exercícios - Praticando o uso de variáveis - AULA 1

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

// Escreva um algoritmo para pedir um número e imprimir o antecessor e o sucessor deste número
int antecessor_e_sucessor(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, anterior, sucessor;
    printf("Insira o seu número: ");
    scanf("%d", &numero);
    anterior = numero - 1;
    sucessor = numero + 1;
    printf("Seu número é %d, o antecessor dele é %d e o sucessor dele é %d\n", numero, anterior, sucessor);
    return 0;
} 

// Escreva um programa para solicitar ao usuário as informações abaixo e depois as escreva na tela: Código de produto, descrição e preço de venda.
int informacoes_de_produtos(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int codigo;
    float preco;
    char descricao[35];
    printf("Informe o código do produto: ");
    scanf("%d",&codigo);
    setbuf(stdin,NULL);
    printf("Informe a descrição do produto: ");
    gets(descricao);
    printf("Informe o preço do produto: ");
    scanf("%f",&preco);
    printf("Código: %d / Descrição: %s / Preço: %.2f\n",codigo, descricao, preco);
    return 0;
}

// Escreva um programa para definir e ler dois valores A e B do tipo inteiro e efetuar a troca dos valores de forma que a variável A 
// fique com o valor da variável B e a variável B fique com o valor da variável A. Escrever o conteúdo das variáveis A e B.
int troca_valores_de_duas_variaveis()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b, aux;
    printf("Informe o primeiro número: ");
    scanf("%d",&a);
    printf("Informe o segundo número: ");
    scanf("%d",&b);
    aux = a;
    a = b;
    b = aux;
    printf("\nValores trocados a = %d b = %d\n",a, b);
    return 0;
}

// Escrever um programa para calcular o volume de uma caixa retangular tendo como dados de entrada o comprimento, largura e altura
// Utilize a fórmula: volume = comprimento * largura * altura.
int volume_de_uma_caixa_retangular()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float comprimento, altura, largura, volume;
    printf("Informe o comprimento: ");
    scanf("%f",&comprimento);
    printf("Informe a altura: ");
    scanf("%f",&altura);
    printf("Informe a largura: ");
    scanf("%f",&largura);
    volume = comprimento * altura * largura;
    printf("\nVolume da caixa = %.3f\n",volume);
    return 0;
}

// Escrever um programa para definir e ler os seus dados pessoais (nome, endereço e telefone), mostrar seus dados na tela.
int mostrar_dados_pessoais()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome[30], endereco[35], fone[15];
    printf("Informe seu nome: ");
    setbuf(stdin,NULL);
    gets(nome);
    printf("Informe seu endereço: ");
    gets(endereco);
    printf("Informe seu telefone:");
    gets(fone);
    printf("Nome: %s / Endereço: %s / Fone: %s\n", nome, endereco, fone);
    return 0;
}

// Aprendendo a usar o strcpy -> copia o texto de uma string de origem para uma string de destino  
int aprendendo_metodos()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome[30], nome1[30],  aux[30];
    printf("Informe seu nome:");
    gets(nome); 
    printf("Informe outro nome:");
    gets(nome1);
    strcpy(aux, nome);
    strcpy(nome, nome1);
    strcpy(nome1, aux);
    printf("Nome: %s outro nome: %s\n", nome, nome1);
    return 0;
} 

// Escreva um algoritmo para calcular o valor de uma prestação, tendo como valores de entrada: valor, taxa e tempo
int valor_de_prestacao()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float valor, taxa, prestacao;
    int tempo;
    printf("Informe o valor da prestação:");
    scanf("%f",&valor);
    printf("Informe taxa:");
    scanf("%f",&taxa);
    printf("Informe tempo:");
    scanf("%d",&tempo);
    prestacao =valor + (valor * taxa / 100) * tempo;
    printf("O valor atualizado da prestação é de: R$%.2f\n",prestacao);
    return 0;
}

int cotacao_de_dolar()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float real, dolar, cotacao;
    printf("Informe o valor em reais:");
    scanf("%f",&real);
    printf("Informe a cotação em doláres: ");
    scanf("%f",&cotacao);
    dolar = real / cotacao;
    printf("O valor em ólares é de: %.2f\n",dolar);
    return 0;
}

int gasto_medio()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int km, litros;
    float media;
    printf("Informe a distância em quilômetros: ");
    scanf("%d",&km);
    printf("Informe a quantidade de litros de combustível gastos: ");
    scanf("%d",&litros);
    media = (float)km / litros;
    printf("Quantidade média por km rodados %.3f\n",media);
    return 0;
}

int latas_tinta_gastas()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float raio, altura,altura_lateral, altura_base, altura_total, qtlitros, qtlatas, custo;
    printf("Informe o raio: ");
    scanf("%f",&raio);
    printf("Informe a altura_lateraltura: ");
    scanf("%f",&altura);
    altura_lateral = 2 * 3.1415 * raio * altura;
    altura_base = 3.1415 * raio * raio;
    altura_total = altura_base + altura_lateral;
    qtlitros = altura_total / 3;
    qtlatas = qtlitros / 5;
    custo = qtlatas * 50;
    printf("Quantidade de latas = %.3f", qtlatas);
    printf("\nValor total = R$ %.2f",custo);
    return 0;
}

int main()
{
    antecessor_e_sucessor();
    informacoes_de_produtos();
    troca_valores_de_duas_variaveis();
    volume_de_uma_caixa_retangular();
    mostrar_dados_pessoais();
    aprendendo_metodos();
    valor_de_prestacao();
    cotacao_de_dolar();
    gasto_medio();
    latas_tinta_gastas();
    return 0;
}