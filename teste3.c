#include <stdio.h>

int main() {

    int V[] = {2, 33, 4, 2, 21, 87, 66, 20 };
    int inicio = 3;
    int n = sizeof(V) / sizeof(V[0]);
    int i;
    printf("o meu subvector é: { ");

    for( i = inicio; i < n; i++){
        if (i < n - 1) {
            printf("%d, ", V[i]);}
        else if (i == n - 1) {
            printf(" %d}\n", V[i]);}
        }
        
    }