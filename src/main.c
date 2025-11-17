#include <stdio.h>
#include <stdlib.h>
#include "arreglos_dinamicos.h"

int main() {
    printf("\n #####  Arreglos dinámicos #### \n \n");

    // Crear arreglo
    printf("Se crea un arreglo son 5 elementos \n");
    int size = 5;
    int * array = array_create(size);
    for (int i=0; i<size; i++) {
	array[i] = 2*i;
    }

    // Imprimir
    printf("Arreglo: ");
    array_print(array, size);
    
    // Extraer elemento de indice indicado
    int elemento0 = array_element_get(array, size, 0);
    printf("\nElemento en i=%d: %d\n", 0,  elemento0);

    // Agregar elementos
    printf("\nSe agregan elementos 18 y 24: \n");
    array_element_add(&array, size, 18);
    size ++;

    array_element_add(&array, size, 24);
    size ++;

    // Imprimir
    printf("Arreglo: ");
    array_print(array, size);

    // Extraer elemento de indice indicado
    int elemento6 = array_element_get(array, size, 6);
    printf("\nElemento en i=%d: %d\n", 6,  elemento6);

    // ELiminar elemento
    printf("\nSe elimina el último elemento\n");
    array_element_delete(&array, size);
    size --;

    // Imprimir
    printf("Arreglo: ");
    array_print(array, size);

    // Liberar memoria
    free(array);
    array = NULL;
    
    return 0;
}
