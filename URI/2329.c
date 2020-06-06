#include <stdio.h>

int qnt_sandubas(int sandubas[], int sands, int meio){
    int R = 0;
    for (int i = 0; i < sands; i++) {
        R += sandubas[i] / meio;
    }
    return R;
}

int main() {
    int pessoas, sandubas;
    int maior_sand = 0;
    int arr[10001];

    scanf("%d", &pessoas);
    scanf("%d", &sandubas);

    for (int i = 0; i < sandubas; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > maior_sand) {
            maior_sand = arr[i];
        }
    }

    int i = 1, f = maior_sand, m, r = 1;
    while (i <= f) {
        m = (i+f)/2;
        int va = qnt_sandubas(arr, sandubas, m);
        if (va >= pessoas) {
            r = m;
            i = m + 1;
        }
        else if (va < pessoas) {
            f = m - 1;
        }
    }
    printf("%d\n", r);
}