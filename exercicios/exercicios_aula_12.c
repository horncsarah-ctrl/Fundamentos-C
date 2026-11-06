// Fundamentos de Programação em C — Exercícios - Aprendendo sobre ORDENAÇÃO DE VETORES - AULA 11

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int exercicio_1()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float n1[5], n2[5], aux_n, media[5];
    int i, j;
    char nome[5][25], aux[25];
    for (i = 0; i < 5; i++)
    {      
        setbuf(stdin, NULL);
        printf("Insira o nome: ");
        gets(nome[i]);
        setbuf(stdin, NULL);
        printf("Insira nota 1:");
        scanf("%f", &n1[i]);
        setbuf(stdin, NULL);
        printf("Insira nota 2:");
        scanf("%f", &n2[i]);
        setbuf(stdin, NULL);
    }

    for(i = 0; i < 5; i++){
        for (j = i+1; j < 6; j++){
            if (strcmp(nome[i], nome[j]) == 1){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux);
                aux_n = n1[i];
                n1[i] = n1[j];
                n1[j] = aux_n;
                aux_n = n2[i];
                n2[i] = n2[j];
                n2[j] = aux_n;
            }
        }
    }
    for (i = 0; i < 5; i++){
        media[i] = (n1[i] + n2[i]) / 2;
        if (media[i] > 7.0){
            printf("\nAluno %s | Média: %.2f = APROVADO", nome[i], media[i]);
        }
        else {
            printf("\nAluno %s | Média: %.2f = REPROVADO", nome[i], media[i]);
        }
    }   
    return 0;
}

int exercicio_2(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5], b[5], i, j, aux, fatorial = 1;
    for (i = 0; i < 5; i++){
        fatorial = 1;
        printf("Insira um número: ");
        scanf("%d", &a[i]);
        for (j = 1; j <= a[i]; j ++){
            fatorial = j * fatorial;
        }
        b[i] = fatorial;
    }
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if (b[i] < b[j]){
                aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }
        }
    }
    for (i = 0; i < 5; i++){
        printf("\nFatorial Posição %d = %d", i, b[i]);
    }
    return 0;
}

int main(){
    // exercicio_1();
    exercicio_2();
    return 0;
}