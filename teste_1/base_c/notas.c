#include <stdio.h>
#include <string.h>
/*
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}*/

int main() {

    double nota1, nota2, notaFinal;

    printf("Digite primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    fseek(stdin, 0, SEEK_END);
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    if ( notaFinal < 60)
    {
    printf("NOTA FINAL = %.2lf \n REPROVADO(A)", notaFinal);
    }
    else{
        printf("NOTA FINAL = %.2lf", notaFinal);
    }


    return 0;
}