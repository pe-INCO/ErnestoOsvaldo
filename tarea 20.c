/*----------------------------------------
Nombre: Ernesto Osvaldo Zavala Flores
29/04/2026
Este codigo es para probar nuevas funciones
----------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char mayus[100], minus[100], reemplazo[100], frase[100];
    int longitud, i;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Eliminar salto de linea si existe
    frase[strcspn(frase, "\n")] = '\0';

    longitud = strlen(frase);

    // Copiar a mayus y minus
    strcpy(mayus, frase);
    strcpy(minus, frase);
    strcpy(reemplazo, frase);

    // Convertir a mayusculas
    for (i = 0; mayus[i]; i++) {
        mayus[i] = toupper((unsigned char)mayus[i]);
    }

    // Convertir a minusculas
    for (i = 0; minus[i]; i++) {
        minus[i] = tolower((unsigned char)minus[i]);
    }

    // Reemplazar todas las vocales
    for (i = 0; reemplazo[i]; i++) {
        switch (reemplazo[i]) {
            case 'a': case 'A': reemplazo[i] = '@'; break;
            case 'e': case 'E': reemplazo[i] = '@'; break;
            case 'i': case 'I': reemplazo[i] = '@'; break;
            case 'o': case 'O': reemplazo[i] = '@'; break;
            case 'u': case 'U': reemplazo[i] = '@'; break;
        }
    }

    // Mostrar resultados
    printf("\nLongitud de la cadena: %d\n", longitud);

    if (longitud >= 3) {
        printf("Primeros 3 caracteres: %.3s\n", frase);
        printf("Ultimos 3 caracteres: %s\n", &frase[longitud - 3]);
    } else {
        printf("La cadena es menor a 3 caracteres.\n");
    }

    printf("En mayusculas: %s\n", mayus);
    printf("En minusculas: %s\n", minus);
    printf("Reemplazo de vocales: %s\n", reemplazo);
 

    return 0;
}
