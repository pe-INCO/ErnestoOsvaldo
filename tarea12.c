/*----------------------------------------------

Nombre: Ernesto Osvaldo Zavala Flores
Codigo:222261452
Descripcion: Es para practicar las funciones

---------------------------------------------------*/

#include<stdio.h>

int numeroMagico();
int sumar (int a, int b);
void mostrarEdad (int edad);
void mensaje ();

int main(){
    int n1, n2, r;
    
    r=sumar(56, 77);
    printf ("\nEl resultado es: %d", r); 
    printf ("\nEl numero magico es: %d\n", numeroMagico());   
    mostrarEdad (7);
    mensaje ();
    getch();
    return 0 ;
    }

//Parametros - retornop
int sumar (int a, int b){
    int suma;
    suma = a+b;
    
    return  suma;
}

//sin parametros y retorno
int numeroMagico (){
    int numero = 67;
    return numero;
}
//parametros  y retono
void mostrarEdad (int edad){
     printf ("Tu edad es: %d anios\n", edad);
     }
     
//Sinparametros sin retorns
void mensaje (){
     printf ("Esto es un mensaje");
}
