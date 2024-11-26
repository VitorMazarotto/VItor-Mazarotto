#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados
#include <string.h> // Biblioteca para manipulação de strings
#include <locale.h> // Biblioteca para configurar a localidade

// Definição de uma estrutura chamada Carro, que contém informações sobre um carro
typedef struct {
    char modelo[50]; // Modelo do carro (string com até 50 caracteres)
    int ano;         // Ano do carro (inteiro)
    double preco;    // Preço do carro (ponto flutuante de dupla precisão)
} Carro;

// Função para modificar o preço do carro
// Parâmetros: ponteiro para um Carro e o novo preço
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco; // Atualiza o campo 'preco' da estrutura Carro
}

// Função para imprimir os dados de um carro
// Parâmetros: ponteiro para um Carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);    // Imprime o modelo do carro
    printf("Ano: %d\n", c->ano);         // Imprime o ano do carro
    printf("Preço: R$ %.2lf\n", c->preco); // Imprime o preço do carro com duas casas decimais
}

// Função principal do programa
int main() {
    setlocale(LC_ALL, "portuguese"); // Configura o uso de localidade portuguesa

    Carro carro1; // Declaração de uma variável do tipo Carro

    // Inicialização dos campos da estrutura Carro
    strcpy(carro1.modelo, "XyZ");  // Define o modelo do carro
    carro1.ano = 2020;            // Define o ano do carro
    carro1.preco = 90000.00;      // Define o preço inicial do carro

    // Exibição dos dados do carro antes da modificação
    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1); // Passa o endereço da estrutura para a função imprimirCarro

    // Modificação do preço do carro usando a função modificarPreco
    modificarPreco(&carro1, 115000.00); // Atualiza o preço do carro para 115000.00

    // Exibição dos dados do carro após a modificação
    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1); // Exibe novamente os dados, já atualizados

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
