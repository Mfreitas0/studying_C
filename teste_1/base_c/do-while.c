#include <stdio.h>
#include <string.h>

// ultilizando estrutura simples de DO-WHILE em C.

int main () {

    double C,  F;
    char resp;

    do {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F =9.0 * C / 5.0 + 32.0;
        printf("Equivalente em Fahrebheit: %.1lf\n", F);
        printf("Deseja repetir (s/n)? ");
        fseek(stdin, 0, SEEK_END);
        scanf("%c", &resp);
    } while ( resp == 's');



    return 0;
}