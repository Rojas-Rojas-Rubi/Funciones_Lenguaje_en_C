#include <stdio.h>
#include <string.h>

int main(){
    
    char dest[20] = "Hola ";
    strcat(dest, "Mundo");  //une la cadena a otra, es decir junta el "Hola" con "Mundo"

    printf("Resultado: %s", dest);  // Aqui se imprimira el resultado de jumtar ambas cadenas

    return 0;

}