
#include <stdio.h>

int soma(int a, int b);

int main() {
    int num1, num2;

    printf("Digite dois n�meros inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("A soma dos n�meros �: %d\n", soma(num1, num2));
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
