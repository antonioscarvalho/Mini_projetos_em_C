#include <stdio.h>
#include <math.h>

int main(){

    int numero;
    int dobro, triplo, raiz;

    printf("Digite um número para:\nDescobrir seu dobro, triplo e raíz quadrada\n");
    scanf("%d", &numero);

    //variável = (potência explicada): pow(base, expoente);
    dobro = pow(numero, 2);

    triplo = pow(2, 3);

    //variável = (raíz explicada): sqrt(numero);
    raiz = sqrt(4);

    printf("O dobro do número é: %d\n", dobro);
    printf("O triplo do número é: %d\n", triplo);
    printf("A raíz quadrada do número é: %.d\n", raiz);
    
}