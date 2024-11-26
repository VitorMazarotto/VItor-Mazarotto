#include <stdio.h>  // Biblioteca padr�o para entrada e sa�da de dados
#include <string.h> // Biblioteca para manipula��o de strings
#include <locale.h> // Biblioteca para configurar a localidade

// Defini��o de uma estrutura chamada Carro, que cont�m informa��es sobre um carro
typedef struct {
    char modelo[50]; // Modelo do carro (string com at� 50 caracteres)
    int ano;         // Ano do carro (inteiro)
    double preco;    // Pre�o do carro (ponto flutuante de dupla precis�o)
} Carro;

// Fun��o para modificar o pre�o do carro
// Par�metros: ponteiro para um Carro e o novo pre�o
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco; // Atualiza o campo 'preco' da estrutura Carro
}

// Fun��o para imprimir os dados de um carro
// Par�metros: ponteiro para um Carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);    // Imprime o modelo do carro
    printf("Ano: %d\n", c->ano);         // Imprime o ano do carro
    printf("Pre�o: R$ %.2lf\n", c->preco); // Imprime o pre�o do carro com duas casas decimais
}

// Fun��o principal do programa
int main() {
    setlocale(LC_ALL, "portuguese"); // Configura o uso de localidade portuguesa

    Carro carro1; // Declara��o de uma vari�vel do tipo Carro

    // Inicializa��o dos campos da estrutura Carro
    strcpy(carro1.modelo, "XyZ");  // Define o modelo do carro
    carro1.ano = 2020;            // Define o ano do carro
    carro1.preco = 90000.00;      // Define o pre�o inicial do carro

    // Exibi��o dos dados do carro antes da modifica��o
    printf("Dados antes da modifica��o:\n");
    imprimirCarro(&carro1); // Passa o endere�o da estrutura para a fun��o imprimirCarro

    // Modifica��o do pre�o do carro usando a fun��o modificarPreco
    modificarPreco(&carro1, 115000.00); // Atualiza o pre�o do carro para 115000.00

    // Exibi��o dos dados do carro ap�s a modifica��o
    printf("\nDados ap�s a modifica��o do pre�o:\n");
    imprimirCarro(&carro1); // Exibe novamente os dados, j� atualizados

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
