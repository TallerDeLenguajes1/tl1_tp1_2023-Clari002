#include <stdio.h>

int main()
{
    int *punt, num=2;
    punt = &num;
    printf("Hola mundo");
    printf("\n:El contenido del puntero: %d ", *punt);
    printf("\n:La direccion de memoria almacenada por el puntero: %p ", punt);
    printf("\n:La dirección de memoria de la variable: %p ", &num);
    printf("\n:La dirección de memoria del puntero: %p", &punt);
    printf("\n:El tamaño de memoria utilizado por esa variable: %d", sizeof(num));
    return 0;
}