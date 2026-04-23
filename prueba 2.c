/*------------------------------------------
Nombre: Ernesto osvaldo Zavala Flores
codigo:222261452
fecha: 26/01/26
El codigo detecta si es numero, si es entero, si esta dentro del rango 0 al 100, y si es positivo o negativo
-------------------------------------------*/

#include <stdio.h>

int main(){
    float numero;
    
    printf ("Ingresa un numero de 0 a 100: ");

    
    if(scanf("%f",&numero)==1){
    if(numero == 0){
                 printf ("\nEl numero es 0.");
    } else if (numero > 0){
                 printf ("\nEl numero es positivo");
    } else {      
                 printf ("\nEl numero es negativo");
    }
    
    if ((numero > -1) && (numero < 101)){
         printf ("\nEl numero es valido");
    } else {
         printf ("\nEl numero es invalido");
    }
    
  if (numero == (int)numero) {
        printf("\nEl numero es entero.");
    } else {
        printf("\nEl numero es flotante.");
    }
    }else{
          printf ("Es una letra");
}      
   
    getch (); 
    return 0;
}

