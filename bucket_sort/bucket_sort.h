#define MAX 60000 // se quiserem testarem com mais elementos so mudar o numero aqui
#include <stdio.h>
#include <string.h>
#include <math.h>

// Struct balde
typedef struct {
    long topo; // contador de elementos dentro do balde
    long dados[MAX]; // array que guarda os elementos do balde
}balde; 

int bubble_sort(long *a, int n);
int bucket_sort(long *a, int n, int c);
