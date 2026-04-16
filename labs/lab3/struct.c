#include <stdio.h>
#include <stdlib.h>

typedef struct Producto {
    char* nombre;
    float precio;
    int cantidad;
} Producto;

int main(){
    int cantidadProductos = 3;
    Producto* productos = (Producto*) malloc(cantidadProductos * sizeof(Producto));

    for (int i = 0; i < cantidadProductos; i++) {
        printf("producto: %d\n", i+1);
        productos[i].nombre = (char*) malloc(21 * sizeof(char)); // no necesita & porque nombre ya es un puntero
        printf("nombre: ");
        scanf("%s", productos[i].nombre);
        printf("precio: ");
        scanf("%f", &productos[i].precio);
        printf("cantidad: ");
        scanf("%d", &productos[i].cantidad);
    }

    for (int i = 0; i < cantidadProductos; i++) {
        free(productos[i].nombre); // Liberamos cada nombre reservado individualmente
    }
    free(productos);

    return 0;
}