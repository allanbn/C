#include <stdio.h>

int main() {
    int segundos;

    scanf("%d", &segundos);
    
    int horas = segundos / 3600;
    int minutos = (segundos - horas * 3600) / 60;
    int segs = segundos - (horas * 3600 + minutos * 60);
    
    printf("%d:%d:%d\n", horas, minutos,segs);
    return 0;
}
