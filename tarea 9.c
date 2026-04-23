/*----------------------------------------------

Nombre: Ernesto Osvaldo Zavala Flores
Codigo:222261452
Descripcion: Codigo que maneja calificaciones de usuarios

---------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
    int opcion=0, sino=0, aprobados=0, reprobados=0;
    float calif=0, suma=0, sumaAprobados=0, sumaReprobados=0;

    do {
        printf("\nIngresa una opcion.\n");
        printf("1: Ingresar calificaciones\n");
        printf("2: Ver estadisticas\n");
        printf("3: Reiniciar datos\n");
        printf("4: Salir\n");
        printf("Opcion: ");
        scanf("%d",&opcion);

        switch(opcion){

            case 1:
                system("cls");
                do {
                    do {
                        printf("Ingrese la calificacion (0 - 100): ");
                        scanf("%f", &calif);

                        if (calif < 0 || calif > 100) {
                            printf("Error: La calificacion debe estar entre 0 y 100.\n");
                        }

                    } while (calif < 0 || calif > 100);

                    suma += calif;

                    if (calif >= 60) {
                        aprobados++;
                        sumaAprobados += calif;
                    } else {
                        reprobados++;
                        sumaReprobados += calif;
                    }

                    printf("\n¿Quieres ingresar otra calificacion? (1=Si, 2=No): ");
                    scanf("%d", &sino);

                } while (sino != 2);
                break;

            case 2:
                system("cls");

                if ((aprobados + reprobados) > 0) {

                    printf("Total de calificaciones: %d\n", aprobados + reprobados);
                    printf("Promedio general: %.2f\n", suma/(aprobados + reprobados));
                    printf("Estudiantes aprobados: %d\n", aprobados);
                    printf("Estudiantes reprobados: %d\n", reprobados);

                    if (aprobados > 0)
                        printf("Promedio aprobados: %.2f\n", sumaAprobados / aprobados);

                    if (reprobados > 0)
                        printf("Promedio reprobados: %.2f\n", sumaReprobados / reprobados);

                } else {
                    printf("No hay calificaciones registradas.\n");
                }

                break;

            case 3:
                system("cls");
                printf("Datos eliminados exitosamente\n");

                aprobados=0;
                reprobados=0;
                suma=0;
                sumaAprobados=0;
                sumaReprobados=0;
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("La opcion ingresada no es valida\n");
        }

    } while(opcion != 4);

    printf("Programa finalizado.\n");
    getch();
    return 0;
}
