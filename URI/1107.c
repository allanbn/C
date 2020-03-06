#include <stdio.h>

int main() {
    int A, C; // Altura, Comprimento
    while(scanf("%d %d", &A, &C) && ((A > 0) && (C > 0))) {
        int i, ans;
        int bloco[C];
        ans = 0;
        for (i = 0; i < C; i++) {
            scanf("%d", &bloco[i]); // considerando que a entrada já é o tamanho do final da altura do bloco
            if (i) { // se a posição do array for maior que 0 faça
                if (bloco[i-1] > bloco[i]) { // se a posicao anterior do bloco for maior que a atual 
                    ans += bloco[i-1] - bloco[i]; // a qntd de vezes que o lazer foi ligado é a diferença entre os blocos
                }
            }
            else {
                ans += A - bloco[i]; // a quantidade de vezes que o lazer foi ligado é a diferença entre a altura e o bloco cortado
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

