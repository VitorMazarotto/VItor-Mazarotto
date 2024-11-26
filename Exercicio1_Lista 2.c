//Vitor Hugo Ferreira Mazarotto
// Nome do Aluno: [Seu Nome]
#include <stdio.h>

// Protótipos
int primo(int num);
int somaPrimos(int n);

int main() {
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("A soma dos %d primeiros números primos é: %d\n", n, somaPrimos(n));
    return 0;
}

// Verifica se um número é primo
int primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Soma os N primeiros números primos
int somaPrimos(int n) {
    int soma = 0, contador = 0, atual = 2;

    while (contador < n) {
        if (primo(atual)) {
            soma += atual;
            contador++;
        }
        atual++;
    }

    return soma;
}
