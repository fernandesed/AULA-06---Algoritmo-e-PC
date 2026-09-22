#include <stdio.h>

int main()

{
    float nota, soma = 0, media, maior = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota do %dº estudante: ", i);
        scanf("%f", &nota);

        soma += nota;

        if (nota > maior) {
            maior = nota;
        }
    }

    media = soma / 5;

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);

    return 0;
}
