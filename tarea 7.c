/*----------------------------------------------

Nombre: Ernesto Osvaldo Zavala Flores
Codigo:222261452
Descripcion: secuencia fibonacci

---------------------------------------------------*/

int main (){
    int fibonacci =1, limite, i, n1=0, siguiente = 0;
    
    printf ("Ingresa la cantidad de repeticiones primer valor de fibonacci: ");
         if(scanf("%d",&limite)==1){
         limite + 1;

         for (i=0; i<limite; i++){
             printf ("\nEl valor de fibonacci es de: %d",  n1);
             siguiente = n1 + fibonacci;
             n1 = fibonacci;
             fibonacci = siguiente;
         }
    } else {
    printf ("No es numero");
    }
    
    getch ();
    return 0;
}
