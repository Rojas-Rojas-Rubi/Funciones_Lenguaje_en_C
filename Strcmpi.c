#include <stdio.h>
#include <string.h>

int main(){

    char p1[20] = "HOLA";
    char p2[20] = "Pato";

    if(strcmpi(p1, p2) == 0){
        printf("Cadenas iguales.\n");
    } else {
        printf("Las cadenas son distintas.\n");
    }
    return 0;
}