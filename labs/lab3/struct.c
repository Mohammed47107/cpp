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

    for(int i=0; i<cantidadProductos; i++) {
        printf("producto: %d\n", i+1);
        productos[i].nombre = (char*) malloc(21 * sizeof(char)); // no necesita & porque nombre ya es un puntero
        printf("nombre: ");
        scanf("%s", productos[i].nombre);
        printf("precio: ");
        scanf("%f", &productos[i].precio);
        printf("cantidad: ");
        scanf("%d", &productos[i].cantidad);
    }
    double precioTotalGeneral=0;
    for(int i=0; i<cantidadProductos; i++){
        double totalPorProducto = productos[i].precio * productos[i].cantidad;
        printf("producto: %s\n", productos[i].nombre);
        printf("total del producto: %.4f\n", totalPorProducto);
        precioTotalGeneral = precioTotalGeneral + totalPorProducto;
    }

    for(int i=0; i<cantidadProductos; i++) {
        free(productos[i].nombre);
    }
    free(productos);

    return 0;
}