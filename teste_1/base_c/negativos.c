#include <stdio.h>

int main()
{

    int N, negativos;

    printf("Quantos numeros voce vai digitar? \n");
    scanf("%d", &N);

    int vetor[N];

    for (int i = 0; i < N; i++)
    {
        printf("Digite um Numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\nNUMEROS NEGATIVOS: \n");
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] < 0)
        {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}