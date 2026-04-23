#include <stdio.h>


	int arreglo [10]= {1, 2, 4, 55, 6, 7, 8, 9, 77, 666};
	int numero, i, encontrado=0;
	
int main() {
    
    do{
       printf ("\nIngresa el numero que deseas buscar: ");
          if ( scanf ("%d", &numero) != 1){
              printf ("\nNo es numero.");
              while (getchar() != '\n');
              continue;
              break; 
          }else{
              for (i = 0; i < 10; i++) {
                  if (arreglo[i] == numero) {
                  encontrado = 1;
                  printf("Numero encontrado en la posicion: %d\n", i);
                  break; 
                 }
               }
           }
           
       if (encontrado == 0) {
           printf("El numero no fue encontrado en el arreglo.\n");
       }
    
    }while (encontrado !=1);
         
    getch ();	
	return 0;
}

