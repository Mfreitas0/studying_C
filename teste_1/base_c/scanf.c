#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()
{

    int idade, idade2;
    char nome[50], nome2[50];

    printf("Digiti o valor da idade: ");
    scanf("%d", &idade);
    printf("Digiti o nome da pessoa: ");
    // scanf("%s", &nome); //%s aó funciona para texto contiguo (uma palavra ou linha)
    limpar_entrada();
    fgets(nome, 50, stdin); // comando usado para leitura de entrada de strings +d1 palavra
    // stdin_indentifica a entrada padrao
    printf("Digiti o valor da idade 2: ");
    scanf("%d", &idade2);
    printf("Digiti o nome da pessoa 2: ");
    limpar_entrada();
    fgets(nome2, 50, stdin); 

    
    printf("IDADE = %d\n", idade);
    printf("NOME = %s", nome);
    printf("IDADE2 = %d\n", idade2);
    printf("NOME2 = %s", nome2);

    return 0;
}