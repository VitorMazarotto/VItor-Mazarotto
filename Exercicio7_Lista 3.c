#include <stdio.h>

void encontrarMaior(float vetor[], int tamanho) {
    float maior = vetor[0];
    int posicao = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Maior valor: %.2f na posição %d\n", maior, posicao);
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

    encontrarMaior(vetor, n);
    return 0;
}
