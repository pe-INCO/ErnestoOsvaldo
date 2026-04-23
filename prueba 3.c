/*
Nombre: Ernesto Osvaldo Zavala Flores
Codigo: 222261452
Fecha: 28/01/26
Este codigo compara 3 numeros entre ellos
*/

#include <stdio.h>

int main() {
    float numero1, numero2, numero3;


    printf("Ingresa el primer numero: ");
    scanf("%f", &numero1);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &numero2);

    printf("Ingresa el tercer numero: ");
    scanf("%f", &numero3);


    if (numero1 == numero2) {
        printf("%.2f es igual que %.2f\n", numero1, numero2);
    } else if (numero1 < numero2) {
        printf("%.2f es menor que %.2f\n", numero1, numero2);
    } else {
        printf("%.2f es mayor que %.2f\n", numero1, numero2);
    }

    if (numero2 == numero3) {
        printf("%.2f es igual que %.2f\n", numero2, numero3);
    } else if (numero2 < numero3) {
        printf("%.2f es menor que %.2f\n", numero2, numero3);
    } else {
        printf("%.2f es mayor que %.2f\n", numero2, numero3);
    }

    if (numero1 == numero3) {
        printf("%.2f es igual que %.2f\n", numero1, numero3);
    } else if (numero1 < numero3) {
        printf("%.2f es menor que %.2f\n", numero1, numero3);
    } else {
        printf("%.2f es mayor que %.2f\n", numero1, numero3);
    }

    getch(); 
    return 0;
}
