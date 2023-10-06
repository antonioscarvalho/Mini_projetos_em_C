#include <stdio.h>

int main() {
    int idade, ano;

    printf("Digite o ano de nascimento do atleta:\n");
    scanf("%d", &ano);

    idade = 2023 - ano;

    if (idade <= 9) {
        printf("A pessoa se enquadra na categoria mirim.");
    }
    else if (9 < idade <= 14) {
        printf("A pessoa se enquadra na categoria infantil.");
    }
    else if (14 < idade <= 19) {
        printf("A pessoa se enquadra na categoria junior.");
    }
    else if (19 < idade <= 20) {
        printf("A pessoa se enquadra na categoria sênior.");
    }
    else {
        printf("Não pode concorrer.");
    }
}