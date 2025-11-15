#include "arreglos_dinamicos.h"
#include <stdio.h>
#include <stdlib.h>

int *array_create(int size) {
    int *array = (int *)malloc(size*sizeof(int));
    if (array == NULL) {        // ¿Lo mismo si se pone if (!array)?
	printf("Error: No se pudo asignar memoria para el array. \n");
	return NULL;
    }
    return array;
}
