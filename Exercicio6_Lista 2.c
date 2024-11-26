
#include <stdio.h>

int somaVetor(int vetor[], int tamanho);

int main() {
    int vetor[3];

    printf("Digite três números inteiros:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("A soma dos valores do vetor é: %d\n", somaVetor(vetor, 3));
    return 0;
}

int somaVetor(int vetor[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return soma;
}
