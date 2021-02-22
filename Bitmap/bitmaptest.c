#include "bitmapset.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    bitmapset *bm = NULL;
    bm = (bitmapset*)malloc(sizeof(bitmapset));
    init_bitmapset(bm);
    /* SET */
    set(bm, 2);
    printf("Added 2\n");
    printf("Has 2?: %d\n", get(bm, 2));
    printf("Has 5?: %d\n", get(bm, 5));
    printf("Size: %d\n", size(bm));
    set(bm, 5);
    printf("Added 5\n");
    set(bm, 7);
    printf("Added 7\n");
    set(bm, 11);
    printf("Added 11\n");
    printf("Size: %d\n", size(bm));
    printf("Unsetting bitmap\n");
    unset(bm, 2);
    unset(bm, 5);
    unset(bm, 7);
    unset(bm, 11);
    printf("Size: %d\n", size(bm));
    return 0;
}