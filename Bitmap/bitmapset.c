#include "bitmapset.h"

void init_bitmapset(bitmapset *bm) {
    *bm &= (bitmapset) 0;
}

void set(bitmapset *bm, uint8_t v) {
    if ((0 < v) && (v < 32)) *bm |= (1<<v); 
}

uint8_t get(bitmapset *bm, uint8_t v) {
    if (((0 < v) && (v < 32)) && (*bm & (1<<v))) return (uint8_t) (*bm & (1<<v)); 
    return (uint8_t) 255;
}

uint8_t size(bitmapset *bm) {
    uint8_t size = 0;
    uint8_t i;
    for (i = 0; i < 32; i++) {
        if  (*bm & (1<<i)) size++;
    }
    return size;
}

void unset(bitmapset *bm, uint8_t v) {
    if ((0 < v) && (v < 32)) *bm &= (0<<v);
}