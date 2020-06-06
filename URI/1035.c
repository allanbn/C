#include <stdio.h>

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int somacd = c + d;
    int somaab = a + b;
 
    if ((a % 2) == 0 && (c > 0) && (d > 0) && (b > c) && (d > a) && (somacd > somaab)) {
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
