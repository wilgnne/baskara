#include "stdio.h"
#include "math.h"

// Faça um programa que leia um número real x e calcule o valor de f (x) = √x + (x/2) + xx.
// (pesquise sobre as funções sqrt e pow ).

int main()
{
    int x;
    float f;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    f = sqrt(x) + (x / 2) + pow(x, 2);

    printf("O valor de f(x) = %.2f\n", f);

    return 0;
}
