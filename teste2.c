#include <stdio.h>

int main() {

    int V[] = {2, 33, 4, 2, 21, 87, 66, 20 };
    int inicio = 3;
    int total = 8;
    int i;
    int tamanho = total - inicio;
    int *p = &V[inicio];
    for( i=0; i < tamanho; i++){

    printf("o subvetor é: %d\n", p[i]);}
    return 0;
}