/*+------------------------------+
Nombre: Ernesto Osvaldo Zavala Flores
Codigo: 222261452
Esto ordena arreglos con el metodo burbuja
---------------------------------------*/
#include <stdio.h>

int main() {
    int arreglo[11] = {67, 22, 11, 33, 55, 77, 876, 543234, 1, 111, -1};
    int i, j, orden, n;
    n = sizeof (arreglo)/sizeof(arreglo[0]);
    
    printf("Valores originales:\n");
    for (i = 0; i < n; i++) {  
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                orden = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = orden;
            }
        }
    }

    printf("Valores ordenados:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    printf("Este es el fin del programa.\n");
    getch();
    return 0;
}
