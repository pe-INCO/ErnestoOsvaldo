/*---------------------------------------
Nombre: Ernesto Osvaldo Zavala Flores
Codigo: 222261452
Este codigo calcula el promedio de 2 calificaciones

-----------------------------------------*/
#include <stdio.h>

int main (){
    float calif1, calif2, calif3;
    
    printf ("Ingresa la primera calificacion: ");
    scanf ("%f", &calif1);
    
    printf ("Ingresa la segunda calificacion: ");
    scanf ("%f", &calif2);
    
    printf ("Ingresa la tercera calificacion: ");
    scanf ("%f", &calif3);
    
    printf ("Tu calificacion es %f", (calif1 + calif2 + calif3)/3);
    
    getch ();
    return 0;
}
