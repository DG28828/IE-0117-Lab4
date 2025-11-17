#ifndef ARREGLOS_DINAMICOS_H_   // Verifica si el preprocesador ya procesó el header file. (para no duplicar)
#define ARREGLOS_DINAMICOS_H_   // Define el header file y procesa.

#include <stddef.h>    //¿Necesito esto?
//#include <stdbool.h>   //¿Necesito esto?

/**
 * @file arreglos_dinamicos.h
 * @brief Arreglos dinamicos
 *
 * Implementa las siguientes operaciones sobre arreglos: 
 *     - Creacion de arreglo.
 *     - Agregar elemento al arreglo.
 *     - ELiminar elemento del arreglo.
 *     - Obtener elemento del arreglo (por índice).
 *     - Imprimir el arreglo.
 *
 */

/**
 *@brief Crea un array del tamaño indicado.
 *
 *@param size Tamaño del arreglo.
 *@return
 *    - Puntero válido del array si la creación tuvo éxito.
 *    - `NULL` si no hay memoria suficiente (OOM).
 */
int *array_create(int size);  //Pregunta int* array o array*

/**
 *@brief Agregar elemento al array (al final)
 *
 *@param array Puntero del array.
 *@param size Tamaño del arreglo
 *@param element Elemento a agregar (int)
 *
 *@retval 0 Operación exitosa.
 *@retval -1 Error: `array == NULL` o falta de memoria (OOM) al aumentar el tamaño del array
 */
int array_element_add(int *array, int size, int element);  //Pregunta int *array o array*
    
/**
 *@brief  Elimina elemento del array (el ultimo)
 *
 *@param array Puntero del array.
 *@param size Tamaño del arreglo
  *
 *@retval 0 Operación exitosa.
 *@retval -1 Error: `array == NULL`
 */
int array_element_delete(int *array, int size);  //Pregunta int *array o array*

/**
 *@brief  Obtiene elemento del array en el índice indicado
 *
 *@param array Puntero del array.
 *@param size Tamaño del arreglo
 *@param indice Índice del elemento a extraer (int)
 *
 *@return 
 *    - Elemento del array ubicado en la posición del índice
 *@retval -1 Error: `array == NULL`
 *@retval -2 Error: índice no válido o fuera del rango del array.
 */
int array_element_get(int *array, int size, int indice);  //Pregunta int *array o array*

/**
 *@brief 
 *
 *@param array Puntero del array
 *
 *@return
 *    - Imprime el array en el standard output
 *@retval -1 Error: `array == NULL`
 */
void array_print(int *array);  //Pregunta int *array o array*


#endif
