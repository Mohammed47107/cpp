#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros;
    printf("cantidad de numeros que desea agregar: ");
    scanf("%d",&numeros);
    printf("\n");

    int suma=0;
    int* reserva = (int*) malloc(numeros * sizeof(int));// reserva memoria para x cantidad de numeros enteros (variable 'numeros')
    for (int i=0; i<numeros; i++){
        printf("numero a ingresar a la lista: ");
        scanf("%d",&reserva[i]);
        suma=suma+reserva[i];
    }
    
    printf("\nSuma total de todos los enteros ingresados: %d\n", suma);

    return 0;
}