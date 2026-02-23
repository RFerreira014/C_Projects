#include "funcao.h"

// Implementação: soma todos os valores do array
int funcao(int *valores, int tamanho) {
    int soma = 0;
    
    // Percorre todos os elementos do array
    for (int i = 0; i < tamanho; i++) {
        soma += valores[i];
    }
    
    return soma;
}
