#include <stdio.h>

int main() {
    int conta, senha;
    int tentativas = 0;

    do {
        printf("Digite o numero da conta: ");
        scanf("%d", &conta);

        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (conta == 12345 && senha == 123) {
            printf("Acesso liberado!\n");
            return 0;
        } else {
            tentativas++;
            printf("Credenciais incorretas.\n");

            if (tentativas == 3) {
                printf("Acesso bloqueado!\n");
            }
        }

    } while (tentativas < 3);

    return 0;
}
