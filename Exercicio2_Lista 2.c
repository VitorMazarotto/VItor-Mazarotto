#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;

    printf("Digite o valor de n para o n-�simo termo de Fibonacci: ");
    scanf("%d", &n);

    printf("O %d� termo da s�rie de Fibonacci �: %d\n", n, fibonacci(n));
    return 0;
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
