#include <stdio.h>

// Fun��o para retornar o menor n�mero
int menorNumero(int num1, int num2, int num3) {
    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    return menor;
}

int main() {
    int num1, num2, num3;

    // Solicitando os tr�s n�meros ao usu�rio
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    // Chamando a fun��o para encontrar o menor n�mero
    int menor = menorNumero(num1, num2, num3);

    // Exibindo o resultado
    printf("O menor n�mero �: %d\n", menor);

    return 0;
}
