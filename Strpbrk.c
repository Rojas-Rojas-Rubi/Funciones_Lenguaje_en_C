#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "programador";
    char buscar[] = "aeiou";

    char* ptr = strpbrk(str, buscar);
    if (ptr)
        printf("Primera vocal: %c\n", *ptr);
    else
        printf("No se encontró ningún carácter.\n");

    return 0;
}