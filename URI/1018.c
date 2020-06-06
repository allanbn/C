#include <stdio.h>

int main() {
    int cedulas;
    int total;

    int cem = 0;
    int cinquenta = 0;
    int vinte = 0;
    int cinco = 0;
    int um = 0;
    int dois = 0;
    int dez = 0;
 
    scanf("%d", &cedulas);
    
    total = cedulas;
 
    if ((cedulas / 100) >= 1) {
        cem = cedulas / 100;
        cedulas -= cem * 100;
    }
    if ((cedulas / 50) >= 1) {
        cinquenta = cedulas / 50;
        cedulas -= cinquenta * 50;
    }
    if ((cedulas / 20) >= 1) {
        vinte = cedulas / 20;
        cedulas -= vinte * 20;
    }
    if ((cedulas / 10) >= 1) {
        dez = cedulas / 10;
        cedulas -= dez * 10;
    }
    if ((cedulas / 5) >= 1) {
        cinco = cedulas / 5;
        cedulas -= cinco * 5;
    }
    if ((cedulas / 2) >= 1) {
        dois = cedulas / 2;
        cedulas -= dois * 2;
    }
    if ((cedulas / 1) >= 1) {
        um = cedulas / 1;
        cedulas -= um * 1;
    }
    
    printf("%d\n", total);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    
    return 0;
}
