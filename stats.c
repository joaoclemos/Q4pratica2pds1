#include <math.h>
#include "stats.h"

float cauchy(float x) {
    return 1.0 / (M_PI * (1.0 + x * x));
}

float gumbel(float x, float mu, float beta) {
    float z = (x - mu) / beta;
    return (1.0 / beta) * exp(-(z + exp(-z)));
}

float laplace(float x, float mu, float b) {
    return (1.0 / (2.0 * b)) * exp(-fabs(x - mu) / b);
}
