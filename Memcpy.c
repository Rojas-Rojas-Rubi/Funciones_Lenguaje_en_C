#include <stdio.h>   //Abrimos nuestra librerias principales
#include <string.h>  

int main(){
char src[] = "Hola"; //Original
char dest[10];
memcpy(dest, src, 5); 

printf("Cadena: %s\n", src);
printf("Copia: %s\n", dest);

return 0;

}