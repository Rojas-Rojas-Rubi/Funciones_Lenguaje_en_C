#include <stdio.h>
#include <string.h>

int main() {

    char cadena[] = "Hola";

    strset(cadena, '*');  

    printf("Resultado: %s\n", cadena);
    
    return 0;
}
