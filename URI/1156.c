#include <stdio.h>

int main() {
    float numerador;
    float denominador;
    float S;

    S = 0.0;
    numerador = 1.0;
    denominador = 1.0;
 
    while (numerador <= 39.0) {
        S += numerador/denominador;
        numerador *= 2.0;
        denominador *= 2.0;
    }

    printf("%.2f\n", S);
    return 0;
}
