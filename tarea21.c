/*+------------------------------+
Nombre: Ernesto Osvaldo Zavala Flores
Codigo: 222261452
Esto es para experimentar
---------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crear() {
    FILE *archivo = fopen("datos.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir archivo\n");
        return;
    }
    fprintf(archivo, "Juan, 20\n");
    fprintf(archivo, "Maria, 22\n");
    fprintf(archivo, "Pedro, 19\n");
    fclose(archivo);
    printf("Archivo creado con registros iniciales.\n");
}

void leer() {
    FILE *archivo = fopen("datos.txt", "r");
    char linea[100];
    if (archivo == NULL) {
        printf("No existe archivo para leer.\n");
        return;
    }
    printf("Contenido del archivo:\n");
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }
    fclose(archivo);
}

void actualizar(const char *nombre, const char *nuevo) {
    FILE *orig = fopen("datos.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    char linea[100];

    if (orig == NULL || temp == NULL) {
        printf("Error al abrir archivos.\n");
        return;
    }

    while (fgets(linea, sizeof(linea), orig) != NULL) {
        if (strstr(linea, nombre) != NULL) {
            fprintf(temp, "%s\n", nuevo); 
        } else {
            fputs(linea, temp);
        }
    }

    fclose(orig);
    fclose(temp);
    remove("datos.txt");
    rename("temp.txt", "datos.txt");
    printf("Registro actualizado.\n");
}

void borrar(const char *nombre) {
    FILE *orig = fopen("datos.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    char linea[100];

    if (orig == NULL || temp == NULL) {
        printf("Error al abrir archivos.\n");
        return;
    }

    while (fgets(linea, sizeof(linea), orig) != NULL) {
        if (strstr(linea, nombre) == NULL) {
            fputs(linea, temp); // copia todo menos el registro a borrar
        }
    }

    fclose(orig);
    fclose(temp);
    remove("datos.txt");
    rename("temp.txt", "datos.txt");
    printf("Registro borrado.\n");
}

int main() {
    int opcion;
    char nombre[50], nuevo[100];

    do {
        printf("\nMenu CRUD:\n");
        printf("1) Crear archivo\n");
        printf("2) Leer archivo\n");
        printf("3) Actualizar registro\n");
        printf("4) Borrar registro\n");
        printf("5) Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        getchar(); // limpiar buffer

        switch(opcion) {
            case 1:
                crear();
                break;
            case 2:
                leer();
                break;
            case 3:
                printf("Nombre a actualizar: ");
                fgets(nombre, sizeof(nombre), stdin);
                nombre[strcspn(nombre, "\n")] = 0; // quitar salto
                printf("Nuevo registro (ejemplo: Juan, 25): ");
                fgets(nuevo, sizeof(nuevo), stdin);
                nuevo[strcspn(nuevo, "\n")] = 0;
                actualizar(nombre, nuevo);
                break;
            case 4:
                printf("Nombre a borrar: ");
                fgets(nombre, sizeof(nombre), stdin);
                nombre[strcspn(nombre, "\n")] = 0;
                borrar(nombre);
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while(opcion != 5);
    

    return 0;
}
