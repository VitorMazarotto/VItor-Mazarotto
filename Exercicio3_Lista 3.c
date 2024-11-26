#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

// Função que calcula o resultado somando os elementos de um vetor
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado; // Declaração do vetor e variáveis auxiliares

    // Preenchendo o vetor com valores (multiplicação por 2)
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2; // O valor de cada elemento é igual ao índice multiplicado por 2
    }

    // Chamada da função para calcular a soma dos elementos do vetor
    resultado = calcularResultado(vetor, 5);

    // Exibindo o resultado
    printf("O resultado é: %d\n", resultado);

    return 0; // Indica que o programa foi executado com sucesso
}

// Função que calcula a soma dos elementos de um vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0; // Inicializa a soma como 0

    // Soma os elementos do vetor
    for (i = 0; i < n; i++) {
        soma += v[i]; // Adiciona cada elemento do vetor à soma
    }

    return soma; // Retorna a soma calculada
}
