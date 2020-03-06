#include "bucket_sort.h"
// caso voces notem algo de errado no resultado obtido
// compilem os arquivos desta forma
// gcc bucket_sort.h bucket_sort.c bucket_main.c -lm -Wall -o main
// o importante e haver o "-lm" para garantirmos que a biblioteca math.h estara carregada.
// pode ser compilado assim tbm
// gcc bucket_sort.h bucket_sort.c bucket_main.c -lm -o main

// a principio este exemplo esta rodando com 60000 elementos.

int main() {
    long arr[MAX], i;
    for (i = 0; i < MAX; i++) {
        arr[i] = rand() % 9; // criei um array preenchido com numeros de 0 a 9, mas acredito que vai funcionar para numeros maiores tbm
    }
    bucket_sort(arr, MAX, 7);
    for (i = 0; i < MAX; i++) {
        printf("%ld\n", arr[i]);
    }   
    return 0;
}