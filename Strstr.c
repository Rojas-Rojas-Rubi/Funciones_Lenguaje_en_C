#include <stdio.h>
#include <string.h>

int main() {
    
    char texto[] = "Hola mundo";
    char* ptr = strstr(texto, "mun");

    if (ptr)
        printf("Subcadena encontrada: %s\n", ptr);
    else
        printf("No se encontró la subcadena.\n");

    return 0;
}
