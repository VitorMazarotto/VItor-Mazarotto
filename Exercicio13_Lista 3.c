#include <stdio.h>

float calcularMedia(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    int a, b, c;
    printf("Digite tr�s n�meros inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    float media = calcularMedia(a, b, c);
    printf("A m�dia �: %.2f\n", media);

    return 0;
}
