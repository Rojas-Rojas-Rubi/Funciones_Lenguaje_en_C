#include <stdio.h>
#include <string.h>

int main(){

    char dest[10];
    
    strcpy(dest, "Hola");

    printf("Copia: %s", dest);

    return 0;
}