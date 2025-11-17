#include <stdio.h>
#include <stdlib.h>
#include "arreglos_dinamicos.h"

int main() {
    printf("Arreglos dinámicos \n");

    // Crear arreglo
    int size = 5;
    int * array = array_create(size);
    for (int i=0; i<size; i++) {
	array[i] = 2*i;
    }
    
    // Extraer elemento de indice indicado
    int elemento0 = array_element_get(array, size, 0);
    printf("Elemento en i=%d: %d\n", 0,  elemento0);

    // Agregar elementos
    array_element_add(array, size, 18);
    size ++;

    array_element_add(array, size, 24);
    size ++;

    // Extraer elemento de indice indicado
    int elemento6 = array_element_get(array, size, 6);
    printf("Elemento en i=%d: %d\n", 6,  elemento6);

    


    

    

    // Liberar memoria
    free(array);
    array = NULL;
    
    return 0;
}
