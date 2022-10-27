#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()
{

    char NOME1[50], NOME2[50];
    int IDADE1, IDADE2;
    double IDADEMEDIA;

    printf("Dados da Primeira pessoa:\n");
    printf("Nome: ");
    ler_texto(NOME1, 50);

    printf("IDADE: ");
    scanf("%d", &IDADE1);

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    // limpar_entrada();
    fseek(stdin, 0, SEEK_END);
    ler_texto(NOME2, 50);

    printf("Idade: ");
    scanf("%d", &IDADE2);

    IDADEMEDIA = (double)(IDADE1 + IDADE2) / 2; // OU IDADEMEDIA = (IDADE1 + IDADE2) / 2.0;

    printf("A idade IDADEMEDIA de %s e %s eh de %.1lf anos", NOME1, NOME2, IDADEMEDIA);

    return 0;
}