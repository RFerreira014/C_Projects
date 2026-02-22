#include <stdio.h>
#include "soma.h"

int main() {
    int a, b;


    printf("Introduz dois numeros: ");
    scanf("%d %d", &a, &b);
    int resultado = soma(a, b);

    printf("resultado: %d\n", resultado);
   

    return 0;
}