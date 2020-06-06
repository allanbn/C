#include <stdio.h>
 
int main() {
    int tempo;
    int velocidade;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    double s = velocidade * tempo;
    double gasto = s / 12;

    printf("%.3lf\n", gasto);
    return 0;
}
