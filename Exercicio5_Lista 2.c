
#include <stdio.h>

int maior(int a, int b);

int main() {
    int num1, num2;

    printf("Digite dois n�meros inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("O maior n�mero �: %d\n", maior(num1, num2));
    return 0;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}
