#include <stdio.h>

void exibirImparesExcetoSete(int limite) {
    for (int i = 1; i <= limite; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    exibirImparesExcetoSete(numero);
    return 0;
}
