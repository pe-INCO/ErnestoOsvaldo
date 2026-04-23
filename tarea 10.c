/*----------------------------------------------

Nombre: Ernesto Osvaldo Zavala Flores
Codigo:222261452
Este programa es una validacion

---------------------------------------------------*/
 #include <stdio.h>
#include <string.h>

int main (){

  int valido, tam, i, opcion;
  char nombre[50];
  int edad;
  float calificacion;

  do {
    printf("\nIngresa una opcion:\n");
    printf("1) Validar nombre\n");
    printf("2) Validar edad\n");
    printf("3) Validar calificacion\n");
    printf("4) Salir\n");
    scanf("%d", &opcion);
    while (getchar() != '\n'); 

    switch (opcion){

      case 1:
        do {
          valido = 1;
          printf("Ingresa el nombre del solicitante (3-40 caracteres): ");

          if (fgets(nombre, sizeof(nombre), stdin)) {
            nombre[strcspn(nombre, "\n")] = '\0';
          }

          tam = strlen(nombre);

          if (tam < 3 || tam > 40) {
            printf("Error: El nombre debe tener entre 3 y 40 caracteres.\n");
            valido = 0;
          } else {
            for (i = 0; i < tam; i++) {
              if (!((nombre[i] >= 'A' && nombre[i] <= 'Z') ||
                    (nombre[i] >= 'a' && nombre[i] <= 'z') ||
                    nombre[i] == ' ')) {
                printf("Error: Solo se permiten letras y espacios.\n");
                valido = 0;
                break;
              }
            }
          }

        } while (valido == 0);
      break;

      case 2:
        do {
          valido = 1;
          printf("Ingresa la edad (Minimo 18, maximo 80): ");

          if (scanf("%d", &edad) == 1) {
            if (edad < 18 || edad > 80) {
              printf("Error: Fuera del rango\n");
              valido = 0;
            }
          } else {
            printf("Error: Debes ingresar un numero valido.\n");
            valido = 0;
          }

          while (getchar() != '\n');

        } while (valido == 0);
      break;

      case 3:
        do {
          valido = 1;
          printf("Ingresa la calificacion (Minimo 0, maximo 100): ");

          if (scanf("%f", &calificacion) == 1) {
            if (calificacion < 0 || calificacion > 100) {
              printf("Error: Fuera del rango\n");
              valido = 0;
            }
          } else {
            printf("Error: Debes ingresar un numero valido.\n");
            valido = 0;
          }

          while (getchar() != '\n');

        } while (valido == 0);
      break;

      case 4:
        printf("Fin del programa.\n");
      break;

      default:
        printf("Opcion invalida.\n");
      break;
    }

  } while (opcion != 4);

  return 0;
}
