#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a:b;
}

int compare(int a, int b, int c) {
    return max(max(a, b), c);
}

int somaMeio(int const* arr, int i, int f) {
    int m = (i+f)/2;
    int s1 = 0;
    int s2 = 0;
    int k;
    int somaaux1 = 0;
    int somaaux2 = 0;
    for (k = m; k >= i; k--) {
        somaaux1 += arr[k];
        if (somaaux1 > s1) s1 = somaaux1;
    }
    for (k = m + 1; k <= f; k++) {
        somaaux2 += arr[k];
        if (somaaux2 > s2 ) s2 = somaaux2;
    }
    return (s1 + s2);
}

int mergeFunc(int* arr, int i, int f) {
    if (i == f) {
        return arr[i];
    }
    int m = (i+f)/2;
    int som1 = mergeFunc(arr, i, m);
    int som2 = mergeFunc(arr, m+1, f);
    int sm = somaMeio(arr, i, f);
    return compare(som1, som2, sm);
}

int main() {
    int arr[10001];
    int i, in;
    while (scanf("%d", &in), in != 0) {
        for (i = 0; i < in; i++) {
            scanf("%d", &arr[i]);
        }
        int res = mergeFunc(arr, 0, in-1);
        if (res > 0) printf("The maximum winning streak is %d.\n", res);
        else printf("Losing streak.\n");
    }
    return 0;
}
