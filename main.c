#include <stdio.h>
#include "stats.h"

int main() {
    float x, mu, beta, b;

    printf("\nDigite o valor x para teste da funcao cauchy: ");
    scanf("%f", &x);
    printf("\nResultado: %.4f", cauchy(x));

    printf("\n\nDigite os valores de x, mu e beta para teste da funcao gumbel: ");
    scanf("%f %f %f", &x, &mu, &beta);
    printf("\nResultado: %.4f", gumbel(x, mu, beta));

    printf("\n\nDigite os valores de x, mu e b para teste da funcao laplace: ");
    scanf("%f %f %f", &x, &mu, &b);
    printf("\nResultado: %.4f\n", laplace(x, mu, b));

    return 0;
}
