/*----------------------------------------------

Nombre: Ernesto Osvaldo Zavala Flores
Codigo:222261452
Este programa es una prueba de arreglos

---------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>   
#include <time.h>     

int main() {
    float arreglo[10], valor;
    int opcion, pos;
    int n = 0, i; 
    srand(time(NULL)); 

    do {
        printf("\nIngresa una opcion:\n");
        printf("1) Inicializar \n");
        printf("2) Mostrar arreglo \n");
        printf("3) Agregar elemento al final\n");
        printf("4) Agregar elemento en posicion especifica\n");
        printf("5) Borrar elemento en posicion especifica\n");
        printf("6) Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                system ("cls");
                for (i = 0; i < 5; i++) {

                    arreglo[i] = (float)(rand() % 10000); 
                }
                n = 5;
                printf("Arreglo inicializado con 5 valores aleatorios.\n");
                
                break;

            case 2:
                 system ("cls");
                if (n == 0) {
                    printf("El arreglo está vacio.\n");
                } else {
                    printf("Contenido del arreglo:\n");
                    for ( i = 0; i < n; i++) {
                        printf("%.2f ", arreglo[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                 system ("cls");
                if (n >= 10) {
                    printf("El arreglo esta lleno.\n");
                } else {
                    float valor;
                    printf("Ingresa el valor: ");
                    scanf("%f", &valor);
                    arreglo[n] = valor;
                    n++;
                }
                break;

            case 4:
                    system ("cls");
                    printf("Ingresa la posicion (0-9): ");
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= 10) {
                        printf("Posicion invalida.\n");
                    } else {
                        printf("Ingresa el valor: ");
                        scanf("%f", &valor);
                        for ( i = n; i > pos; i--) {
                            arreglo[i] = arreglo[i-1];
                        }
                        arreglo[pos] = valor;
                        n++;
                    }
                
                break;

            case 5:
                system ("cls");
                if (n == 0) {
                    printf("El arreglo esta vacio.\n");
                } else {
                    printf("Ingresa la posicion a borrar (0-%d): ", n-1);
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= n) {
                        printf("Posicion invalida.\n");
                    } else {
                        for (i = pos; i < n-1; i++) {
                            arreglo[i] = arreglo[i+1];
                        }
                        n--;
                        printf("Elemento borrado.\n");
                    }
                }
                break;

            case 6:
                system ("cls");
                printf("Pos ya\n");
                break;

            default:
                system ("cls");
                printf("Opcion invalida.\n");
                break;
        }

    } while (opcion != 6);

    getch ();
    return 0;
}
