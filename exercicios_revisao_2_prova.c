#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main(){ // 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int soldados, i, fila = 1;
    scanf("%d", &soldados);
    for (; soldados % 6 !=0;){
        scanf("%d", &soldados);
    }
    for (i = 1; i <= soldados; i++){
        if ((i-1) % 6 == 0){
            printf("\n Fila %d: ", fila);
            fila++;
        }
        printf(" %d ", i);
    }
    return 0;
}