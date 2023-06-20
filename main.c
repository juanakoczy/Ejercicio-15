#include "stdio.h"
#include "cmake-build-debug/concatenar.h"


int main() {
     Lista * lista1 = newLista();
     Lista * lista2 = newLista();

    cargar (lista1, newNodo(1));
    cargar (lista1, newNodo(3));
    cargar (lista1, newNodo(5));
    cargar (lista1, newNodo(7));
    cargar (lista1, newNodo(9));
    cargar (lista2, newNodo(2));
    cargar (lista2, newNodo(4));
    cargar (lista2,newNodo(6));

    printf ("Lista 1:\n");
    imprimir(lista1);
    printf ("\nLista 2:\n");
    imprimir (lista2);

    printf ("\nLista concatenada:\n");
    concatenar(lista1,lista2);

    imprimir (lista1);

    return 0;
}


