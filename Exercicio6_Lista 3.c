#include <stdio.h>

float calcularSoma(float vetor[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    float soma = calcularSoma(vetor, n);
    float media = soma / n;

    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}
