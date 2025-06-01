#include <stdio.h>
#include <string.h>

int main() {

    char texto[] = "Hola mundo";
    char* ptr = strrchr(texto, 'o');

    if (ptr)
        printf("Última 'o' en posición: %ld\n", ptr - texto); 
    else
        printf("No encontrada.\n");

    return 0;
}
