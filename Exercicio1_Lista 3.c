#include <stdio.h>

// Estrutura para armazenar os dados de pessoas
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

// Função para ler os dados de um vetor de pessoas
void lerDados(struct Pessoa pessoas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].altura);
    }
}

int main() {
    struct Pessoa pessoas[3];
    lerDados(pessoas, 3);

    printf("\nDados digitados:\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d: Nome: %s, Idade: %d, Altura: %.2f\n", i + 1, pessoas[i].nome, pessoas[i].idade, pessoas[i].altura);
    }

    return 0;
}
