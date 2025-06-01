#include <stdio.h>
#include <string.h>

int main() {

    char a[] = "computadora";
    char b[] = "comida";

    if (strncmp(a, b, 3) == 0) { 
        printf("Las primeras 3 letras son iguales\n");
    }else{
        printf("Son diferentes\n"); 
    }
    return 0;
}
