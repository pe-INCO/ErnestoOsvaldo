/*+------------------------------+
Nombre: Ernesto Osvaldo Zavala Flores
Codigo: 222261452
Esto es una calculadora con funciones
---------------------------------------*/

#include <stdio.h>

float suma(float n, float m);
float resta(float n, float m);
float multi(float n, float m);
float division(float n, float m);

int main() {
    int opcion;
    float n1, n2;

    do {
        //Menu
        printf("\n============================================\n");
        printf("Ingresa la operacion que quieres realizar\n");
        printf("1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n5) Salir\n");
        printf("============================================\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                 //suma
                system("cls");
                printf("\nIngresa el primer numero: ");
                scanf("%f", &n1);
                printf("Ingresa el segundo numero: ");
                scanf("%f", &n2);
                printf("\n%.2f + %.2f = %.2f\n", n1, n2, suma(n1, n2));
                break;

            case 2:
                //resta
                system("cls");
                printf("\nIngresa el primer numero: ");
                scanf("%f", &n1);
                printf("Ingresa el segundo numero: ");
                scanf("%f", &n2);
                printf("\n%.2f - %.2f = %.2f\n", n1, n2, resta(n1, n2));
                break;

            case 3:
                //Multiplicacion
                system("cls");
                printf("\nIngresa el primer numero: ");
                scanf("%f", &n1);
                printf("Ingresa el segundo numero: ");
                scanf("%f", &n2);
                printf("\n%.2f * %.2f = %.2f\n", n1, n2, multi(n1, n2));
                break;

            case 4:
                //Division
                system("cls");
                printf("\nIngresa el primer numero: ");
                scanf("%f", &n1);
                printf("Ingresa el segundo numero: ");
                scanf("%f", &n2);
                if (n2 == 0) {
                    printf("Error: no se puede dividir entre 0\n");
                } else {
                    printf("\n%.2f / %.2f = %.2f\n", n1, n2, division(n1, n2));
                }
                break;

            case 5:
                system("cls");
                printf("¡Gracias por usar este programa!\n");
                break;

            default:
                system("cls");
                printf("Opcion invalida, intenta de nuevo.\n");
        }

    } while (opcion != 5);

    printf("Este es el fin del programa.\n");
    return 0;
}

//Fuciones
float suma(float n, float m) {
    return n + m;
}

float resta(float n, float m) {
    return n - m;
}

float multi(float n, float m) {
    return n * m;
}

float division(float n, float m) {
    return n / m;
}
