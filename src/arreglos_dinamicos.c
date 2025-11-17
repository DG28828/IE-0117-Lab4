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

int array_element_add(int *array, int size, int element) {
    if (array == NULL) {
	printf("Error: puntero del arreglo es NULL \n");
	return -1;
    }
    int newsize = size + 1;
    array = (int *)realloc(array, newsize*sizeof(int));
    if (array == NULL) {
	printf("Error: no se pudo realocar memoria para el array. \n");
	return -1;
    }
    array[newsize-1] = element;
    return 0; 
}

int array_element_delete(int *array, int size) {
    if (array == NULL) {
	printf("Error: puntero del arreglo es NULL \n");
	return -1;
    }
    int newsize = size - 1;
    array = (int *)realloc(array, newsize*sizeof(int));
    if (array == NULL) {
	printf("Error: no se pudo realocar memoria para el array. \n");
	return -1;
    }
    return 0; 
}

int array_element_get(int *array, int size, int indice) {
    if (array == NULL) {
	printf("Error: puntero del arreglo es NULL \n");
	return -1;
    }
    if (indice<0 || indice>(size-1)) {
	printf("Error: indice no válido dentro del rango del arreglo \n");
	return -1;
    }
    int * ptr_indice = array + indice;
    int valor = *ptr_indice;
    return valor;
}

//void array_print(int *array);
