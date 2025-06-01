#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "123abc";
    
    size_t n = strspn(str, "1234567890");
    printf("Longitud numérica inicial: %zu\n", n); 
    return 0;
}
