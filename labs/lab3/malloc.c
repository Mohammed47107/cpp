#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int numeros;
    printf("cantidad de numeros que desea agregar: ");
    scanf("%d",&numeros);
    printf("\n");
 
    int suma=0;
    int* reserva = (int*) malloc(numeros * sizeof(int));// reserva memoria para x cantidad de numeros enteros (variable 'numeros')
 
    int n_pares=0;
    int n_impares=0;
    for (int i=0; i<numeros; i++){
        printf("numero a ingresar a la lista: ");
        scanf("%d",&reserva[i]);
        suma=suma+reserva[i];
 
        if(reserva[i]%2 == 0){
            n_pares++;
        }else{
            n_impares++;
        }
    }
 
    printf("valor total sumado de todos los enteros ingresados: %d\n", suma);
    printf("total de numeros pares: %d\n", n_pares);
    printf("total de numeros impares: %d\n", n_impares);
    free(reserva);
    return 0;
}