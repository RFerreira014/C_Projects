#include <stdio.h>
#include "multiplica.h"

int main() {
    int x, y;
    printf("Intruduz dois números: ");
    scanf("%d %d", &x, &y);
    int resultado = multiplica(x, y);
    printf("Resultado: %d\n", multiplica(x, y));
    printf("Resultado: %d\n", resultado);
    return 0;

}