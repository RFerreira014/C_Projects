#include <stdio.h>
#include "funcao.h"

int main() {
    // Exemplo 1: Array com 3 elementos
    int numeros1[] = {10, 20, 30};
    int resultado1 = funcao(numeros1, 3);
    printf("Soma de 3 números: %d\n", resultado1);
    
    // Exemplo 2: Array com 5 elementos
    int numeros2[] = {1, 2, 3, 4, 5};
    int resultado2 = funcao(numeros2, 5);
    printf("Soma de 5 números: %d\n", resultado2);
    
    // Exemplo 3: Array com 10 elementos
    int numeros3[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int resultado3 = funcao(numeros3, 10);
    printf("Soma de 10 números: %d\n", resultado3);
    
    return 0;
}