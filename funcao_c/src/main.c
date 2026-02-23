#include <stdio.h>
#include "funcao.h"

int main() {
    int tamanho;
    int valores[100];  // Array com capacidade para 100 números
    
    // Pede ao utilizador quantos números quer inserir
    printf("Quantos números quer inserir? ");
    scanf("%d", &tamanho);
    
    // Verifica se o tamanho é válido
    if (tamanho <= 0 || tamanho > 100) {
        printf("Erro: Insira um número entre 1 e 100\n");
        return 1;
    }
    
    // Lê cada número do utilizador
    printf("Insira os %d números:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    // Chama a função com os valores inseridos
    int resultado = funcao(valores, tamanho);
    
    // Mostra o resultado
    printf("\nResultado da função: %d\n", resultado);
    
    return 0;
}