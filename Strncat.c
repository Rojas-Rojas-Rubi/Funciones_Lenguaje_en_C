#include <stdio.h>
#include <string.h>

int main() {

    char a[20] = "Hola "; 
    char b[] = "Mundo123"; 

    strncat(a, b, 5); 

    printf("Resultado: %s\n", a);
    
    return 0;
}
