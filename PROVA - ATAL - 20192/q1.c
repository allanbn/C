#include <stdio.h>
#include <string.h>

int main() {
    int n, t, maior = -1;
    while (scanf("%d %d", &n, &t) > 0, n && t) {;
        if (n > maior) maior = n;
        int arr[t+1];
        int i;
        for (i = 0; i < t; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] > maior) maior = arr[i];
        }
        int arr1[maior+1];
        memset(arr1, 0, sizeof(arr1));
        arr1[0] = 1;
        int j;
        for (i = 0; i < t; i++) {
            for (j = maior; j >= 0; j--) {
                if (arr1[j - arr[i]] == 1) arr1[j] = 1;
            }
        }
        int sum = 0;
        for (i = maior; i >= 0; i--) {
            if (arr1[i] && ((sum + i) <= n)) {
                sum += i;
                if (sum == n) break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}