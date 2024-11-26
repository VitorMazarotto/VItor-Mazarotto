#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, float nota4) {
    return (nota1 + nota2 + nota3 + nota4) / 4.0;
}

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite as 4 notas do aluno:\n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = calcularMedia(nota1, nota2, nota3, nota4);
    printf("Média: %.2f\n", media);

    if (media >= 7.0)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
