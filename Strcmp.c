#include <stdio.h>
#include <string.h>

int main(){

    char p1[20] = "Hola";
    char p2[15] = "hOLA";

    if (strcmp(p1, p2) == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;

}