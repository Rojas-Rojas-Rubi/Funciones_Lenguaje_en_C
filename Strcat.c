#include <stdio.h>
#include <string.h>

int main(){
    char dest[20] = "Hola ";
    strcat(dest, "Mundo");  

    printf("Resultado: %s", dest);

    return 0;

}