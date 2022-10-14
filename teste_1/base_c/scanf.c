#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{

    int idade, idade2;
    char nome[50], nome2[50];
    char sexo;

    printf("Digiti o nome da pessoa: ");
    ler_texto(nome, 50);
    // scanf("%s", &nome); //%s aó funciona para texto contiguo (uma palavra ou linha)
    // fgets(nome, 50, stdin); // comando usado para leitura de entrada de strings +d1 palavra
    // stdin_indentifica a entrada padrao
    printf("Digiti o valor da idade: ");
    scanf("%d", &idade);

    printf("Digiti o nome da pessoa 2: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    // fgets(nome2, 50, stdin);

    printf("Digiti o valor da idade 2: ");
    scanf("%d", &idade2);


    printf("Digite um sexo (F/M): ");
    limpar_entrada();
    scanf("%c", &sexo);

    printf("IDADE = %d\n", idade);
    printf("NOME = %s", nome);
    printf("IDADE2 = %d\n", idade2);
    printf("NOME2 = %s \n", nome2);
    printf("Sexo: %c\n", sexo);

    return 0;
}