#include <stdio.h>

int main(){

    int ano = 0;
    int nasc;

    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &ano);

    nasc = (2023 - ano);

    printf("Você tem %d anos.\n", nasc);

}