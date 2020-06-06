#include <stdio.h>

int main() {
    int array1[3];
    int array2[3];
    int pos;
    int pos2;
    int troca;
    int i;

    scanf("%d %d %d", &array2[0], &array2[1], &array2[2]);
 
    for (i = 0; i < 3; i++) {
        array1[i] = array2[i];
    }
 
    for (i = 0; i < 3; i++) {
        pos = i;
        for (pos2 = i + 1; pos2 < 3; pos2++) {
            if (array2[pos] > array2[pos2]) {
                pos = pos2;
            }
        }
        if (pos != i) {
            troca = array2[i];
            array2[i] = array2[pos];
            array2[pos] = troca;
        }
    }
 
    for (i = 0; i < 3; i++) {
        printf("%d\n", array2[i]);
    }
 
    printf("\n");
 
    for (i = 0; i < 3; i++) {
        printf("%d\n", array1[i]);
    }
    return 0;
}
