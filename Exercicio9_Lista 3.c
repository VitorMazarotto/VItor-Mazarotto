#include <stdio.h>

// Função para multiplicar os elementos do vetor
int multiplicarValores(int vetor[], int tamanho) {
    int produto = 1;
    for (int i = 0; i < tamanho; i++) {
        produto *= vetor[i];
    }
    return produto;
}

int main() {
    int tamanho;

    // Solicitando o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    // Preenchendo o vetor com valores fornecidos pelo usuário
    printf("Digite %d valores inteiros:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamando a função para calcular o produto
    int resultado = multiplicarValores(vetor, tamanho);

    // Exibindo o resultado
    printf("O resultado da multiplicação dos valores é: %d\n", resultado);

    return 0;
}
