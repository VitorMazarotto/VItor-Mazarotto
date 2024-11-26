#include <stdio.h> // Biblioteca padr�o para entrada e sa�da de dados

// Fun��o que calcula o resultado somando os elementos de um vetor
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado; // Declara��o do vetor e vari�veis auxiliares

    // Preenchendo o vetor com valores (multiplica��o por 2)
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2; // O valor de cada elemento � igual ao �ndice multiplicado por 2
    }

    // Chamada da fun��o para calcular a soma dos elementos do vetor
    resultado = calcularResultado(vetor, 5);

    // Exibindo o resultado
    printf("O resultado �: %d\n", resultado);

    return 0; // Indica que o programa foi executado com sucesso
}

// Fun��o que calcula a soma dos elementos de um vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0; // Inicializa a soma como 0

    // Soma os elementos do vetor
    for (i = 0; i < n; i++) {
        soma += v[i]; // Adiciona cada elemento do vetor � soma
    }

    return soma; // Retorna a soma calculada
}
