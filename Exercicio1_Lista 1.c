#include <stdio.h>
int main() {
    int point[3][5], n1 = 0, n2 = 0, n3 = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &point[i][j]); // Corrigido para &point[i][j]
            if (i == 0) {
                n1 += point[i][j];
            } else if (i == 1) {
                n2 += point[i][j];
            } else if (i == 2) {
                n3 += point[i][j];
            }
        }
    }

    printf("Pontuação dos jogadores:\n");
    printf("Jogador 1: %d \nJogador 2: %d \nJogador 3: %d\n", n1, n2, n3); // Corrigido o printf

    if (n1 > n2 && n1 > n3) {
        printf("\nO vencedor é o Jogador 1\n");
    } else if (n2 > n1 && n2 > n3) {
        printf("\nO vencedor é o Jogador 2\n");
    } else {
        printf("\nO vencedor é o Jogador 3\n");
    }

    return 0; // Corrigido ponto e vírgula
}
