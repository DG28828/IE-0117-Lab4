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
    int indice = 0;
    int elemento = array_element_get(array, size, indice);
    printf("Elemento en i=%d: %d\n", indice,  elemento);

    // Liberara memoria
    free(array);
    array = NULL;
    
    return 0;
}
