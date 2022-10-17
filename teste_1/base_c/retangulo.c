#include <stdio.h>
#include <math.h>

int main()
{

    double BASE, ALTURA, AREA, PERIMETRO, DIAGONAL;

    printf("Digite a Base do retangulo: ");
    scanf("%lf", &BASE);

    printf("Digite a Altura do retagulo: ");
    scanf("%lf", &ALTURA);

    AREA = BASE * ALTURA;
    PERIMETRO = 2 * (BASE + ALTURA);
    // DIAGONAL = pow(ALTURA, 2) + pow(BASE, 2);
    DIAGONAL = sqrt(pow(BASE, 2) + pow(ALTURA, 2));

    printf("Area: %.2lf\n", AREA);
    printf("Perimetro: %.2lf\n", PERIMETRO);
    printf("Diagonal: %.2lf\n", DIAGONAL);

    return 0;
}