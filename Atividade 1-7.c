//Segue abaixo um exemplo de código em Linguagem C que lê três números inteiros e positivos e calcula a expressão D = R + S/2, onde R = (A+B)^2 e S = (B+C)^2:

#include <stdio.h>

int main() {
    int A, B, C;
    double R, S, D;

    printf("Digite três números inteiros e positivos:\n");
    scanf("%d%d%d", &A, &B, &C);

    R = (A + B) * (A + B);
    S = (B + C) * (B + C);
    D = R + S / 2.0;

    printf("D = %.2f\n", D);

    return 0;
}

