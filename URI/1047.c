#include <stdio.h>

int main() {
    int a, c, b, d, h, m;
 
    scanf("%d %d %d %d", &a, &c, &b, &d);
 
    h = b - a;
    m = d - c;

    if (b == a && c == d) {
        h = 24;
        m = 0;
    }
    if (h <= 0) {
        h += 24;
        if (m < 0) {
            h--;
            m += 60;
        }
    }
    else if (h > 0) {
        if (m < 0) {
            h--;
            m += 60;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    return 0;
}
