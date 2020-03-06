#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int inv;

void merge(int *arr, int i, int f) {
    int m = (i+f)/2;
    int it1 = i, it2 = m+1;
    int c = 0;
    int *arraux = (int*)malloc((f-i+1)*sizeof(int));
    int itaux = 0;
    
    while (it1 <= m && it2 <= f) { // FOR
        if (arr[it1] <= arr[it2]) { // array da direita i...m
            arraux[itaux++] = arr[it1++];
            inv += c;
        }
        else { // array da esquerda m+1...f
            arraux[itaux++] = arr[it2++];
            c++;
        }
    }
    
    while (it1 <= m) { // direta
        arraux[itaux++] = arr[it1++];
        inv += c;
    }

    while (it2 <= f) { // esquerda
        arraux[itaux++] = arr[it2++];
    }

    int j;
    for (j = i; j <= f; j++) {
        arr[j] = arraux[j-i];
    }
}

void mergeSort(int* arr, int i, int f) {
    if (i < f) {
        int m = (i+f)/2;
        mergeSort(arr, i, m);
        mergeSort(arr, m+1, f);
        merge(arr, i, f);
    }
}

int main() {
    int n;
    while (scanf("%d", &n), n != 0) {
        inv = 0;
        int *arr = (int*)malloc(n*sizeof(int));
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        mergeSort(arr, 0, n-1);
        printf("%d\n", inv);
    }
    return 0;
}