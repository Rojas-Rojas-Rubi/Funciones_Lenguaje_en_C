#include <stdio.h>            
#include <string.h>  

int main(){
    
    char src[] = "Hola";         
    char dest[10];              
    memcpy(dest, src, 5);       
    printf("Cadena: %s\n", src);
    printf("Copia: %s\n", dest); 

    return 0;

}