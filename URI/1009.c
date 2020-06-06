#include <stdio.h>

int main() {
    double a;
    double b;
    char nome[100];

    scanf("%s", nome);
    scanf("%lf", &a);
    scanf("%lf", &b);

    double total = a + (b * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
