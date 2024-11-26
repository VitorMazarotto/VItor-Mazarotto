#include <stdio.h>

void exibirInverso(int v[], int n) {
    printf("Vetor na ordem inversa:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];

    // Entrada de valores
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Exibir na ordem inversa
    exibirInverso(vetor, 10);

    return 0;
}
