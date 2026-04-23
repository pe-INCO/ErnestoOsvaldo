/*------------------------------------
Nombre: Ernesto Osvaldo Zavala Flores
Codigo: 222261452
Este codigo es una calculadora de figuras
-----------------------------------------*/

#include <stdio.h>
#define PI 3.1416

//Funciones
void mostrarMenu(void);
float areaCuadrado(float lado);
float areaRectangulo(float base, float altura);
float areaCirculo(float radio);
float areaTriangulo(float base, float altura);
int validarPositivo(float numero);

//Main
int main() {
    float radio, lado1, lado2;
    int opcion;

    do {
        mostrarMenu();
        printf("Ingresa una opcion:\n");

        if (scanf("%d", &opcion) != 1) {
            printf("Error: No es un número.\n");
            while (getchar() != '\n');
            opcion = 0; 
            continue;
        }

        switch (opcion) {
            case 1:
                printf("Ingresa un lado: ");
                if (scanf("%f", &lado1) != 1) {
                    printf("Error: No es un número.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (validarPositivo(lado1))
                    printf("El area del cuadrado es: %.2f\n", areaCuadrado(lado1));
                else
                    printf("Error: el valor debe ser positivo.\n");
                break;

            case 2:
                printf("Ingresa la base: ");
                if (scanf("%f", &lado1) != 1) {
                    printf("Error: No es un número.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("Ingresa la altura: ");
                if (scanf("%f", &lado2) != 1) {
                    printf("Error: No es un número.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (validarPositivo(lado1) && validarPositivo(lado2))
                    printf("El area del rectangulo es: %.2f\n", areaRectangulo(lado1, lado2));
                else
                    printf("Error: los valores deben ser positivos.\n");
                break;

            case 3:
                printf("Ingresa el radio: ");
                if (scanf("%f", &radio) != 1) {
                    printf("Error: No es un número.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (validarPositivo(radio))
                    printf("El area del circulo es: %.2f\n", areaCirculo(radio));
                else
                    printf("Error: el radio debe ser positivo.\n");
                break;

            case 4:
                printf("Ingresa la base: ");
                if (scanf("%f", &lado1) != 1) {
                    printf("Error: No es un número.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("Ingresa la altura: ");
                if (scanf("%f", &lado2) != 1) {
                    printf("Error: No es un número.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (validarPositivo(lado1) && validarPositivo(lado2))
                    printf("El area del triangulo es: %.2f\n", areaTriangulo(lado1, lado2));
                else
                    printf("Error: los valores deben ser positivos.\n");
                break;

            case 5:
                printf("Gracias por usar el programa.\n");
                break;

            default:
                printf("Error: numero fuera de las opciones.\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}

//Menu
void mostrarMenu(void) {
    printf("============================== Menu de Figuras ========================\n");
    printf("1. Area de un cuadrado\n");
    printf("2. Area de un rectangulo\n");
    printf("3. Area de un circulo\n");
    printf("4. Area de un triangulo\n");
    printf("5. Salir\n");
    printf("=======================================================================\n");
}

//Area cuadrado
float areaCuadrado(float lado) {
    return lado * lado;
}

//Area rectangulo
float areaRectangulo(float base, float altura) {
    return base * altura;
}

//Area circulo
float areaCirculo(float radio) {
    return PI * radio * radio;
}

//Area triangulo
float areaTriangulo(float base, float altura) {
    return (base * altura) / 2.0;
}

//Validar positivo
int validarPositivo(float numero) {
    return numero > 0;
}
