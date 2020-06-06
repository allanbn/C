#include <stdio.h>
#include <string.h>

int main() {
 
 char a[100], b[100], c[100];
 char output[100];
 scanf("%s %s %s", a, b, c);
 
    if (strcmp(a, "vertebrado") == 0) {
        if (strcmp(b, "ave") == 0) {
            if (strcmp(c, "carnivoro") == 0) {
                strcpy(output, "aguia\n");
            }
            else {
                strcpy(output, "pomba\n");
            }
        }
        else {
            if (strcmp(c, "onivoro") == 0) {
                strcpy(output, "homem\n");
            }
            else {
                strcpy(output, "vaca\n");
            }
        }
    }
    else {
        if (strcmp(b, "inseto") == 0) {
            if (strcmp(c, "hematofago") == 0) {
                strcpy(output, "pulga\n");
            }
            else {
                strcpy(output, "lagarta\n");
            }
        }
        else {
            if (strcmp(c, "hematofago") == 0) {
                strcpy(output, "sanguessuga\n");
            }
            else {
                strcpy(output, "minhoca\n");
            }
        }
    }
    printf("%s", output);
    return 0;
}
