#include <stdio.h>
#include <string.h>

int main() {
    
    char a[] = "Pato";
    char b[] = "Chayote";

    size_t pos = strcspn(a, b);
    printf("Primera vocal en '%s' esta en posicion: %zu\n", a, pos); 
    return 0;
}
