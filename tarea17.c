/*+------------------------------+
Nombre: Ernesto Osvaldo Zavala Flores
Codigo: 222261452
Esto es una calculadora con funciones
---------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUMNOS 5
#define MAX_NOMBRE 30
#define MAX_MATERIAS 4

int main() {
    int opcion, i, j, n = 0;
    char nombres[MAX_ALUMNOS][MAX_NOMBRE];
    float calificaciones[MAX_ALUMNOS][MAX_MATERIAS];

    do {

        printf("\n============================================\n");
        printf("Ingresa la operacion que quieres realizar\n");
        printf("1) Insertar\n2) Ver matriz\n3) Promedio estudiante\n4) Promedio materia\n5) Salir\n");
        printf("============================================\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                system("cls");
                if (n < MAX_ALUMNOS) {
                    printf("\nIngresa el nombre: ");
                    scanf("%s", nombres[n]);

                    for (i = 0; i < MAX_MATERIAS; i++) {
                        printf("\nIngresa la calificacion %d: ", i + 1);
                        scanf("%f", &calificaciones[n][i]);
                    }
                    n++; 
                } else {
                    printf("\nMatriz llena.\n");
                }
                break;

            case 2:
                system("cls");
                printf("\nLista de alumnos y calificaciones:\n");
                for (i = 0; i < n; i++) {
                    printf("%s: ", nombres[i]);
                    for (j = 0; j < MAX_MATERIAS; j++) {
                        printf("%.2f ", calificaciones[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                system("cls");
                printf("\nPromedio por estudiante:\n");
                for (i = 0; i < n; i++) {
                    float suma = 0;
                    for (j = 0; j < MAX_MATERIAS; j++) {
                        suma += calificaciones[i][j];
                    }
                    printf("%s: %.2f\n", nombres[i], suma / MAX_MATERIAS);
                }
                break;

            case 4:
                system("cls");
                printf("\nPromedio por materia:\n");
                for (j = 0; j < MAX_MATERIAS; j++) {
                    float suma = 0;
                    for (i = 0; i < n; i++) {
                        suma += calificaciones[i][j];
                    }
                    printf("Materia %d: %.2f\n", j + 1, suma / n);
                }
                break;

            case 5:
                printf("\nSaliendo...\n");
                break;

            default:
                printf("\nOpcion invalida.\n");
        }
    } while(opcion != 5);

    getch();
    return 0;
}
