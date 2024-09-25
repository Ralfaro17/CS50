#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

/* se define el nombre de la struct desde el typedef para
que se pueda usar un puntero con tipo de dato del nombre de la struct */
typedef struct frutas
{
    string nombre;
    float precio;
    struct frutas *sig; // para conectar nodos, dice el espacio en memoria de cada fruta, es la raíz e indica el siguiente
    // solo se pone struct al inicio, dentro de la estructura
}frutas;

int main()
{
    // desreferenciar (*) == tomar el puntero como variable normal
    frutas *compras = NULL;
    compras = malloc(sizeof(frutas));
    compras->nombre = "Manzana";
    compras->precio = 12;
    compras->sig = NULL; // es NULL porque no apunta a nada

    frutas *temp = malloc(sizeof(frutas));
    temp->nombre = "mango";
    temp->precio = 15;

    // Por cabeza = cada nodo nuevo se inserta al inicio -> 
    // Por cola = cada nodo nuevo se inserta al final -> 
    temp->sig = compras;
    compras = temp;


    /* el nodo del struct, actúa como una etiqueta, y los objetos
    dentro de si son productos, es la referencia de donde encontrarlo */

    printf("%s - %.2f\n", compras->nombre, compras->precio);

    free(compras);
    return 0;
}
