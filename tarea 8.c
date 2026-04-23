/*---------------------------------
Nombre: Ernesto Osvaldo Zavala Flores
codigo: 22226145
Este codigo sirve para adivinar un numero.
----------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcion, numero, numUsuario, contador = 0, puntos = 0, sino = 0;
    srand(time(NULL));
    numero = (rand() % 50) + 1;

    do {
        if (contador == 5) {
            printf("\nNúmero de intentos superados. ¿Volver a intentar? 1)S1  2)No: ");
            scanf("%d", &sino);

            if (sino == 2) {
                opcion = 3;
            } else {
                contador = 0;
                numero = (rand() % 50) + 1; 
            }
        }

        if (opcion != 3) {
            printf("\nElige una opcion:\n1) Adivinar numero\n2) Ver puntos\n3) Salir  \n\nOpcion: ");
            scanf("%d", &opcion);

            if (opcion == 1) {
                printf("Ingresa un numero: ");
                scanf("%d", &numUsuario);

                if (numUsuario > numero) {
                    printf("El numero secreto es menor\n");
                    contador++;
                    puntos -= 5;
                } else if (numUsuario < numero) {
                    printf("El numero secreto es mayor\n");
                    contador++;
                    puntos -= 5;
                } else {
                    printf("¡Felicidades, adivinaste el numero!\n");
                    puntos += 10;
                    numero = (rand() % 50) + 1;
                    contador = 0; 
                }
            } else if (opcion == 2) {
                printf("Tus puntos actuales son: %d\n", puntos);
            } else if (opcion == 3) {

            } else {
                printf("Opcion invalida\n");
            }
        }
    } while (opcion != 3);

    printf("\nYa se acabo\n");
    getch ();
    return 0;
}
